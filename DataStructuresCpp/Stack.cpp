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

    if ((s->Head->next == NULL && s->Head->value == -1) || s->Head == NULL) // Return -1 if stack is empty
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
    LinkedList* curr = s->Head; // set the curr to head
    LinkedList* temp = NULL;
    while (curr)
    {
        temp = curr->next; // store the next node
        delete curr; // free the current node
        curr = temp; // move to the next node
    }
}

bool isEmpty(Stack* s)
{
    return ((s->Head->next == NULL && s->Head->value == -1) || s->Head == NULL);
}
