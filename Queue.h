#include "Node.h"

typedef struct {
	OrderPtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue(Queue *Q,  int x,int y){
   
   OrderPtr new_order;

   new_order=(OrderPtr) malloc(sizeof(Order));
   if(new_order){
     new_order->order_number=x;
     new_order->num=y;
     new_order->nextPtr=NULL;

     if(Q->headPtr==NULL) 
        Q->headPtr=new_order;
     else   
        Q->tailPtr->nextPtr=new_order;
     Q->tailPtr=new_order;
     Q->size++;
   }


}

int dequeue(Queue *Q){
  int value,price;
  OrderPtr t;

  if(Q->size>0){
    t=Q->headPtr;
    switch(t->order_number){
      case(1): price=100; break;
      case(2): price=20; break; 
      case(3): price=50; break;  
    }
    value=price*t->num;
    //if(Q->headPtr==Q->tailPtr) Q->tailPtr=NULL;
    Q->headPtr=t->nextPtr;
    if(Q->size==1) 
    Q->tailPtr=NULL;
    //if( Q->headPtr==NULL)  Q->tailPtr=NULL;
    Q->size--;
    
    free(t);
    return value;
  }

  return 0;

}
