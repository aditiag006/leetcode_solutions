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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int l = left;
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(l> 1){
            prev = temp;
            temp = temp -> next;
            l--;
        }

        ListNode* prev2 = NULL;
        ListNode* curr = temp;

        while(left <= right){
            ListNode* nextnode = curr -> next;

            curr -> next = prev2;
            prev2 = curr;
            curr = nextnode;
            left++;
        }
        temp -> next = curr;
        if(prev != NULL){
             prev -> next = prev2;

        }else{
            head = prev2;
        }

        return head;

        
    }
};