#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head = NULL;
struct node *temp = NULL;
struct node *tail = NULL;

//creating a node

void creating_node(int value){

    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;

    if(head == NULL){
        head = tail = temp;
    }
    else{
        tail->link = temp;
        tail = temp;
    }
}

//insert at insert_begin

void insert_begin(int value){
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;
    if(head == NULL){
        head = tail =temp;
    }
    else{
        temp->link = head;
        head = temp;
    }
}

//insert at insert_end

void insert_end(int value){
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp -> link = NULL;
    if(head == NULL){
        head = tail = temp;
    }
    else{
        tail->link = temp;
        tail = temp;
    }
}

//insert at position

void insert_pos(int value,int pos){
    struct node *temp2 = NULL;
    temp2 = (struct node *)malloc(sizeof(struct node));
    temp2->data = value;
    temp2->link = NULL;
    
    if(pos == 1){
        insert_begin(value);
        return;
    }
    
    temp = head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp = temp->link;
    }
    
    if(temp == NULL){
        printf("invalid position!\n");
        free(temp2);
        return;
    }
    
    temp2->link = temp->link;
    temp->link = temp2;
}

//printing the nodes

void print(){
    temp = head;
    while(temp!=NULL){
        printf("->%d",temp->data);
        temp = temp->link;
    }
    printf("\n");
}

//delete at begin

void delete_begin(){
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    struct node *ptr = head;
    head = head->link;
    free(ptr);
    
    if(head == NULL){
        tail = NULL;
    }
}

//deleter at end

void delete_end(){
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    if(head->link == NULL){
        free(head);
        head = tail = NULL;
        return;
    }
    struct node *ptr = head;
    while(ptr->link->link!=NULL){
        ptr = ptr->link;
    }
    free(ptr->link);
    ptr->link = NULL;
    tail = ptr;
}

//delete at position

void delete_pos(int pos){
    
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    
    if(pos == 1){
        delete_begin();
        return;
    }
    
    struct node *ptr1 = head;
    struct node *ptr2 = NULL;
    for(int i=1;i<pos && ptr1!=NULL;i++){
        ptr2 = ptr1;
        ptr1 = ptr1->link;
    }
    
    if(ptr1 == NULL){
        printf("invalid position!\n");
        return;
    }
    
    ptr2->link = ptr1->link;
    
    if(ptr1 == tail){
        tail = ptr2;
	tail->link = NULL;
    }
    free(ptr1);
    
}

//reverse

void reverse(){
    struct node *ptr1=NULL;
    struct node *ptr2=NULL;
    tail = head;
    
    while(head!=NULL){
        ptr2 = head->link;
        head->link = ptr1;
        ptr1 = head;
        head = ptr2;
    }
    head = ptr1;
}

void delete_all(){
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    
    while(head!=NULL){
        temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    
    if(head == NULL){
        tail = NULL;
        printf("all nodes are deleted!\n");
    }
}

//main function

int main(){
    int value;
    while(1){
        printf("enter the number:");
        scanf("%d",&value);
        if(value == -1){
            break;
        }
        else{
            creating_node(value);
        }
    }
    insert_begin(9);
    insert_pos(21,1);
    insert_end(15);
    printf("printing node after inserting\n");
    print();
    delete_begin();
    delete_pos(4);
    delete_end();
    printf("printing node after deleting\n");
    print();
    reverse();
    printf("after reversing linked list\n");
    print();
    return 0;
}

