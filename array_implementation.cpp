#include<bits/stdc++.h>
using namespace std;
//Implementing array data sturcture
class Array
{
		private:
			int len=-1;
			int i=-1;
			int arr[100];
			
		public:
			
			Array(int size)
			{
				len=size;

			}
			bool isEmpty()
			{
				if(i==-1)
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
				if(isFull()==true)
				{
					cout<<"Array is full"<<endl;
				}
				else
				{
					i=i+1;
					arr[i]=ele;
				}
			
			}
			bool isFull()
			{
				if(i==len-1)
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
						cout<<arr[i]<<" ";
					}
					cout<<endl;
				}
				else
				{
					cout<<"Array is empty!"<<endl;
				}
			}
			void remove(int index)
			{
				if(isEmpty()==true or index==-1 or index>=len)
				{
					cout<<"Index "<<index<<" out of range"<<endl;
				}
				else
				{
					for(int i=index;i<=this->i;i++)
					{	
						arr[i]=arr[i+1];
					}
				i-=1;
				}
			}
			
						
		
};


int main()
{
	int size=6;
	Array arr=Array(size);
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
	arr.insert(45);

	

	
}


