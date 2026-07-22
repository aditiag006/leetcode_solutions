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
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp = head;
        int carry = 0;
        if(temp -> next == NULL){
            int num = (temp -> val * 2);
            carry = num/10;
            temp -> val = num % 10;
        }
        else{
            while(temp -> next != NULL){
                if(temp -> next -> val > 4){
                    int num = (temp -> val * 2) + 1;
                    if(temp == head){
                        carry = num/10;
                    }
                    temp -> val = num % 10;
                
                }
                else{
                    int num = (temp -> val * 2);
                    if(temp == head){
                        carry = num/10;
                    }
                    temp -> val = num % 10;
                }
                temp = temp -> next;
            }
            temp -> val = (temp -> val * 2) % 10;
        }

        if(carry != 0){
            ListNode* extra = new ListNode(carry);
            extra -> next = head;
            head = extra;
        }

        return head;
        
    }
};