/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> set;
        ListNode* temp1 = headA;

        while(temp1 != NULL){
            set.insert(temp1);
            temp1 = temp1 -> next;
        }

        ListNode* temp2 = headB;
        while(temp2 != NULL){
            if(set.find(temp2) != set.end()){
                return temp2;
            }
            temp2 = temp2 -> next;
        }

        return NULL;
        
    }
};