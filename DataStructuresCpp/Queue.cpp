#include <iostream>
#include "Queue.h"
bool isFull(Queue* s)
{
	int i = 0;
	for (i = 0; i < s->_size; i++)
	{
		if (s->_queue[i] == -1)
		{
			return false;
		}
	}
	return true;
}

bool isEmpty(Queue* s)
{
	int i = 0;
	for (i = 0; i < s->_size; i++)
	{
		if (s->_queue[i] != -1)
		{
			return false;
		}
	}
	return true;
}

void initQueue(Queue* q, unsigned int size)
{
	int i = 0;
	q->_queue = new int[size];
	q->_size = size;
	q->_currentIndex = 0;
	
	for (i = 0;i < q->_size; i++)
	{
		q->_queue[i] = -1;
	}
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q) == true)
	{
		std::cout << "The queue is full cant enqueue";
	}
	else
	{
		q->_queue[q->_currentIndex] = newValue;
		q->_currentIndex++;
	}
}

int dequeue(Queue* q)
{
	if (isEmpty(q) == true)
	{
		return -1;
	}
	else
	{
		int i = 0;
		int elementToReturn = q->_queue[0];

		for (i = 0; i < q->_size; i++)
		{
			q->_queue[i] = q->_queue[i + 1];
		}

		q->_queue[q->_size - 1] = -1;

		return elementToReturn;
	}
}// return element in top of queue, or -1 if empty

void cleanQueue(Queue* q)
{
	int i = 0;
	for (i = 0; i < q->_size; i++)
	{
		q->_queue[i] = -1;
	}
}

int main()
{
	Queue* q = new Queue;
	delete q;
}
