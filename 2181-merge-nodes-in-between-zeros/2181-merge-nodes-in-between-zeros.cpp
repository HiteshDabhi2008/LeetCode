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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp1=head->next;
        ListNode *temp2=nullptr;
        ListNode *shead=nullptr;
        int sum=0;
        while(temp1){
            sum+=temp1->val;
            if(temp1->val==0){
                ListNode *newNode=new ListNode(sum);
                sum=0;
                if(shead==NULL){
                    shead=newNode;
                    temp2=newNode;
                }
                else{
                    temp2->next=newNode;
                    temp2=temp2->next;
                }
            }
            temp1=temp1->next;      
        }
        return shead;
    }
};