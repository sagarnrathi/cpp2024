#ifndef _LIST_H
#define _LIST_H

//symbolic constant 
#define SUCCESS 1
#define LIST_INVALID_DATA 2
#define LIST_EMPTY 3
#define TRUE 1
#define FALSE 0

//TYPEDEFS

typedef int data_t;
typedef int status_t;
typedef unsigned int len_t;
typedef struct node node_t;
typedef node_t list_t;

struct node {
    data_t data;
    struct node* next;
    struct node* prev;
};

list_t *create_list(void);
status_t insert_start(list_t *plist,data_t new_data);
status_t insert_end(list_t *plist, data_t new_data);
status_t insert_after(list_t *p_list,data_t e_data,data_t new_data);
status_t insert_before(list_t *plist,data_t e_data,data_t new_data);


status_t get_start(list_t *p_list,data_t* p_data);
status_t get_end(list_t *p_list,data_t *p_data);
status_t pop_start(list_t *p_list,data_t *p_data);
status_t pop_end(list_t *p_list,data_t *p_data);

#endif 