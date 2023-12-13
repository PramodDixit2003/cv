#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
	int data;
	Node *add;
	Node *a;

	Node(int data)
	{
		this->data = data;
		this->add = nullptr;
	}
};

int main()
{
	int n, i = 1, data;
	cin >> n;
	Node *head = nullptr;
	Node *ptr = nullptr;
	while (i <= n)
	{

		cin >> data;
		Node *newnode = new Node(data); // creates a node as well as assigns the address of that node to *newnode pointer variable
		if (head == nullptr)
		{
			head = newnode;
			newnode->add = nullptr;
			ptr = head;
		}
		else
		{
			ptr->add = newnode;
			ptr = newnode;
		}

		++i;
	}
	Node *temp = head;
	while (temp != nullptr)
	{
		cout << temp << "->" << temp->data << "->" << temp->add << endl;
		temp = temp->add;
	}

	cout << "After sorting" << endl;

	for (int i = 0; i < n; i++)
	{
		Node *t = head;
		for (int j = 0; j < n - 1; j++)
		{
			int d = t->data;
			int v = t->add->data;
			if (d > v)
			{
				t->add->data = d;
				t->data = v;
			}
			t = t->add;
		}
	}

	Node *h = head;
	while (h != nullptr)
	{
		cout << h << "->" << h->data << "->" << h->add << endl;
		h = h->add;
	}

	int pos;
	cin >> pos;
	Node *delNode = head;
	Node *prevNode = nullptr;

	for (int i = 1; i <= n; i++)
	{
		if (delNode != nullptr)
		{

			if (pos == 1)
			{
				head = head->add;
				break;
			}

			if (i == pos - 1)
			{

				prevNode = delNode;
				if (i == n - 1)
				{
					prevNode->add = nullptr;
					break;
				}

				delNode = delNode->add->add;

				prevNode->add = delNode;

				break;
			}
			delNode = delNode->add;
		}
	}

	Node *h1 = head;
	while (h1 != nullptr)
	{
		cout << h1 << "->" << h1->data << "->" << h1->add << endl;
		h1 = h1->add;
	}

	return 0;
}
