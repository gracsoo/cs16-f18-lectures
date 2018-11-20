#include <iostream>
using namespace std;

struct Node{
	Node* prev;
	int data;
	Node* next;
};

struct LinkedList{
	Node* head;
	Node* tail;
};


LinkedList* createSmallLinkedList(int x, int y){
	LinkedList* newList = new LinkedList;
	newList->head = NULL;
	newList->tail = NULL;
	Node* head = NULL; //empty linked list
	head = new Node; //first node
	head->data = x;
	head->next = new Node;
	head->prev = NULL;
	head->next->data = y;
	head->next->next = NULL;
	head->next->prev = head;
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
	p->prev = NULL;
	if(list->head == NULL){
		list->tail = p;
	}else{
		list->head->prev = p;
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

/* Precondition: list is a pointer to a valid LinkedList

*/

void deleteNode(LinkedList* list, int value){
	//delete the first node with the given value
	//If the value doesn't exist do nothing
	if(!list)
		return;
	//Empty list

	if(list->head == NULL){
		return;
	}

	Node* p = list->head;
	while(p && p->data != value){
		//Keep moving forward
		p = p->next;
	}
	// p is either NULL or pointing to the node we want to delete
	if(!p)
		return; //reached the end of the list

	if(p->next)
		p->next->prev = p->prev;

	if(p->prev)
		p->prev->next = p->next;

	if(p == list->head)
		list->head = p->next;

	if(p==list->tail)
		list->tail = p->prev;


	delete p;




}

int main(){
	LinkedList* newlist= createSmallLinkedList(10, 20);
	cout<<"Initial two node list with values 10, 20:"<<endl;
	printLinkedList(newlist); // 10 20
	for(int i =0; i <10; i++){
		insertNode(newlist, i*100);
	}
	deleteNode(newlist, 900);
	cout<<"Linked List after deleting 100 to the head"<<endl;
	printLinkedList(newlist);  


	freeList(newlist);
	return 0;

}
