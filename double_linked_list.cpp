#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;	
	node *previous;
};
class double_list
{
		private:
		node *head, *tail;
		public:
		double_list()
		{
			head=NULL;
			tail=NULL;
		}
		void createnode(int value)
		{
			node *temp=new node;
			node *pre=new node;//(1)
			
			temp->data=value;
			temp->next=NULL;
			temp->previous=NULL;
			
			//pre->next=NULL; //just for check
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				temp=NULL;
			}
			else
			{	
				tail->next=temp;
				temp->previous=tail;
				tail=temp;	
				pre=tail->previous;	//(1)	
			}
		
		cout<<"\n"<<"current element :"<<tail->data<<"\n";
		cout<<"\t"<<"previous element of tail :"<<pre->data<<"\n"; //(1)
		}
		void display()
		{
			node *temp=new node;
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<"\t";
				temp=temp->next;
			}
		}
		void insert_start(int value)
		{
			node *temp=new node;
			temp->data=value;
			temp->next=head;
			head->previous=temp;
			head=temp;
		}
		void insert_position(int pos, int value)
		{
			node *pre=new node;
			node *cur=new node;
			node *temp=new node;
			cur=head;
			for(int i=0;i<pos;i++)
			{
				pre=cur;
				cur=cur->next;
			}
			temp->data=value;
			pre->next=temp;	
			temp->previous=pre;
			temp->next=cur;
			cur->previous=temp;
		}
		void delete_first()
		{
			node *temp=new node;
			temp=head;
			head=head->next;
			delete temp;
		}
		void delete_last()
		{
			node *current=new node;
			node *previous=new node;
			current=head;
			while(current->next!=NULL)
			{
				previous=current;
				current=current->next;	
			}
			tail=previous;
			previous->next=NULL;
			delete current;
		}
		void delete_position(int pos)
		{
			node *cur=new node;
			node *pre=new node;
			cur=head;
			for(int i=1;i<pos;i++)
			{
				pre=cur;
				cur=cur->next;
			}
			pre->next=cur->next;
			cur->previous =pre;
		}
};
int main()
{
	double_list obj;

	cout<<"\n--------------------------------------------------\n";
	obj.createnode(25);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
	obj.createnode(50);	
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.createnode(90);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.createnode(40);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	obj.createnode(55);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"----------------Inserting At Start----------------";
	cout<<"\n--------------------------------------------------\n";
	obj.insert_start(50);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"-------------Inserting At Particular (4)--------------";
	cout<<"\n--------------------------------------------------\n";
	obj.insert_position(4,60);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"----------------Deleting At Start-----------------";
	cout<<"\n--------------------------------------------------\n";
	obj.delete_first();
	obj.display();
    cout<<"\n--------------------------------------------------\n";
	cout<<"-----------------Deleing At End-------------------";
	cout<<"\n--------------------------------------------------\n";
	obj.delete_last();
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	cout<<"--------------Deleting At Particular 2--------------";
		cout<<"\n--------------------------------------------------\n";
	obj.delete_position(2);
	obj.display();
	cout<<"\n--------------------------------------------------\n";
	//system("pause");
	return 0;
}
