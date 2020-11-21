#include <iostream>
using namespace std;

class stack {
	
	typedef struct node {
		int data;
		struct node *next;	
	};
	public :
		struct node *top;
		void init();
		void push(int);
		int pop();
		void display();	
};

void stack :: init() {
	top = NULL;
}

void stack :: push(int x) {
	node *temp;
	temp = new node;
	temp->data = x;
	temp->next = NULL;
	if(top==NULL) {
		top = temp;
	}
	else {
		temp->next = top;
		top = temp;
	}
	
}

void stack :: display() {
	node *temp = top;
	while(temp!=NULL) {
		cout << temp->data << endl;
		temp = temp->next;
	}
}

int stack :: pop() {
	int x;
	if(top!=NULL) {
		x = top->data;
		top = top->next;
	}
	
	return x; 
}

int main() 
{
	stack stk;	
	stk.init();
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.display();
	
	
	return 0;
}




