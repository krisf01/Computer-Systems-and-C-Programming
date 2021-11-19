#include <iostream>
using namespace std;

class List
{
	private:
	struct Node
	{
        char c = ' ';
        struct Node *next;
	};
	
	Node *head;
	
	public:
	List()
	{
	    head = nullptr;
	}
	void append(char);
	void print() const;
};

void List::append(char letter)
{
    Node *newNode;
    Node *nodePtr;
    
    newNode = new Node;
    newNode-> c = letter;
    newNode-> next = nullptr;
    
    if (!head)
        head = newNode;
    else
    {
        nodePtr = head;
        
        while (nodePtr-> next)
            nodePtr = nodePtr->next;
            
        nodePtr->next = newNode;
    }
}

void List::print() const
{
	Node *nodePtr = head;
	while(nodePtr != nullptr)
	{
	    cout << nodePtr->c << endl;
	    nodePtr = nodePtr-> next;
	}
}


int main()
{
	List l;
	l.append('a');
	l.append('b');
	l.append('c');
	
	l.print();
	return 0;
}
