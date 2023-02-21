/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;b
        ListNode* temp2=l2;
        
        int c=0;
        ListNode* ans=NULL;
        ListNode* tempans=ans;
        while(1){
            int val1=temp1->val;
            int val2=temp2->val;
            
            int sum = val1+val2 + c;
            c = (sum>9)?1:0;
            
            ListNode* p=new ListNode(sum);
            
            if(temp1->next!=NULL){ temp1=temp1->next;}
            else{
                break;
            }
            if(temp2->next!=NULL){ temp2=temp2->next;}
            else break;
            
            if(tempans==NULL) tempans=p;
            else
            tempans->next=p;
            tempans=tempans->next;
        }
        
        return ans;
    }
};