#ifndef _LIST_HPP
#define _LIST_HPP

#include<iostream>
const int SUCCESS           =   1;
const int LIST_INVALID_DATA =   2;
const int LIST_EMPTY        =   3;

typedef int status_t;

template <typename T>
class list;

template <typename T>
class node {
    friend class list<T>;
    friend std :: ostream & operator<<(std :: ostream &os,const list<T> &list_object);
    
    private :
        T data;
        node *prev;
        node *next;

        node(const T & _data): data(_data),prev(0),next(0){

        }
        node():prev(0),next(0){

        }
};

template <typename T>
class list{
     private :
         node<T> * head_node;
         static void generic_insert(node<T> *start,node<T> *mid,node<T> *end){
            mid -> next = end;
            mid -> prev = start;
            start -> next = mid;
            end -> prev = mid;
         }

         static void generic_delete(node<T> * del_node){
            del_node -> next -> prev = del_node -> prev;
            del_node -> prev -> next = del_node -> next;
            delete del_node;
         }
        
        node<T> *search_node(const T &data){
            for(node<T> *run =  head_node-> next;run != head_node ; run = run -> next)
              if(run -> data == data)
                 return run;
            return 0;
        }
    
    public :
      
      list() : head_node(new node<T>){
        head_node -> next = head_node;
        head_node -> prev = head_node;
      }
      
      ~list(){
        node<T> *run;
        node<T> *run_next;
        run = head_node -> next;
        while(run != head_node){
            run_next = run -> next;
            delete run;
            run = run_next;
        }
        delete head_node;
        head_node = 0;
      }

      status_t insert_start(const  T &data){
        generic_insert(head_node, new node<T>(data),head_node -> next );
        return SUCCESS;
      }

      status_t insert_end(const T &data){
        generic_insert(head_node -> prev, new node<T> (data),head_node);
        return SUCCESS;
      }

      status_t insert_after(const T &e_data,const T & new_data){  
        node<T> * e_node = search_node(e_data);
        if(e_node == 0)
            return LIST_INVALID_DATA;
        generic_insert(e_node,new node<T> (new_data),e_node->next)
        return SUCCESS;
      }

      status_t insert_before(const T &e_data,const T &new_data){
        node<T> *e_node = search_node(e_data);
        if(e_nod == 0)
            return LIST_INVALID_DATA ;
        generic_insert(search_node -> prev , new node<T>(new_data),e_node);
        return SUCCESS;
      }

      status_t get_start(T *p_data){
        if(empty())
            return LIST_EMPTY;
        *p_data = head_node -> next -> data;
        return SUCCESS;
      }

      status_t get_end(T *p_data){
        if(empty())
            return LIST_EMPTY;
        *p_data = head_node -> prev -> data ;
        return SUCCESS;
      }

      status_t pop_start(T *p_data){
        if(empty())
           return LIST_EMPTY;
        *p_data = head_node -> next -> data;
        generic_delete(head_node -> next);
        return SUCCESS;
      }

      status_t pop_end(T *p_data){
        if(empty())
            return LIST_EMPTY;
        
        *p_data = head_node -> prev -> data ;
        generic_delete(head_node -> prev);
        return SUCCESS;
      }

      status_t remove_start(){
        if(empty())
           return LIST_EMPTY;
        generic_delete(head_node -> next);
        return SUCCESS;
      }

      status_t remove_end(){
        if(empty())
           return LIST_EMPTY ;
        generic_delete(head_node -> prev);
        return SUCCESS;
      }

      size_t size() const{
        size_t n = 0;
        for(node<T> *run = head_node -> next ; run != head_node ; run = run -> next)
          n = n +1 ;
        
        return n;
      }

      bool empty() const {
        return head_node -> next == head_node && head_node -> prev == head_node;
      }

      friend std :: ostream &operator<<(std :: ostream &os,const list<T> & list_obj){
        os <<"[START]";
        for(
          node<T> *run = list_obj.head_node -> next;
          run != list_obj.head_node;
          run = run -> next
        )
        os << "[" << run -> data <<"]<->";
        return os;
      }

      class iterator{
        private :
             node<T> *p_node;
        public :
            iterator(node<T> *_node) : p_node(_node){

            }
            iterator(): p_node(0){

            }
            
            iterator operator++(){
              p_node = p_node -> next;
              return *this;
            }

            iterator operator++(int){
              iterator tmp(p_node);
              p_node = p_node -> next;
              return tmp;
            }

            iterator operator--(){
              p_node = p_node -> prev;
              return *this;
            }

            iterator  operator--(int){
              iterator tmp(p_node);
              p_node = p_node -> prev;
              return tmp;
            }

            T operator*(){
              return p_node -> data;
            }

            bool operator==(const iterator &other){
              return p_node == other.p_node;
            }
            bool operator !=(const iterator &other){
              return p_node != other.p_node;
            }

      };
      
      iterator begin(){
        return iterator(head_node -> next);
      }
      iterator end(){
        return iterator(head_node);
      }

};

#endif  //_list_hpp