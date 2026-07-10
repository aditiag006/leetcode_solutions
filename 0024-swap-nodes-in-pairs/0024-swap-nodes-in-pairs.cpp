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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return NULL;

        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            temp = temp -> next;
            n++;
        }

        if(n<2){
            return head;
        }

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        int cnt = 0;

        while(curr != NULL && cnt < 2){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr =next;
            cnt++;
        }

        if(next != NULL){
            head -> next = swapPairs(next);
        }

        return prev;
        
    }
};