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
    void returnMid(ListNode* head,ListNode* &ans,int &n){
        if(!head){
            n = n/2+1;
            return;
        }

        n++;
        returnMid(head->next,ans,n);
        n--;
        if(n == 1){
            ans = head;
        }
        return;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* ans= NULL;
        int n=1;
        returnMid(temp,ans,n);
        return ans;
    }
};