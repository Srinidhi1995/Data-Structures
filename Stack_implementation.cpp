#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
class stack_LIFO
{
		private:
		node *top;
		public:
		stack_LIFO()
		{
			top=NULL; //top node is the last node inserted.
		}
		void push(int value)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=NULL;
			if(top==NULL)
			{
				top=temp;
				temp=NULL;
			}
			else
			{	
				temp->next=top;
				top=temp;
			}
		}
		void display()
		{
			node *temp=new node;
			temp=top;
			while(temp!=NULL)
			{
				cout<<temp->data<<"\n";
				temp=temp->next;
			}
		}
		
		int pop()
		{
			node *temp=new node;
			temp=top;
			cout<<temp->data<<"\t";
			top=temp->next;
			
		}
};
int main()
{
	stack_LIFO obj;
	cout<<"\n--------------------------------------------------\n";
	obj.push(25);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
	obj.push(50);	
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.push(90);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.push(40);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.push(55);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.pop();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.pop();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.pop();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.pop();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.pop();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.pop();
	cout<<"\n--------------------------------------------------\n";
	obj.display();	
}
