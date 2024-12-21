#include<iostream>
#include<malloc.h>
using namespace std;

struct queue
{
	int size;
	int f;
	int* arr;
	int r;
};

    int isempty(struct queue*q)
   { 
   if ( q->r=q->f)
	{
		return 1;
	}
return 0;
}

int isfull(struct queue*q)
{ 
   if ( q->r=q->size-1)
	{
		return 1;
	}
return 0;
}
   void enqueue (struct queue *q,int val)
{
	if(isfull(q))
	{
		cout<<"queue is overflow"<<endl;
	}
	else {
		q->r=q->r+1;
		q->arr[q->r]=val;
	}
}
int dequeue (struct queue*q)
{
	int a=-1;
	if(isempty(q))
	{
		cout<<"not element is added queue is empty:"<<endl;
	}
	else {
		q->f=q->f+1;
		a=q->arr[q->f];
	}
	return a;
}

int main ()
{
	struct queue q;
	q.size=10;
//	q.f=q.r=-1;
	q.arr=(int*)malloc(q.size*sizeof(int));
	
	

	//enque few element
	
    enqueue(&q,1); 
	enqueue(&q,2);
     printf("dequeueing the element %d\n",dequeue(&q));
	 printf("dequeueing the element %d\n",dequeue(&q));
	
	
//	//if element is empty
//	if (isempty(&q))
//	{
//			cout<<"queue is empty\n"<<endl;
//	}
//		
//	//if element is full
//	if (isfull(&q))
//	{
//			cout<<"queue is full\n"<<endl;
//	}


	return 0;
	
}