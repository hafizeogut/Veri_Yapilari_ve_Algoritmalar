#pragma once
#include "Position.h"
class Stack
{
private:
	Position* temel;
	int top;
	int size;
	int length;

public:
	Stack(int capacity)
	{
		temel = new Position[capacity];
		size = capacity;
		top = -1;
		length = 0;
	}

	~Stack()
	{
		delete[]temel;
		top = -1;
		size = 0;
		length = 0;
	}

	int Push(Position elem)
	{
		if (top == size - 1) return 1;   //Full stack. Unsuccessful with return value 1
		else
		{
			top++;
			temel[top] = elem;
			length++;
			return 0;   //Successful with return value 0
		}
	}

	Position Pop()
	{
		Position error;
		error.x = -1;
		error.y = -1;

		Position correct;

		if (top == -1) return error;   //Empty stack. Return a non-existent position
		else
		{
			correct = temel[top];
			top--;
			length--;
			return correct;   //Successful with a correct position
		}
	}

	int GetLength()
	{
		return length;
	}
};
