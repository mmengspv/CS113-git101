// 6210406734 Supavet Amornruksakul
#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *create_list(struct node **head_ref,int num){
    struct node *new_node ;
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = num;

    if(*head_ref == NULL){
        new_node->next = NULL;
        *head_ref = new_node;
    }
    else if(*head_ref != NULL){
        struct node *tmp = *head_ref;
        struct node *prev = NULL;
        while(1){
            if(tmp == NULL || tmp->data >= new_node->data){
                break;
            }
            prev = tmp;
            tmp = tmp->next;
        }
        new_node->next = tmp;
        if(prev == NULL){
            *head_ref = new_node ;
        }
        else{
            prev->next = new_node;
        }
    }
}

void print_list(struct node *head){
    struct node *tmp;
    for(tmp = head ; tmp ; tmp = tmp->next){
        printf("%d\n",tmp->data);
    }
}

int main(){
    struct node *head ;
    head = NULL;
    while(1){
        int inn ;
        scanf("%d",&inn);
        if(inn == -1){
            break;
        }
        create_list(&head,inn);
    }
    print_list(head);
}