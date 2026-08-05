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

        while(head != NULL){
            ListNode* nextN = head -> next;
            head -> next = prev;
            prev = head;
            head = nextN;
            
        }

        return prev;

    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* added = new ListNode(-1);
        ListNode* head = added;

        int carry = 0;
        l1 = reverse(l1);
        l2 = reverse(l2);

        while(l1 != NULL && l2 != NULL){
            int sum = carry + l1 -> val + l2 -> val;
            if(sum >= 10){
                sum = sum%10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            ListNode* temp = new ListNode(sum);
            added -> next = temp;
            added = added -> next;

            l1 = l1 -> next;
            l2 = l2 -> next;
        }

        while(l1 != NULL){
            int sum = carry + l1 -> val;
            if(sum >= 10){
                sum = sum%10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            ListNode* temp = new ListNode(sum);
            added -> next = temp;
            added = added -> next;
            l1 = l1 -> next;
        }

        while(l2 != NULL){
            int sum = carry + l2 -> val;
            if(sum >= 10){
                sum = sum%10;
                carry = 1;
            }
            else{
                carry = 0;
            }
            ListNode* temp = new ListNode(sum);
            added -> next = temp;
            added = added -> next;
            l2 = l2 -> next;
        }

        if (carry) {
            added->next = new ListNode(carry);
        }

        ListNode* extra = head;
        head = head -> next;
        delete extra;

        head  = reverse(head);

        return head;
        
    }
};