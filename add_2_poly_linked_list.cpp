		//Adding two polynomials using Linked List using map
		
		/*					Input
				1st number = 5x^2 + 4x^1 + 2x^0
				2nd number = 5x^1 + 5x^0
				Output: 5x^2 + 9x^1 + 7x^0	*/
				
#include<iostream>
using namespace std;
class node
{
	public:
			double coeff;
			int pow;
			node *next;	
};
class list
{
		private:
		node *head, *tail;
		public:
		list()
		{
			head=NULL;
			tail=NULL;
		}
		void createnode(double value,int power)
		{
			node *temp=new node;
			temp->coeff=value;
			temp->next=NULL;
			temp->pow=power;
			if(head==NULL)
			{
				head=temp;
				tail=temp;
				temp=NULL;
			}
			else
			{	
				tail->next=temp;
				tail=temp;
			}
		}
		void display()
		{
			node *temp=new node;
			temp=head;
			cout<<"\n";
			while(temp!=NULL)
			{
				cout<<temp->coeff<<"x^"<<temp->pow<<"\t"<<"+";
				temp=temp->next;
			}
		}
		list add_poly(list obj1, list obj2, list obj3);
};
 //function_declaration

int main()
{
	list obj1;
	obj1.createnode(5,2);
	obj1.createnode(4,1);
	obj1.createnode(2,0);
	list obj2;
	obj2.createnode(5.0,1);
    obj2.createnode(5.0,0);
	cout<<"\n--------------------------------------------------\n";
	cout<<"---------------Displaying All nodes---------------";
	cout<<"\n--------------------------------------------------\n";
	obj1.display();
    obj2.display();
	list obj3;
	obj3.createnode(0,0);
	obj3.createnode(0,0);
	obj3.createnode(0,0);
	obj3.add_poly(obj1, obj2,obj3);
	obj3.display();
		
}
list list::add_poly(list obj1, list obj2, list obj3){

	node *temp1=new node;	
	temp1=obj1.head;
	
	node *temp2=new node;	
	temp2=obj2.head;
	
	node *temp3=new node;	
	temp3=obj3.head;
	//cout<<temp3->coeff;
	
	while(temp1!=NULL||temp2!=NULL)
	{
		if (temp1->pow > temp2->pow)
		{
			temp3->coeff=temp1->coeff;
			temp3->pow=temp1->pow;
			temp1=temp1->next;
			temp3=temp3->next;
			//cout<<temp3->coeff;
		}
		else if(temp2->pow>temp1->pow)
		{
		    temp3->coeff=temp2->coeff;
			temp3->pow=temp2->pow;
			temp2=temp2->next;
			temp3=temp3->next;
			
		
     	}
     	else
     	{
     		temp3->coeff=temp2->coeff+temp1->coeff;
			temp3->pow=temp2->pow;
			temp2=temp2->next;
			temp1=temp1->next;
		
			temp3=temp3->next;
		 }
		 
	}
}
