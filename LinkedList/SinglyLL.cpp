#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int d){
    data=d;
    next=NULL;
}
};
void insertAtHead(Node* &head,int d){
    if(head==NULL){
    Node* temp=new Node(d);    
    head=temp;
    }
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &head,Node* &tail,int data){
Node* temp=new Node(data);
head->next=temp;

temp->next=nullptr;
}
void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){

    // Node* l1=new Node(5);
    // // cout<<l1->data<<endl;
    // // cout<<l1->next<<endl;
    // insertAtHead(l1,6);
    // insertAtHead(l1,7);
    // insertAtHead(l1,8);
    // insertAtHead(l1,9);
    // insertAtHead(l1,10);
    Node* l1,*tail;
    tail=l1;
    insertAtHead(l1,5);
    traverse(l1);
    insertAtTail(l1,tail,6);
    insertAtTail(l1,tail,7);
    insertAtTail(l1,tail,8);
    insertAtTail(l1,tail,9);
    traverse(l1);
    return 0;
}