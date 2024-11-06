#include "LinkedList.h"
#include "iostream"

LinkedList* createLinkedNode(int value)
{
	LinkedList* newLinkedList = new LinkedList;
	newLinkedList->value = value;
	newLinkedList->next = NULL;
	return newLinkedList;
}

void addNode(LinkedList* head, int value)
{
	LinkedList* newLinkedList = createLinkedNode(value);
	LinkedList* curr = head;
	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = newLinkedList;
}

void printList(LinkedList* head)
{
	LinkedList* curr = head; // set the curr to head
	while (curr)
	{
		std::cout << curr->value << std::endl;
		curr = curr->next; // move to the next person
	}
}

LinkedList* deleteNode(LinkedList* head)
{
	LinkedList* curr = head;
	head = curr->next;
	delete curr;
	return head;
}