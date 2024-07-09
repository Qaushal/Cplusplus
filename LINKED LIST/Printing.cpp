#include<iostream>
#include"LinkedList.h"
using namespace std;

void print(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    List l;
    l.pushBack(10);
    l.pushBack(20);
    l.pushBack(30);
    l.pushBack(40);
    

    print(l.head);
}

