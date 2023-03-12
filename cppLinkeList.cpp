#include<iostream>
#include <cstdlib>

using namespace std;
struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;
void insert(int x){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = x;
    new_node->next = head;
    head = new_node;
}

void display(){
    struct Node* ptr;
    ptr = head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    display();
    return 0;
}
