#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Queue.h"

int main(int argc , char **argv) {
   Queue Q;
   Q.headPtr=NULL;
   Q.tailPtr=NULL;
   Q.size=0;
  int i,x,a=1,cash,s,b=0;
   
/* for(i=1;i<argc;i++) 
         enqueue(&Q, atoi(argv[i]));
         
   while(Q.size>0)
        printf("%d\n",dequeue(&Q));*/

 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            if(Q.headPtr==NULL)
            {
              printf("No queue\n");
            }
            else{
            x=dequeue(&Q); // ผลคำนวน ราคา 
            printf("You have to pay %d\n",x);
            
            do{
            s=0;
            printf("Cash: ");
            scanf("%d",&cash);
            if(cash==x)
            {
              printf("Thank you\n");
              break;
            }
            else if(cash>x)
            {
              printf("Thank you\n");
              printf("Change is : %d\n",cash-x);
              break;
            }
            else if(cash<x)
            {
              printf("Not enough money Cash is %d\n",x);
              s=1;
            }
            }while(s==1);
            }
        }
        else {
          b=0;
          printf("My order is %s\n",argv[i]);
          printf("Customer No.%d\n",a);
          a++;
          switch (atoi(argv[i])){
            case 1: printf("Ramen\n"); break;
            case 2: printf("Somtum\n");  break;
            case 3: printf("Fried Chicken\n");   break;
            default:
            printf( "No Food\n" ); b=1; break;
          }
          if(b==0)
          {
          enqueue(&Q, atoi(argv[i]),atoi(argv[i+1]));
          
          }
         i++;
          
        }
 }
 printf("==================================\n");
 printf("There are %d people in queue\n",Q.size);
        
  return 0;
}