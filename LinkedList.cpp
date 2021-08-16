#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){

    data = val;
    next = NULL;
    }


};
class Node1{
public:
    int data;
    Node1* next;
    Node1* prev;
    Node1(int val){

    data = val;
    next = NULL;
    prev = NULL;
    }


};
void insertAtHead(Node *& head, int val){
    Node* n = new Node(val);

    n->next = head;
    head = n;
}
void insertAtTail(Node *&head, int val){

    Node *n = new Node(val);

      if(head==NULL){
        head = n;
        return;
    }

    Node * temp = head;
    while(temp->next!=NULL){

        temp = temp->next;
    }
    temp->next = n;

}
bool searchKey(Node *head, int key){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }

        temp = temp->next;
    }
    return false;


}
void deletion(Node* &head, int val){

    Node* temp = head;

    if(head==NULL){
        return;
    }
    if(temp->data==val ){
        head = head->next;
        delete temp;
    }
    if(head->next==NULL){
        delete head;
    }


    while(temp!=NULL && temp->next->data != val){
        temp = temp->next;
    }
    Node* del = temp->next;
    temp->next = temp->next->next;
    delete(del);

}
Node* reverseList(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* nex;
    while(curr!=NULL){
        nex =  curr->next;
        curr->next = prev;

        prev = curr;
        curr = nex;
    }
    return prev;
}
Node* reverseRecurrsive(Node* &head){

    if(head==NULL || head->next=NULL)
    {
        return head;
    }

    Node * newHead = reverseRecurrsive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;

}
Node* reverseK(Node* &head, int k){
    Node* prev = NULL;
    Node* curr = head;
    Node* nex;
    int count =0;
    while(curr!=NULL && count<k){
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        count++;
    }
    if(nex!=NULL){
        head->next = reverseK(nex,k);
    }
    return prev;
}
bool detectCycle(Node* & head){
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(fast==slow){
            return true;
        }
        return false;
    }

}
void removeCycle(Node* &head){
    Node* slow =head;
    Node* fast = head;
    do{
        slow= slow->next;
        fast = fast->next->next;
    }
    while(slow!=fast);
    fast = head;
    while(slow->next!=fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL:

}
void makeCycle(Node* &head,int pos){
    Node* temp = head;
    Node* startNode;
    int count = 1;
    while(temp->next!=NULL){
        if(count== pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startNode;

}
void display(Node* head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;

}
void insertAtHead_dl(Node1* &head,int val){
    Node1* n = new Node1(val);
    n->next = head;
    if(head!=NULL){
         head->prev = n;
    }


    head = n;



}
void insertAtTail_dl(Node1* &head,int val){
    Node1* n = new Node1(val);
    if(head==NULL){
        insertAtHead_dl(head,val);
        return;
    }
    Node1* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void deleteAtHead_dl(Node1* &head){
    Node1* del = head;
    head = head->next;
    head->prev = NULL;
    delete head;

}
void delete_dl(Node1* &head, int pos){

    Node1* temp = head;

    if(pos==1){
        deleteAtHead_dl(head);
    }
    int count =0;
    while(temp!=NULL && count!=pos){
       temp = temp->next;
       count++;
    }
    // for last position
    temp->prev->next = temp->next;
    if(temp->next!=NULL){
         temp->next->prev = temp->prev;
    }

    delete temp;
}
int length(Node* &head){
    int l=0;
    Node* temp = head;
    while(temp->next!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}
Node* appendLastKNodes(Node* &head, int k){
    Node* newHead;
    Node* newTail;
    Node* tail = head;
    int l = length(head);
    k = k%l;

    int count = 0;

    while(tail->next!=NULL){

        if(count==l-k){
            newTail = tail;
        }

        if(count == l-k+1){
            newHead = tail;
        }

        tail = tail->next;
        count++;

    }

    newTail->next = NULL;
    tail->next = head;

    return newHead;

}
int intersection(Node* &head1, Node* & head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int d =0;

    Node* p1;
    Node* p2;

    if(l1>l2){
        d =l1-l2;
        p1 = head1;
        p2 = head2;
    }
    else{
        d = l2 - l1;
        p1 = head2;
        p2 = head1;

    }

    /*while(d){
            p1 = p1->next;
    if(p1 == NULL){
        return -1;
    }
        d--;
    }*/

    while(p1!=NULL &&p2!=NULL){

            if(p1==p2){
                return p1->data;
            }
        p1 = p1->next;
        p2 = p2->next;

    }
    return -1;


}
int main()
{
    Node* temp = head;

    return 0;
}
