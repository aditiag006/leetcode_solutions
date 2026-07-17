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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> answer;
        ListNode* curr = head;
        while(curr != NULL){
            ListNode* next = curr -> next;
            while(next != NULL){
                if(curr -> val < next -> val){
                    answer.push_back(next -> val);
                    break;

                }
                next = next -> next;
            }
            if(next == NULL){
                answer.push_back(0);
            }
            curr = curr -> next;
        }
        return answer;
        
    }
};