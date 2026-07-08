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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        int v1 = 0;
        int v2 = 0;
        int carry = 0;
        int val =0;

        while(curr1!=nullptr || curr2!=nullptr){
            // Get Value from First Number (0 if smaller than second)
            if(curr1!=nullptr) v1 = curr1->val;
            else v1 = 0;

            // Get Value from second number (0 if smaller than first)
            if(curr2!=nullptr) v2=curr2->val;
            else v2 = 0;

            // Total Sum (including Carry)
            val = v1+v2+carry;

            //If lets say val = 15 then:
            // carry = 15 / 10 = 1
            // val = 15 % 10 = 5 
            // So we push val = 5 and carry 1

            carry = val / 10;
            val = val%10;

            // Update Pointers
            curr->next = new ListNode(val);
            curr=curr->next;

            if(curr1!=nullptr) curr1 = curr1->next;
            if(curr2!=nullptr) curr2 = curr2->next;
        }

        // Leftover carry:
        if (carry) curr->next = new ListNode(carry);

        return dummy.next;
    }
};
