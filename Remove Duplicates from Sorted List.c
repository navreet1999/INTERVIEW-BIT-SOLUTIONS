/*
https://www.interviewbit.com/problems/remove-duplicates-from-sorted-list/
*/


listnode* deleteDuplicates(listnode* A) {
     listnode *curr=A;
    if(A==NULL)
    return;
    listnode *nextt=NULL;
    while(curr && curr->next)
    {
        if(curr->val==curr->next->val)
        {
            nextt=curr->next->next;
           
            free(curr->next);
            curr->next=nextt;
            
        }
        else
        {
            curr=curr->next;
        }
    }
    return A;
}
