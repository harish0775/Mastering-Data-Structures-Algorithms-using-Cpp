#include<stdio.h>
#include<stdlib.h>


struct  Node
{
    int data;
     struct  Node *next;
       
}*first = NULL;  // decleared $ insilized first pointer as null

   //create linked list Using {2,3,4554,66,6} this element
   /*
   take Array as perimeter 
       A[],
       no. od elemENT IN an Array 
       int n
        
   */

   void create(int A[] ,int n){
       int i ;  // Scanning through an Array
       struct Node *t,//temperory pointer help to create new node
       *last; // create last node help me to add new node at the last of  linked list 
       first = (struct Node *)malloc(sizeof(struct Node));  // As first LL empty create new node using malloc function
       // struct Node* ... Used type casting create newnode
    first -> data = A[0];
    first -> next = NULL;
    last = first;
   }
     // we create 1 and last Node 
     //Now be create all Node Using Array

    for(int i = 0; i < n; i++)
    {
       t = (struct Node*)malloc(sizeOf(struct Node));
        t ->data = A[i];
        t-> next = NULL;
        last->next=t;
        last=t;
       
    }

    void Display(struct Node *p){
        while (p != NULL){
            printf("%d",p-> data);
            p = p->next;
        }
        {
            /* code */
        }
        
    }
    

