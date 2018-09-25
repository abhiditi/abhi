#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include <cstdlib> 
using namespace std;
struct Node{
	int data;
	struct Node * next;
};
// Create a node
/*struct Node* newNode(int data){
	struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
	temp->next= NULL;
	temp->data= data;
	return temp;
}*/
// Insertion 
int Insertion(struct Node** head, int data, int pos)
{
	int k=1;
	struct Node *p, *q, *newnode;
	newnode=(Node*)malloc(sizeof(struct Node));
	if(!newnode){
		printf("Memory Error");
		return 0;
	}
	newnode->data=data;
	p=*head;
	if(pos==1){
		newnode->next=p;
		*head=newnode;
	}
	else{
		while((p!= NULL)&& (k<pos))
		{
		q->next=newnode;
		newnode->next=p;
	}}
}
int main()
{
	Node** head;
	 int data, pos;
	 char ch;
  do{
  cout<<"Enter the position to insert in Linked List"<<"\n";
  cin>>pos;
  cout<<"Enter the Data to insert"<<"\n";
  cin>>data;
  int Insertion(Node** head, int data,int pos);	
  cout<<"Insert more ? Y/N"<<"\n";
  cin>>ch;
  }
  while(ch == 'Y'|| ch == 'y,');
   cout<<"end";
  	
  return 0;
}


