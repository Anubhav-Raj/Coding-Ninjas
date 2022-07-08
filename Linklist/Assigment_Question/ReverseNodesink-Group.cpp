#include <bits/stdc++.h>
using namespace std;
class  {
public:
      
     int length(ListNode *head){
          if(head==NULL){
               return 0;
          }
          return 1+ length(head->next);
     }
    ListNode* reverseKGroup(ListNode* head, int k) {
          if( head==NULL || head->next==NULL || k==1) return head;
        
         ListNode *dummy = new ListNode(-1);
         dummy->next=head;
        
         int len =length(head);
         ListNode *prev=dummy;
         ListNode *curr;
         ListNode *next;
         while(len>=k){
              curr= prev->next;
              next= curr->next;
              for(int i=1;i<k;i++){
                   curr->next= next->next;
                   next->next= prev->next;
                   prev->next= next;
                   next= curr->next;
              }
              prev=curr;
              len=len-k;
         }
         return dummy->next;
    }
};
 int main(){
// code hear
     Solution 
 return 0;
}