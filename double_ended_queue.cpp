//Implementing Double-Ended-Queue using array
#include<bits/stdc++.h>
using namespace std;
class dqueue
{
	private:
		int front=-1,rear=-1;
		int *arr;
		int size;
	public:
		dqueue(int size)
		{
			this->size=size;
			arr=new int[size];
		}
		bool isFull()
		{
			if(front==(rear+1)%size)
			{
				return true;
			}
			return false;
		}
		bool isEmpty()
		{
			if(front==-1 or rear==-1)
			{
				return true;
			}
			return false;
		}
		void insertFront(int ele)
		{
			if(isFull())
			{
				cout<<"Queue is full!"<<endl;
				return ;
			}
			if(front==-1)
			{
				rear=0;
				front=0;
			}
			else if(front==0)
			{
				front=size-1;
			}
			else
			{
				front=front-1;
			}
			arr[front]=ele;

		}
		void insertRear(int ele)
		{
			if(isFull())
			{
				cout<<"Queue is full!"<<endl;
				return ;
			}
			if(front==-1)
			{
				front=0;
			}
			rear=(rear+1)%size;
			arr[rear]=ele;
		}
		void deleteFront()
		{
			if(isEmpty())
			{
				cout<<"Queue is empty!"<<endl;
				return ;
			}
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else
			{
				front=(front+1)%size;
			}
			
		}
		void deleteRear()
		{
			if(isEmpty())
			{
				cout<<"Queue is empty!"<<endl;

				return;
			}
			if(front==rear)
			{
				front=-1;
				rear=-1;
			}
			else
			{
				if(front<=rear)
				{
					rear--;
				}
				else
				{
					if(rear==0)
					{
						rear=size-1;
					}
					else
					{
						rear--;
					}
				}
			}
		}
		void display()
		{
		
			if(isEmpty())
			{
				cout<<"Queue is empty!"<<endl;

				return ;
			}
			if(front<=rear)
			{
				for(int i=front;i<=rear;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
			else
			{
				for(int i=front;i<size;i++)
				{
					cout<<arr[i]<<" ";
				}
				for(int i=0;i<=rear;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}

		}

};

int main()
{
	dqueue d=dqueue(5);
	d.insertFront(1);
	d.insertFront(2);
	d.insertFront(3);
	d.insertFront(4);
	d.insertRear(5);
	d.insertRear(5);
	d.deleteRear();
	d.deleteFront();
	d.deleteRear();
	d.deleteFront();
	d.deleteRear();
	d.display();

}