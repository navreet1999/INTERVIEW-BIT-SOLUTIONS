/*

Given a singly linked list and an integer K, reverses the nodes of the

list K at a time and returns modified linked list.

 NOTE : The length of the list is divisible by K 
Example :

Given linked list 1 -> 2 -> 3 -> 4 -> 5 -> 6 and K=2,

You should return 2 -> 1 -> 4 -> 3 -> 6 -> 5

*/

listnode* reverseList(listnode* A, int B) 
{
     listnode* curr=A,*nextt=NULL,*prev=NULL;
     int count=0;
     if(B==1 || B==0)
     return A;
     
     while(curr  && B>count)
     {
       
            
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
        count++;
         
     }
      
      if(nextt!=NULL)
         A->next = reverseList(nextt,B); 
   
      //
    //A=prev;
     
   return prev ; 
}
