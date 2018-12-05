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

Node* deleteValue(Node* head, int value){
	//delete all the nodes with the given value and return the new
	//head of the linked list
	if(!head)
		return NULL;
	Node* tmp = deleteValue(head->next, value);
	if(head->data == value){
		//code
		delete head;
		return tmp;
	} else{
		head->next = tmp;
		return head;
	}

}

void freeListRecursive(Node* head){
	if(!head)
		return;
	freeListRecursive(head->next);
	delete head;

}

void freeList_new(LinkedList* list){
	freeListRecursive(list->head);
	delete list;
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
/* Precondition: Linked list has atleast one node

*/
int minOfList(Node* head){
	if(head->next == NULL) {// One node linked list
		return head->data;   //Base case
	}
	int minOfRestOfList = minOfList(head->next);
	if (minOfRestOfList< head->data)
		return minOfRestOfList;
	else
		return head->data;


}

bool search(Node* head, int value){
	if(!head)
		return false;
	if(head->data == value) //base case
		return true;
	return search(head->next, value);

	//Is this code correct?
	// A. Yes
	// B. No

}


int main(){
	LinkedList* newlist= createSmallLinkedList(10, 20);
	cout<<"Initial two node list with values 10, 20:"<<endl;
	printLinkedList(newlist); // 10 20
	insertNode(newlist, 10);
	insertNode(newlist, 5);
	insertNode(newlist, 10);
	insertNode(newlist, 15);
	insertNode(newlist, 100);

	string result;
	result = search(newlist->head, 100)?"Yes":"No";
	cout<<"Is 100 in the list?  "<< result<<endl;
	result = search(newlist->head, -100)?"Yes":"No";
	cout<<"Is -100 in the list?  "<< result<<endl;
	cout<< "Before delete"<<endl;
	printLinkedList(newlist);

	deleteValue(newlist->head, 10);
	cout<< "After delete"<<endl;
	printLinkedList(newlist);


	freeList_new(newlist);



	return 0;

}
