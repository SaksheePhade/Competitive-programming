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
	
	cout << endl;
	
	while(temp!=NULL) {
		if(temp==head) cout << "\t" << temp->data;
		else cout << " -> " << temp->data;
		temp = temp->next;		
	}
	cout << "\n";
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

node *removeDuplicates(node *head) {
	
	int i,j;
	cout << "\n\tIn function before : ";
	display(head);
	
	node *temp1=head;
    node *temp2=head;
    node *prev=NULL;
    if(head==NULL) return NULL;

	i=0;
	j=0;

    while(temp1!=NULL) {
    	
    	cout << "\n\tIteration(i) : " << i <<endl;
    	display(head);
        temp2=temp1->next;
        
        if(temp2==NULL) break;
        
        prev=temp1;
        j=0;
        cout << "\n\tMain while temp1->data : " << temp1->data;
        while(temp2!=NULL) {
        	cout << "\n\tTemp2->data : " << temp2->data;
        	cout << "\n\tIteration(j) : " << j <<endl;
        	display(head);
        	cout << "\n\ttemp2->data : " << temp2->data;
        	
            if(temp1->data==temp2->data) {
            	cout << "\n\tInside if prev->data : " << prev->data;
            	cout << "\n\tInside if temp2->data : " << temp2->data;
            	if(temp2->next==NULL) temp2=NULL;
                else temp2=temp2->next;
                if(temp2==NULL) prev->next=NULL;
                else prev->next=temp2;
                if(temp2!=NULL) cout << "\n\tInside if temp2->data : " << temp2->data;
                else cout << "\n\tTemp2 is NULL";
                if(prev!=NULL) cout << "\n\tInside if prev->data : " << prev->data;
                else cout << "\n\tPrev is NULL";
            }
            prev=prev->next;
            if(temp2==NULL) break;
            temp2=temp2->next;
            j++;
        }
        
        
        temp1=temp1->next;
        i++;
    }
    cout << "\n\tIn function after : ";
    display(head);

    return head;
	
}

int main()
{
	node *head=NULL;
	int num, i, pos;
	cout << "\n\tEnter number of nodes : ";
	cin >> num;
	for(i=0; i<num; i++)
		head = insert(head);
	
	
	removeDuplicates(head);	
	display(head);
	

}

/*
  Main while temp1->data : 2
        Temp2->data : 2
        Iteration(j) : 0

        1 -> 2 -> 2 -> 2 -> 2

        temp2->data : 2
        Inside if prev->data : 2
        Inside if temp2->data : 2
        Inside if temp2->data : 2
        Inside if prev->data : 2
        Temp2->data : 2
        Iteration(j) : 1

        1 -> 2 -> 2 -> 2

        temp2->data : 2
        Inside if prev->data : 2
        Inside if temp2->data : 2
        Temp2 is NULL
        Inside if prev->data : 2
        Iteration(i) : 2

        1 -> 2 -> 2

        In function after :
        1 -> 2 -> 2

        1 -> 2 -> 2

--------------------------------
Process exited after 3.761 seconds with return value 0
Press any key to continue . . .

*/
