#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* node1 = new Node();
    node1 -> data = 100;
    node1 -> next = nullptr;

    Node* node2 = new Node();
    node2->data = 92;
    node2->next = nullptr;

    Node* node3 = new Node();
    node3->data = 45;
    node3->next = nullptr;

    Node* node4 = new Node();
    node4->data = 87;
    node4->next = nullptr;

    Node* node5 = new Node();
    node5->data = 71;
    node5->next = nullptr;

    Node* node6 = new Node();
    node6->data = 99;
    node6->next = nullptr;

    Node* node7 = new Node();
    node7->data = 95;
    node7->next = nullptr;

    Node* node8 = new Node();
    node8->data = 60;
    node8->next = nullptr;

    Node* node9 = new Node();
    node9->data = 55;
    node9->next = nullptr;

    Node* node10 = new Node();
    node10->data = 88;
    node10->next = nullptr;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;

    Node* head = node1;
    Node* tail = node10;

    cout<<"10 nilai mahasiswa: ";
    Node* temp = head;
    while (temp != nullptr){
        cout<< temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //tambahkan 70 di depan
    Node* node11 = new Node();
    node11->data = 70;
    node11->next = head;
    head = node11;

    cout<<"tambahkan 70 didepan: ";
    temp = head;
    while (temp != nullptr){
        cout<< temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
    //tambahkan 50 di belakang
    Node* node13 = new Node();
    node13->data = 50;
    node13->next = nullptr;

    tail->next = node13;
    tail = node13;

    cout<<"tambahkan 50 dibelakang: ";
    temp = head;
    while (temp != nullptr){
        cout<< temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //tambahkan 0 setelah 45
    Node* node12 = new Node();
    node12->data = 0;
    node12->next = node3->next;
    node3->next = node12;

    cout<<"tambahkan 0 setelah 45: ";
    temp = head;
    while (temp != nullptr){
        cout<< temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //hapus 99
    temp = head;
    while (temp->next->data != 99){
        temp = temp->next;
    }

    Node* hapus = temp -> next; 
    temp -> next = hapus -> next;

    cout<<"setelah 99 dihapus: ";
    temp = head;
    while (temp != nullptr){
        cout<< temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //hapus 60
    temp = head;
    while (temp->next->data != 60){
        temp = temp->next;
    }

    hapus = temp -> next;
    temp -> next = hapus -> next;
    delete hapus;

    cout<<"setelah 60 dihapus: ";
    temp = head;
    while (temp != nullptr){
        cout<< temp ->data<<" ";
        temp = temp->next;
    }

}
