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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        unordered_set<ListNode*> l1;

        while(curr1 != nullptr){
            l1.insert(curr1);
            curr1 = curr1->next;
        }

        while(curr2 != nullptr){
            if(l1.find(curr2) != l1.end()){
                return curr2;
            }

            curr2 = curr2->next;
        }

        return NULL;
    }
};