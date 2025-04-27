#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

class Doblist{
    Node* head;
    Node* tail;

    public:
    Doblist(){
        head=tail=NULL;
    }

    void push_front(int val){
        Node* newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }

   

    void print(){
        Node*temp =head;
        while(temp!=NULL){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
    }

    void pop_front(){
        Node* newNode = head;
        head = head->next;
        if(head!=NULL){
            head->prev=NULL;
        }
            newNode->next=NULL;
            delete newNode;
    }

    void pop_back(){
        Node* temp = tail;
        tail=tail->prev;
        if(tail!=NULL){
            tail->next=NULL;
        }
            temp->prev=NULL;
            delete temp;
        
    }
};

int main (){
    Doblist dll;

    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);

    dll.pop_back();


    dll.print();

    return 0;
}