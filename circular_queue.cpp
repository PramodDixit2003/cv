#include <bits/stdc++.h>
using namespace std;
class cqueue
{
private:
	int size = 5;
	int arr[5];
	int front = -1, rear = -1;

public:
	bool isEmpty()
	{
		if (front == -1)
		{
			return true;
		}
		return false;
	}
	bool isFull()
	{
		if (front == (rear + 1) % size)
		{
			return true;
		}
		return false;
	}
	void display()
	{
		if (isEmpty())
		{
			cout << "Queue is empty!";
			return;
		}
		int i = front;
		while (i != rear)
		{
			cout << arr[i] << " ";
			i = (i + 1) % size;
		}
		cout << arr[rear] << endl;
	}
	void insert(int ele)
	{

		if (isFull())
		{
			cout << "Queue is full!" << endl;
			return;
		}
		if (front == -1)
		{
			front = 0;
		}

		rear = (rear + 1) % size;
		arr[rear] = ele;
	}
	void del()
	{

		if (isEmpty())
		{
			cout << "Queue is empty!" << endl;
		}
		else
		{
			if (front == rear)
			{
				front = -1;
				rear = -1;
			}
			else
			{
				front = (front + 1) % size;
			}
		}
	}
};
int main()
{
	cqueue c = cqueue();
	c.insert(1);
	c.insert(2);
	c.insert(3);
	c.insert(4);
	c.insert(5);
	c.del();
	c.del();
	c.del();
	c.del();
	c.del();
	c.del();

	c.display();
}