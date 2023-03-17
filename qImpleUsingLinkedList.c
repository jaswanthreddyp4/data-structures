#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *head;

void insert_beginning();
void delete_begin();
void display();

void main(){
    int ch;
    while(1){
        printf("enter choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert_beginning();
            break;
           case 2: delete_begin();
            break;
            case 3: display();
            break;
            default: printf("invalid choice");
        }
    }
}
void insert_beginning(){
    struct node *ptr;
    int item;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    printf("linked list is empty\n");
    else{
        printf("enter item\n");
        scanf("%d",&item);
        ptr->data=item;
        ptr->link=head;
        head=ptr;
        }
}

void display(){
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    printf("linked list is empty\n");
    else{
    while(ptr->link!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    printf("%d\t",ptr->data);
}
}
void delete_begin(){
    struct node *ptr;
    ptr=head;
    if(head==NULL)
    printf("linked list is empty");
    else{
        head=head->link;
        ptr->link=NULL;
        free(ptr);
    }
}
