#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *temp = NULL;

//creating node

void creating_node(int value){
    
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = temp;
    
    if(head == NULL){
        head = tail = temp;
    }
    else{
        tail->link = temp;
        tail = temp;
        tail->link = head;
    }
}

//insert begin

void insert_begin(int value){
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = temp;
    
    if(head == NULL){
        head = tail = temp;
    }
    else{
        temp->link = head;
        head = temp;
        tail->link = head;
    }
}

//insert end

void insert_end(int value){
    
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->link = temp;
    
    if(head == NULL){
        head = tail = temp;
    }
    else{
        tail->link = temp;
        tail = temp;
        tail->link = head;
    }
}

//inserting position

void insert_pos(int value,int pos){
    
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    
    if(pos == 1){
        insert_begin(value);
        return;
    }
    
    struct node *temp2 = NULL;
    temp2 = (struct node *)malloc(sizeof(struct node));
    temp2->data = value;
    temp2->link = head;
    
    
    temp = head;
    for(int i=1;i<pos-1;i++){
        temp = temp->link;
    
        if(temp == head){
            printf("valie is invalid!\n");
            free(temp2);
            return;
        }
    }    
    temp2->link = temp->link;
    temp->link = temp2;
    
    if(temp == tail){
        tail = temp2;
    }
}

//delete begin

void delete_begin(){
    
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    
    if(head == tail){
        free(head);
        head = tail = NULL;
        return;
    }
    
    struct node *ptr = head;
    head = head->link;
    tail->link = head;
    free(ptr);
    
}

//delete end

void delete_end(){
    
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    
    if(head == tail){
        free(head);
        head = tail = NULL;
        return;
    }
    struct node *ptr = head;
    while(ptr->link->link!=head){
        ptr = ptr->link;
    }
    
    free(ptr->link);
    tail = ptr;
    tail->link = head;
    
}

//delete pos

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
    
    for(int i=1;i<pos;i++){
        ptr2 = ptr1;
        ptr1 = ptr1->link;
        
        if(ptr1 == head){
            printf("invalid position!\n");
            return;
        }
    }
    
    ptr2->link = ptr1->link;
    if(ptr1 == tail){
        tail = ptr2;
    }
    
    tail->link = head;
    free(ptr1);
}

//reverse

void reverse(){
    
    if(head == NULL){
        printf("list is empety!\n");
        return;
    }
    
    struct node *ptr1 = NULL;
    struct node *ptr2 = NULL;
    
    tail = head;
    temp = head;
    do{
        ptr2 = temp->link;
        temp->link = ptr1;
        ptr1 = temp;
        temp = ptr2;
    }while(temp != head);
    head = ptr1;
    tail->link = head;
}

//printing nodes

void print(){
    if(head == NULL){
        printf("list is empety!");
        return;
    }
    temp = head;
    do{
        printf("->%d",temp->data);
        temp = temp->link;
    }while(temp!=head);
    
    printf("\n");
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
    printf("after creating nodes:\n");
    print();
    printf("after inserting nodes in begin,end and pos:\n");
    insert_begin(9);
    insert_end(15);
    insert_pos(21,3);
    print();
    printf("after deleting nodes in begin,end and pos:\n");
    delete_begin();
    delete_end();
    delete_pos(3);
    print();
    printf("reversing the list:\n");
    reverse();
    print();
    
    return 0;
}
