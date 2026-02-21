#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *temp = NULL;

void creating_node(int value){
    
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = value;
    temp->next = NULL;
    
    if(head == NULL){
        head = tail = temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insert_begin(int value){
    
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = value;
    temp->next = NULL;
    
    if(head == NULL){
        head = tail = temp;
    }
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insert_end(int value){
    
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = value;
    temp->next = NULL;
    
    if(head == NULL){
        head = tail = temp;
    }
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insert_pos(int value,int pos){
    
    struct node *temp2 = NULL;
    temp2 = (struct node *)malloc(sizeof(struct node));
    temp2->prev = NULL;
    temp2->data = value;
    temp2->next = NULL;
    
    if(pos ==1){
        insert_begin(value);
        return;
    }
    
    temp = head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp = temp->next;
    }
    
    if(temp == NULL){
        printf("invalid position!\n");
        free(temp2);
        return;
    }
    
    temp2->next = temp->next;
    temp2->prev = temp;

    if(temp->next != NULL){
        temp->next->prev = temp2;
    } 
    else {
        tail = temp2;   
    }

    temp->next = temp2;
    
}

void delete_begin(){
    
    if(head == NULL){
        printf("list is empety\n");
        return;
    }
    
    struct node *ptr = head;
    if(head == NULL){
        head = tail = NULL;
    }
    else{
        head = head->next;
        head->prev = NULL;
    }
    free(ptr);
}

void delete_end(){
    
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    struct node *ptr = tail;
    if(head == NULL){
        head = tail = NULL;
    }
    else{
        tail = tail->prev;
        tail->next = NULL;
    }
    free(ptr);
    
}

void delete_pos(int pos){
    
    if(pos == 1){
        delete_begin();
        return;
    }
    
    struct node *ptr1 = head;
    struct node *ptr2 = NULL;
    for(int i=1;i<pos && ptr1!=NULL;i++){
        ptr2 = ptr1;
        ptr1 = ptr1->next;
    }
    
    if(ptr1 == NULL){
        printf("invalid position!\n");
        return;
    }
    
    if(ptr1 == tail){
        ptr2->next = NULL;
        tail = ptr2;
    }
    else{
        ptr2->next = ptr1->next;
        ptr1->next->prev = ptr2;
    }
    free(ptr1);
    ptr1 = NULL;
}

void print(){
    temp = head;
    while(temp!=NULL){
        printf("->%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}


void reverse(){
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    
    struct node *ptr1 = head;
    struct node *ptr2 = ptr1->next;
    
    tail = head;
    
    ptr1->next = ptr1->prev;
    ptr1->prev = ptr2;
    while(ptr2!=NULL){
        ptr2->prev = ptr2->next;
        ptr2->next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2->prev;
    }
    head = ptr1;
}

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

