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
        while(k > 0){
            ListNode* temp = head;
            if(head == NULL || head -> next == NULL){
                return head;
            }
            int cnt =1;

            while(temp -> next -> next != NULL){
                temp = temp -> next;
                cnt++;
            }

            cnt++;
            k = k%cnt;
            if(k==0) return head;

            ListNode* nextrotated = temp -> next;
            temp -> next = NULL;

            nextrotated -> next = head;
            head = nextrotated;
            k--;
        }

        return head;
        
    }
};