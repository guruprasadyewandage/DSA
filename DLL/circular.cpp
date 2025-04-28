#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;


    Node(int val){
        data=val;
        next=NULL;
    }
};

class circularList{

    Node*head;
    Node*tail;

    public:
    circularList(){
        head = tail = NULL;
    }

    void insertatHead(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
            newNode->next=head;
            head=newNode;
            tail->next=head;
        }
    }

    void print(){

        if(head==NULL) {
            return;
        }
        Node* temp = head->next;
        cout<<head->data<<"<=>";

        while(temp!=head){
            cout<<temp->data<<"<=>";
            temp=temp->next;
        }

        cout<<temp->data<<endl;

    }

    void insertatTail(int val){
        Node* newNode = new Node(val);
        if(head==NULL){
            head=tail=newNode;
            tail->next=head;
        }
        else{
            tail->next=newNode;
            newNode->next=head;
            tail=newNode;
        }
    }


    void deleteatHead(){
        Node* temp= head;
        if(head==NULL){
            cout<<"empty";
        }
        else if(head==tail){
            delete head;
        }
        else{
            head = head->next;
            temp->next=NULL;
            tail->next = head;
            delete temp;

        }
    }

    void deleteatTail(){
     
        if(head==NULL){
            return;
        }
        else if(head==tail){
            delete head;
        }
        else{
            Node*temp = tail;
            Node*prev=head;
            while(prev->next!=tail){
                prev=prev->next;
            }
            tail=prev;
            tail->next=head;
            temp->next=NULL;
            delete temp;
        }
      
    }
    

   
};

int main(){
    circularList cll;
    cll.insertatHead(1);
    cll.insertatHead(2);
    cll.insertatHead(3);
    cll.insertatTail(4);   
    cll.print();
    
    cll.print();

}