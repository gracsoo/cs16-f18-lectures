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
LinkedList* createSmallLinkedList(int x, int y){
	LinkedList* newList = new LinkedList;
	newList->head = NULL;
	newList->tail = NULL;
	Node* head = NULL; //empty linked list
	head = new Node; //first node
	head->data = x;
	head->next = new Node;
	head->next->data = y;
	head->next->next = NULL;
	newList->head = head;
	newList->tail = head->next;

	return newList;

}

void insertNode(LinkedList* list, int x){
	// Adds a new node with data x at the head of the list
	// returns the new head of the list
	Node* p = new Node;
	p->data = x;
	p->next = list->head;
	if(list->head == NULL){
		list->tail = p;
	}
	list->head = p;

}
void insertLast(LinkedList* list, int x){
	 Node* p = new Node;
	 p->data = x;
	 p->next = NULL;
	 if(list->head){
	   list->tail->next = p;
	 }else{
	   list->head = p;
	 }
	 list->tail =p;
}
void freeList(LinkedList* list){
      // free all the nodes in the linked list
      Node* p = list->head;
      while(p){
	Node* tmp = p;
	p = p->next;
	delete tmp;
      }
      /* Do this step and stop if you are only clearing the list*/
      list->head = NULL;
      list->tail = NULL;

      /* Otherwise */
      delete list;

}

void printLinkedList(LinkedList* list){
	Node* p = list->head; //p is a traversal pointer
	while(p){
		cout<<p->data<<endl;
		p = p->next;
	}

}

int main(){
	LinkedList* newlist= createSmallLinkedList(10, 20);
	cout<<"Initial two node list with values 10, 20:"<<endl;
	printLinkedList(newlist); // 10 20
	for(int i =0; i <10; i++){
		insertNode(newlist, i*100);
	}
	cout<<"Linked List after adding 30 to the head"<<endl;
	printLinkedList(newlist); // 30 10 20 
	freeList(newlist);
	return 0;

}
