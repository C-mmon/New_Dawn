#include <stdlib.h>
#include <iostream>
using namespace std;

#define MAX 2
int size=0;
struct stack
{
	int item[MAX];
	int top;
};
typedef struct stack st;


int isempty(st *s)
{
	if(s->top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isfull(st *s)
{
	if(s->top==MAX-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}
void createmptystack(st *s)
{
	s->top=-1;
}

void push(st* s, int data)
{
	if(isfull(s))
	{
		cout<<"Stack Is Full"<<endl;
	}
	else
	{
		//top++;
		//items[top]=data in terms of array
		s->top++;
		s->item[s->top]=data;
		size++;
	}

}
void pop(st* s)
{
	if(isempty(s))
	{
		cout<<"Stack is empty please insert an element"<<endl;
	}
	else
	{
		cout<<s->item[s->top]<<endl;
		s->top--;
		size--;
	}
}

void print(st *s)
{
	for(int i=0;i<size;i++)
	{
		cout<<s->item[i]<<" "<<endl;

	}
	cout<<endl;
}
int main()
{
	st *s=(st*)malloc(sizeof(st));
	createmptystack(s);
	push(s,1);
	push(s,2);
	print(s);
	pop(s);
	pop(s);
	pop(s);
	push(s,10);
	pop(s);


}
