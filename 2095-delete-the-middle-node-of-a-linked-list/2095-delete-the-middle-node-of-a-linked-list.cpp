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
    ListNode* deleteMiddle(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp -> next;
            cnt++;
        }

        int middle = cnt/2;

        if(middle == 0){
            head = head -> next;
            return head;
    
        }
        else{
            ListNode* prev = NULL;
            ListNode* curr = head;
            int count = 0;

            while(count < middle){
                prev = curr;
                curr = curr -> next;
                count++;
            }

            prev -> next = curr -> next;
            curr -> next = NULL;

            delete curr;
        }


        return head;
    }


        
};