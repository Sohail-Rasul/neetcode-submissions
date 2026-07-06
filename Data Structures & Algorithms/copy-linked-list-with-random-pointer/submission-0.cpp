/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> oldToNew;
        Node* curr = head;

        // Mapping All Old Nodes to New Nodes
        while(curr != nullptr){
            Node* copy = new Node(curr->val);
            oldToNew[curr] = copy;
            curr = curr->next;
        }

        // Now assign values of old to copy
        curr = head;
        while(curr != nullptr){
            Node* copy = oldToNew[curr];
            copy->next = oldToNew[curr->next];
            copy->random = oldToNew[curr->random];

            curr = curr->next;
        }

        return oldToNew[head];
    }
};
