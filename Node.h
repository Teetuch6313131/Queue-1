//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2564 BE.
//

#ifndef Node_h
#define Node_h
struct node
{
    int data;
    struct node *nextoPtr;
};

typedef struct node Node;
typedef struct node* NodePtr;
struct  order
{
    int order_number; //หมายเลขออร์เดอร์
    int num;// จำนวน 
    struct order *nextPtr;
} ;
typedef struct order Order;
typedef Order* OrderPtr;
#endif
