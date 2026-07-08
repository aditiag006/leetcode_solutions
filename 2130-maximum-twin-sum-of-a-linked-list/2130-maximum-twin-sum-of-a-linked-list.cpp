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
    int pairSum(ListNode* head) {
        //finding middle of ll
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast ->next -> next;
        }

        ListNode* mid = slow;

        //reverse the ll after mid
        ListNode* prev = NULL;
        ListNode* nextNode = NULL;

        while(mid != NULL){
            nextNode = mid -> next;
            mid -> next = prev;
            prev = mid;
            mid = nextNode;
        }

        //find max

        int result = 0;
        ListNode* curr = head;

        while(prev != NULL){
            result = max(result, curr->val + prev->val);
            curr = curr -> next;
            prev = prev -> next;
        }

        return result;

    }
};