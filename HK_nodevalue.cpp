# include <iostream>
using namespace std;

typedef struct node {
	int data;
	struct node *next;
}node;

node *insert(node *head) {
	
	int data, num, i, count=0;
	node *temp=NULL, *newnode=NULL;
	
	cout << "\n\tEnter data : ";
	cin >> data;
	
	if(head==NULL) {
		head = new node;
		head->data = data;
		head->next = NULL;
	}
	else {
		newnode = new node;
		newnode->data = data;
		temp = head;
		while(temp->next!=NULL) {
			temp = temp->next;
		}
		newnode->next = NULL;
		temp->next = newnode;
	}
	
	return head;
	
}

void display(node *head) {
	node *temp=head;
	
	while(temp!=NULL) {
		if(temp==head) cout << "\t" << temp->data;
		else cout << " -> " << temp->data;
		temp = temp->next;		
	}
}

int getNodeValue(node *head, int pos) {
	node *temp=head;
	int i=0,count=0;
	while(temp!=NULL) {
		temp = temp->next;
		count++;
	}
	cout << "Count before : " << count;
	count = count - pos - 1;
	cout << "Count after : " << count;
	i=0;
	temp=head;
	while(i!=count) {
		temp=temp->next;
		i++;
	}
	return temp->data;
}


int main()
{
	node *head=NULL;
	int num, i, pos;
	cout << "\n\tEnter number of nodes : ";
	cin >> num;
	for(i=0; i<num; i++)
		head = insert(head);
		
	display(head);
	
	cout << "\n\tEnter position : ";
	cin >> pos;
	cout << "\n\tValue : " << getNodeValue(head, pos);	
}
