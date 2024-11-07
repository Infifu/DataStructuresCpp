#include "LinkedList.h"
#include "iostream"

//This functions creates the head of the linked list
LinkedList* createLinkedNode(int value)
{
	LinkedList* newLinkedList = new LinkedList;
	newLinkedList->value = value;
	newLinkedList->next = NULL;
	return newLinkedList;
}

//This functions adds the note
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

//This functions prints the linked list
void printList(LinkedList* head)
{
	LinkedList* curr = head; // set the curr to head
	while (curr)
	{
		std::cout << curr->value << std::endl;
		curr = curr->next; // move to the next person
	}
}

//This functions deletes the node
LinkedList* deleteNode(LinkedList* head)
{
	LinkedList* curr = head;
	head = curr->next;
	delete curr;
	return head;
}