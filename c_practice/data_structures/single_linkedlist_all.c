#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;

void creating_node(int value){
	tail=(struct node *)malloc(sizeof(struct node));
	tail->data=value;
	tail->link=NULL;

	if(head==NULL){
		head=tail;
	}
	else{
		temp=head;
		while(temp->link!=NULL){
			temp=temp->link;
		}
		temp->link=tail;
	}
}
void inserting_begin(int value){
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=value;
	temp->link=NULL;

	temp->link=head;
	head=temp;
}
void inserting_end(int value){
	 tail=(struct node *)malloc(sizeof(struct node));
        tail->data=value;
        tail->link=NULL;

	temp=head;
	while(temp->link!=NULL){
                        temp=temp->link;
        }
       	temp->link=tail;
}
void inserting_pos(int value,int pos){
	struct node *temp2=(struct node *)malloc(sizeof(struct node));
	temp2->data=value;
	temp2->link=NULL;

	temp=head;
	while(temp->link!=NULL){
		if(pos==1){
			break;
		}
		else{
			temp=temp->link;
			pos--;
		}
	}
	temp2->link=temp->link;
	temp->link=temp2;
}
void deleting_begin(){
	if(head==NULL){
		printf("the linked list is empety!\n");
	}
	else{
		temp=head;
		head=head->link;
		free(temp);
		temp=NULL;
	}
}
void deleting_end(){
	if(head==NULL){
		printf("the linked list is empety!\n");
	}
	else if(head->link==NULL){
		free(head);
		head=NULL;
	}
	else{
		temp=head;
		while(temp->link->link!=NULL){
			temp=temp->link;
		}
		free(temp->link);
		temp->link=NULL;
		tail=temp;
	}
}
void deleting_pos(int pos){
	if(head==NULL){
		printf("the linked list is empety!\n");
	}
	else{
		struct node *ptr1=head;
		struct node *ptr2=NULL;

		while(ptr1->link!=NULL){
			if(pos==1){
				break;
			}
			else{
				ptr2=ptr1;
				ptr1=ptr1->link;
				pos--;
			}
		}
		ptr2->link=ptr1->link;
		free(ptr1);
		ptr1=NULL;
	}
}
void deleting_all(){
	if(head==NULL){
		printf("the linked list is empety!\n");
	}
	else{
		while(head!=NULL){
			temp=head;
			head=head->link;
			free(temp);
			temp=NULL;
		}
	}
}
void reverse(){
	if(head==NULL){
                printf("the linked list is empety!\n");
        }
	else{
		struct node *ptr1=NULL;
		struct node *ptr2=NULL;
		while(head!=NULL){
			ptr2=head->link;
			head->link=ptr1;
			ptr1=head;
			head=ptr2;
		}
		head=ptr1;
	}
}
void print(){
	if(head==NULL){
		printf("the linked list is empety!\n");
	}
	else{
		temp=head;
		while(temp!=NULL){
			printf("%d->",temp->data);
			temp=temp->link;
		}
		printf("NULL");
	}
}
int count_nodes(int count){
	temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->link;
	}
	return count;
}
int main(){
	int value;
	while(1){
		printf("enter the value :");
		scanf("%d",&value);
		if(value==-1){
			break;
		}
		else{
			creating_node(value);
		}
	}
	deleting_begin();
	deleting_end();
	deleting_pos(4);

	inserting_begin(10);
	inserting_pos(14,4);
	inserting_end(17);

	printf("after insert and delete operations :\n");
	print();
	printf("\n");

	reverse();

	printf("after reversing the linked list :\n");
        print();
        printf("\n");

	int count=0;
	printf("counting the nodes %d\n",count_nodes(count));

	deleting_all();
	print();
	return 0;
}
