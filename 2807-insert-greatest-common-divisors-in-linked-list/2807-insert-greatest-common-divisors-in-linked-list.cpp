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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp=head,*prev=head;
        while(temp && temp->next){
            prev=temp;
            temp=temp->next;
            ListNode *n=new ListNode(gcd(prev->val,temp->val));
            n->next=temp;
            prev->next=n;
        }
        return head;
    }
};