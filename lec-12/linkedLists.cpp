#include <iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
};

struct LinkedList{
	Node* head;
	Node* tail;
};

Node* createSmallLinkedListWrongImplementation(int x, int y){
	Node* head = NULL; //empty linked list
	Node n1 = {x, NULL};
	Node n2 = {y, NULL};
	n1.next = &n2;
	head = &n1;
	return head;

}
Node* createSmallLinkedList(int x, int y){
	Node* head = NULL; //empty linked list
	head = new Node; //first node
	head->data = x;
	head->next = new Node;
	head->next->data = y;
	head->next->next = NULL;
	return head;

}

Node* insertNode(Node* head, int x){
	// Adds a new node with data x at the head of the list
	// returns the new head of the list
	Node* p = new Node;
	p->data = x;
	p->next = head;
	return p;

}
void freeList(Node* head){

}

void printLinkedList(Node* head){
	Node* p = head; //p is a traversal pointer
	while(p){
		cout<<p->data<<endl;
		p = p->next;
	}

}

int main(){
	LinkedList l1;\
	Node * head;
	head = createSmallLinkedListWrongImplementation(10, 20);
	cout<<"Initial two node list with values 10, 20:"<<endl;
	printLinkedList(head); // 10 20
	for(int i =0; i <10; i++){
		head = insertNode(head, i*100);
	}
	cout<<"Linked List after adding 30 to the head"<<endl;
	printLinkedList(head); // 30 10 20 
	return 0;

}