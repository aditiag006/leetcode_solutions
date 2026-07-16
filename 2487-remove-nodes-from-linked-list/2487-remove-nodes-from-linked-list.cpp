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

    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        while(head){
            ListNode* nextNode = head -> next;
            head -> next = prev;
            prev = head;
            head = nextNode;
        }

        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        int maxtillnow = head -> val;

        ListNode* prev = head;
        ListNode* curr = head -> next;
        while(curr){
            if(curr -> val < maxtillnow){
                prev -> next = curr -> next;
                curr = prev -> next;
            }
            else{
                maxtillnow = curr -> val;
                prev = curr;
                curr = curr -> next;
            }

        }
        return reverse(head);

    }
};