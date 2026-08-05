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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prev = NULL;
        ListNode* curr = list1;

        for(int i = 0; i < a; i++){
            prev = curr;
            curr = curr -> next;
        }

        ListNode* prev2 = NULL;

        for(int i = 0; i < (b - a + 1); i++){
            prev2 = curr;
            curr = curr -> next;
        }

        prev2 -> next = NULL;

        ListNode* temp = list2;

        prev -> next = temp;

        while(temp -> next != NULL){
            temp = temp -> next;
        }

        temp -> next = curr;

        return list1;
        
    }
};