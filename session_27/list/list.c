#include<stdio.h>
#include<stdlib.h>
#include "list.h"




list_t *create_list(void){
     list_t * list = (list_t *) malloc(sizeof(struct node));
     list -> data = 0;
     list -> prev = NULL;
     list -> next = NULL;
     return list;
}
status_t insert_start(list_t *plist,data_t new_data);
status_t insert_end(list_t *plist, data_t new_data);
status_t insert_after(list_t *p_list,data_t e_data,data_t new_data);
status_t insert_before(list_t *plist,data_t e_data,data_t new_data);

status_t get_start(list_t *p_list,data_t* p_data){
    if(p_list -> next == NULL)
        return LIST_EMPTY ;
    *p_data = p_list -> next -> data;
    return SUCCESS;

}
status_t get_end(list_t *p_list,data_t *p_data)
{
    if(p_list -> prev == NULL)
        return LIST_EMPTY ;
    *p_data = p_list -> prev -> data;
    return SUCCESS;

}
status_t pop_start(list_t *p_list,data_t *p_data){
    if(p_list -> next == NULL)
           return LIST_EMPTY ;
    *p_data = p_list -> next -> data;
    delete_node(p_list,p_list->next,p_list -> next -> next);
    return SUCCESS;
}
status_t pop_end(list_t *p_list,data_t *p_data){
    if(p_list -> prev == NULL)
           return LIST_EMPTY ;
    *p_data = p_list -> next -> data;
    delete_node(p_list,p_list->prev,p_list -> prev -> prev);
    return SUCCESS;
}

status_t delete_node(node_t *pdelete){
     
     pdelete -> next = pdelete -> prev;
     pdelete -> prev   = pdelete  -> next ;
     free(pdelete);
     return SUCCESS;
}