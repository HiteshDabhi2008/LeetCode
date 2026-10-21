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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=head;
        int c;
        if(!head) return NULL;
        while(temp->next!=NULL){
                prev=temp;
                temp=temp->next;
                c++; 
        }
        if(k>c){
           k=k%c;
        }
        
        for(int i=0;i<k;i++){
            temp=head;
            prev=head;
            while(temp->next!=NULL){
                prev=temp;
                temp=temp->next; 
            }
            temp->next=head;
            prev->next=NULL;
            head=temp;
        }
        return head;
    }
};