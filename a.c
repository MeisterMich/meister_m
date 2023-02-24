#include <stdio.h>
#include <stdlib.h>

typedef struct list{
    int id;
    int *value;
    
    struct list *next;
} node;

node *add_node(int set_id, int *set_value){
    node *new_node = (node *)malloc(sizeof(node));
    
    node->id=set_id;
    node->value=set_value;
    node->next=NULL;
}

void main(){

    node *new_list=add_node(0,15);
    while(list!=NULL){
        printf("index is %d, value is %d \n", new_list->id, new_list->value);
        new_list=new_list->next;
    }
}
