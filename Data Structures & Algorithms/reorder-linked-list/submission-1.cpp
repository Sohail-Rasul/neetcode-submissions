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
    void reorderList(ListNode* head) {
        vector<ListNode*> arr;
        ListNode* curr = head;

        while(curr!=nullptr){
            arr.push_back(curr);
            curr = curr->next;
        }

        head = arr[0];
        int r = arr.size()-1;
        int l =0;
        curr = head;
        
        while(l<=r && curr){
            if(l==0){
                curr = arr[l];
                curr->next = arr[r];
                curr = curr->next;
                l++;
                r--;
            }
            else if(l==r){
                curr->next = arr[r];
                curr = curr->next;
                l++;
                r--;
            }
            else{
                curr->next = arr[l];
                curr = curr->next;
                curr->next = arr[r];
                curr = curr->next;
                l++;
                r--;
            }
        }

        curr->next = nullptr;
    }
};
