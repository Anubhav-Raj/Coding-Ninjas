#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int length(ListNode *head)
    {
        if (head == NULL)
        {
            return 0;
        }
        return 1 + length(head->next);
    }

public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        // finding length of both list
        int len1 = length(headA);
        int len2 = length(headB);

        // finding length difference of both list
        int diff = abs(len1 - len2);

        // Creating Two pointer
        ListNode *ptr1;
        ListNode *ptr2;

        // find which list is longer, then point ptr1 to it, and ptr2 to short pointer
        if (len1 > len2)
        {
            ptr1 = headA;
            ptr2 = headB;
        }
        else
        {
            ptr2 = headA;
            ptr1 = headB;
        }

        // ptr1 and ptr2 come same distace  from  intersecting point
        while (diff--)
        {

            ptr1 = ptr1->next;
            if (ptr1 == NULL)
            {
                return ptr1;
            }
        }

        // cheacking ptr1==ptr2, where  they meet  that is our meeting pointer
        while (ptr1 != NULL && ptr2 != NULL)
        {
            if (ptr1 == ptr2)
            {
                return ptr1;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};

 int main(){
// code hear
     ListNode 
 return 0;
}