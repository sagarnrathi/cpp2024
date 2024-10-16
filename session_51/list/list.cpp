#include<iostream>
#include "list_exception.hpp"
#include "list.hpp"

sagar :: dsa :: node :: node(int _data) : data(_data),prev(0),next(0){

}

void sagar :: dsa :: list :: generic_insert(sagar :: dsa :: node *start,
                                            sagar :: dsa :: node *mid, sagar :: dsa :: node *end){

                                            mid -> next = end;
                                            mid -> prev = start;
                                            end -> prev = mid;
                                            start -> next = mid;
}

void sagar :: dsa :: list :: generic_delete(sagar :: dsa :: node *delete_node){
    delete_node -> prev -> next = delete_node -> next;
    delete_node -> next -> prev = delete_node -> prev;
    delete delete_node;
}

sagar :: dsa :: node * sagar :: dsa:: list :: search(int search_data){
    for(node *run = head_node -> next ; run != head_node ; run = run-> next)
      if(run-> data == search_data)
         return run;
    return 0;
}

sagar :: dsa :: list :: list() : head_node(new node(0)){
    head_node -> next = head_node;
    head_node -> prev = head_node;
}

sagar :: dsa :: list ::~list(){
    node *run  = 0;
    node *run_next = 0;
    for(run = head_node-> next ;run != head_node ; run = run_next )
    {
        run_next = run -> next;
        delete run;
    }
}

void sagar :: dsa :: list :: insert_start(int data){
    generic_insert(head_node, new node(data),head_node->next);
}

void sagar :: dsa :: list:: insert_end(int data){
    generic_insert(head_node->prev,new node(data), head_node);
}   

void sagar :: dsa :: list :: insert_after(int e_data, int n_data){
    node * e_node = search(e_data);
    if(e_node  == 0)
        throw list_invalid_data("insert after exiting data does not exist");
    generic_insert(e_node,new node(n_data),e_node -> next);
}

void sagar :: dsa :: list :: insert_before(int e_data,int n_data){
    node *e_node = search(e_data);
    if(e_node == 0)
        throw list_invalid_data("insert befor exiting data does not exist");
    generic_insert(e_node -> prev,new node(n_data),e_node);
}

int sagar :: dsa ::list :: get_start() const{
    if(empty())
        throw list_empty("get_start() can not get start from empty list()");
    return head_node->next-> data;
}

int sagar :: dsa :: list :: get_end() const {
    if(empty())
        throw list_empty("get_end() can not get end from empty list()");
    return head_node ->prev -> data;
}

int sagar::dsa::list :: pop_start(){
    if(empty())
       throw list_empty("pop_start() can not pop start from empty list()");
    int ret = head_node -> next -> data ;
    generic_delete(head_node -> next);
    return ret;
}

int sagar :: dsa :: list ::pop_end(){
    if(empty())
       throw list_empty("pop_end() can not pop end from empty list()");
    int data = head_node -> prev -> data;
    generic_delete(head_node -> prev);
    return data;
}

void sagar :: dsa :: list :: remove_start(){
    if(empty())
        throw list_empty("remove start can not remove from emoty list");
    generic_delete(head_node -> next);
}

void sagar :: dsa :: list :: remove_end(){
    if(empty())
        throw list_empty("remove end cannot remove from empty list");
    generic_delete(head_node -> prev);
}

void sagar :: dsa :: list :: remove_data(int r_data){
    node *p  = search(r_data);
    if(p == 0)
       throw list_invalid_data("remove datanot found");
    generic_delete(p);
}

bool sagar :: dsa :: list :: find(int f_data) const {
    node *f_node = const_cast<sagar:: dsa:: list*>(this)->search(f_data);
    return f_node !=0;
}

bool sagar :: dsa :: list :: empty() const {
    return head_node->next == head_node  && head_node -> prev == head_node;
}

std :: size_t sagar:: dsa ::list  :: size() const {
    std :: size_t size = 0;
    for(node *run = head_node -> next ; run != head_node ; run = run ->next)
        size+=1;
    return size;    
}

std :: ostream & sagar :: dsa :: operator <<(std :: ostream &os,const list &list_object){
    os <<"[START]";
   for(
    sagar :: dsa :: node *run = list_object.head_node -> next;
    run != list_object.head_node;
    run = run -> next
   )
   os << "[" << run -> data <<"]<->";

   os <<"[END]" << std :: endl;
   return os;
}