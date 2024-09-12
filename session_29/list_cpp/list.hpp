#ifndef _LIST_H
#define _LIST_H

#include<iostream>

const int SUCCESS = 1;
const int LIST_INVALID_DATA = 2;
const int LIST_EMPTY = 3;

typedef int data_t;
typedef int status_t;
typedef unsigned int len_t;

class node{
       
       friend class list;
       friend std :: ostream &operator<<(std :: ostream &os,const list & list_object);

       private :
           data_t data;
           node * next;
           node *prev;
           node(data_t data =0);
};

class list{
    private :
         node * head_node;
         static void generic_insert(node *p_start,node *mid,node *end);
         static void generic_delete(node *p_delete);
         node * search_node(data_t search_data) const;

         public :
              list();
              ~list();
              status_t insert_start(data_t new_data);
              status_t insert_end(data_t new_data);
              status_t insert_after(data_t new_data,data_t e_data);
              status_t insert_before(data_t new_data,data_t e_data);

              status_t get_start(data_t *p_data);
              status_t get_end(data_t *p_data);
              status_t pop_end(data_t *p_data);
              status_t pop_start(data_t *p_data);

              status_t remove_start();
              status_t remove_end();
              status_t remove_data(data_t r_data);
              bool is_empty()const;
              bool find(data_t f_data) const;
              len_t length() const;

              friend std :: ostream& operator <<(std :: ostream &os,const list &list_object);

              
};
#endif 