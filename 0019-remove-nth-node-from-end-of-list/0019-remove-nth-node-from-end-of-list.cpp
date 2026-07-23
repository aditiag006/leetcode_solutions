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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            temp = temp -> next;

        }
        int k = cnt - n + 1;
        ListNode* curr = head;
        ListNode* prev = NULL;

        for(int i = 1; i < k; i++){
            prev = curr;
            curr = curr -> next;
        }
        if(prev != NULL){
            prev -> next = curr -> next;
            curr -> next = NULL;

        }
        else{
            head = curr -> next;
            curr -> next = NULL;
        }

        return head;
    }
};