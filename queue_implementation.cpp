#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
class queue_FIFO
{
		private:
		node *front;
		node *back;
		public:
		queue_FIFO()
		{
			front=NULL; 
			back=NULL;
		}
		void enqueue(int value)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=NULL;
			if(front==NULL)
			{
				front=temp;
				back=temp;
				temp=NULL;
			}
			else
			{	
				back->next=temp;
				back=temp;
			}
		}
		void display()
		{
			node *temp=new node;
			temp=front;
			while(temp!=NULL)
			{
				cout<<temp->data<<"\n";
				temp=temp->next;
			}
		}
		
		int dequeue()
		{
			node *temp=new node;
			temp=front;
			cout<<temp->data<<"\t";
			front=temp->next;
			
		}
};
int main()
{
	queue_FIFO obj;
	cout<<"\n--------------------------------------------------\n";
	obj.enqueue(25);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
	obj.enqueue(50);	
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.enqueue(90);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.enqueue(40);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.enqueue(55);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.dequeue();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.dequeue();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.dequeue();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.dequeue();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.dequeue();
	cout<<"\n--------------------------------------------------\n";
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.dequeue();
	cout<<"\n--------------------------------------------------\n";
	obj.display();	
}
