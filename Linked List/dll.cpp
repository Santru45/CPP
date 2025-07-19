#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next ;
    Node* prev;

    Node(int val){
        data = val;
        next = prev= NULL;
        
    }
};

class DoublyList{
public:
    Node* head;
    DoublyList(){
        head = NULL;
    }
    
    void push_front(int val){
        Node* newnode = new Node(val);
        if(head ==NULL){
            head = newnode;
        }
        else{
            newnode->next = head;
            head->prev = newnode;
            head = newnode;
        }

    }

    void push_back(int val){
        Node* newnode = new Node(val);
        if(head ==NULL){
            head = newnode;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newnode; 
            newnode->prev = temp;
        }
    }

    void printList(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"<=>";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void pop_front(){
        Node* temp = head;
        head = head->next;

        if(head != NULL){
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;

        if(temp == NULL){
            cout<<"Nothing to op, List is empty"<<endl;
        }
        else{
            if(temp->next == NULL){
                delete temp;
                head = NULL;
                return;
            }
            while(temp->next != NULL){
                temp = temp->next;
            }
            if(temp->prev != NULL){
                temp->prev->next = NULL; // point the second last node to NULL
                temp->prev = NULL; // detach the last node
            } 

        }
    }
};

int main(){
    DoublyList dll;
    dll.push_front(10);
    dll.push_front(20);
    dll.push_front(30);

    dll.push_back(40);
    dll.push_back(50);

    
    dll.pop_front();    //Before popping, the list is: 30<=>20<=>10<=>40<=>50<=>NULL

    dll.pop_back();

    dll.printList();
    return 0;
}