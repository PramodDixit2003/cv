#include<bits/stdc++.h>
using namespace std;
//Implementing array data sturcture
class Array
{
		public:
			int len=0;
			int arr[5];
			int i=-1;
			bool isEmpty()
			{
				if(this->i==-1)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			void insert(int ele)
			{
				if(this->isFull()==true)
				{
					cout<<"Array is full"<<endl;
				}
				else
				{
					this->i=this->i+1;
					this->arr[this->i]=ele;
				}
			
			}
			bool isFull()
			{
				if(this->i==4)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			void display()
			{
				if(isEmpty()==false)
				{
					for(int i=0;i<=this->i;i++)
					{
						cout<<this->arr[i]<<" ";
					}
					cout<<endl;
				}
				else
				{
					cout<<"Array is full!"<<endl;
				}
			}
			void remove(int index)
			{
				for(int i=index;i<=this->i;i++)
				{	
					this->arr[i]=this->arr[i+1];


				}
				this->i-=1;
			}
			
						
		
};


int main()
{
	Array arr=Array();
	arr.insert(75);
	arr.insert(45);
	arr.insert(56);
	arr.insert(25);
	arr.insert(53);
	arr.display();
	arr.insert(34);
	arr.remove(0);
	arr.insert(565);
	arr.display();
	

	
}


