/*
Given a linked list, swap every two adjacent nodes and return its head.

For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.

Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
*/

listnode* swapPairs(listnode* A)
{
     listnode* curr=A,*nextt=NULL,*prev=NULL;
     int count=0,B=2;
    
     while(curr  && B>count)
     {
       
            
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
        count++;
         
     }
      
      if(nextt!=NULL)
         A->next = swapPairs(nextt); 
         
         return prev;
}
