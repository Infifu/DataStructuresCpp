#include "Stack.h"
#include "iostream"


void push(Stack* s, unsigned int element)
{
    addNode(s->Head, element);
}

int pop(Stack* s)
{
    LinkedList* temp = s->Head;
    LinkedList* prev = NULL;
    int value;

    if (isEmpty(s) == true) // Return -1 if stack is empty
    {
        return -1;
    }

    while (temp->next)
    {
        prev = temp;
        temp = temp->next;
    }

    value = temp->value;
    deleteNode(temp);
    prev->next = NULL;

    return value;
}


void initStack(Stack* s)
{
    s->Head = new LinkedList;
    s->Head->value = -1;
    s->Head->next = NULL;
}

void cleanStack(Stack* s)
{
    LinkedList* curr = s->Head;
    LinkedList* temp = NULL;
    while (curr) //loop through the list deleting every node
    {
        temp = curr->next;
        delete curr;
        curr = temp;
    }
}

bool isEmpty(Stack* s)
{
    return ((s->Head->next == NULL && s->Head->value == -1) || s->Head == NULL);
    //checks if the head is null or if the head value is empty
}
