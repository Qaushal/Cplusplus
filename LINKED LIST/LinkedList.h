#include<iostream>
using namespace std;
class List;
class Node{
    int data;
    Node* next;

    public:
    Node(int d):data(d),next(NULL){} //this type of initialisation is called as initialization list
    friend class List;
};

class List{
    Node * head; 
    Node * Tail;

    public:
    List():head(NULL),Tail(NULL){}
    

    void pushFront(int d){
        Node * newnode = new Node(d);
        if(head==NULL){
            head =  newnode;
            Tail =  newnode;
        }else{
            newnode->next = head;
            head = newnode;
        }
    }

    void pushBack(int d){
        Node * newnode = new Node(d);
        if(head==NULL){
             head =  newnode;
            Tail =  newnode;
        }else{
            Tail->next = newnode;
            Tail = newnode;

        }
    }
};

