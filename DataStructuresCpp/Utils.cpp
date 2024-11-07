#include "Utils.h"
#include "Stack.h"
#include "iostream"

void reverse(int* nums, unsigned int size)
{
    //Push the array and then pop it
    int i = 0;
    Stack* s = new Stack;
    initStack(s);

    for (i = 0; i < size; i++)
    {
        push(s, nums[i]);
    }

    for (i = 0; i < size; i++)
    {
        nums[i] = pop(s);
    }

    //Clean up the stack to avoid memory leak
    delete s;
}

int* reverse10()
{
    int size = 10, i = 0;
    int number = 0;
    int* nums = new int [size];
    Stack* s = new Stack;

    for (i = 0; i < size; i++)
    {
        std::cout << "Enter number " << i << ":";
        std::cin >> number;
        nums[i] = number;
    }
    
    initStack(s);

    for (i = 0; i < size; i++)
    {
        push(s, nums[i]);
    }

    for (i = 0; i < size; i++)
    {
        nums[i] = pop(s);
    }

    delete[] nums;
    delete s;
    return nums;
}