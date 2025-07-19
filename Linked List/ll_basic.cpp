#include<iostream>
using namespace std;

class Node{
    public: int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;
    LinkedList(){
        head = NULL;
    }

    void pushFront(int val){
        Node* newnode = new Node(val);
        // If the list is empty point head to the new node
        if(head == NULL){
            head = newnode;
        }else{
            // if the list is not empty point the new node to the head and then point head to the new node
            newnode-> next = head;
            head = newnode;
        }
    }

    void pushBack(int val){
        Node* newnode = new Node(val);
        // if the list is empty point the head to the new node
        if(head == NULL){
            head  = newnode;
        }else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;  
            }
            temp->next = newnode; // point the last node to the new node
        }
    }

    void popFront(){
        if(head == NULL){
            cout<<"Nothing to pop, List is empty"<<endl;
        }
        else{
            Node* temp = head;
            head= head-> next;
            temp->next = NULL;
            delete temp;
        }
    }

    void popBack(){
        if(head == NULL){
            cout<<"Nothing to pop, List is empty"<<endl;
        }
        else{
            Node* temp = head;
            Node* prev = head;
            if(temp->next == NULL){ // if there is only one node
                delete temp;
                head = NULL;
                return;
            }
            while(prev->next->next != NULL){
                prev = prev->next;
            }
            temp = prev->next; // temp points to the last node
            prev->next = NULL; // point the second last node to NULL
            delete temp; // delete the last node
        }
    }

    void printList(){
        Node* temp = head;
        while(temp!= NULL){
            cout<< temp->data << "->";
            temp = temp->next;
            
        }
        cout<<"NULL"<<endl;
    }

};
int main(){
    LinkedList ll;
    ll.pushFront(4);
    ll.pushFront(3);
    ll.pushFront(2);
    ll.pushFront(1);

    ll.pushBack(5);
    ll.pushBack(6);

    ll.popFront();
    ll.popBack();

    ll.printList();
    return 0;
}