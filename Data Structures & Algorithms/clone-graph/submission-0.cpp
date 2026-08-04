/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*> oldToNew;
    
    Node* clone(Node* node){
        // Node already exists
        if(node==nullptr){
            return nullptr;
        }
        if(oldToNew.find(node) != oldToNew.end()){
            return oldToNew[node];
        }
        
        // If it doesnt exist, add copy
        Node* newNode = new Node(node->val);
        oldToNew[node] = newNode;

        // Recursion for all neigbhors
        for(auto nbr : node->neighbors){
            // Add to list of neighbors
            newNode->neighbors.push_back(clone(nbr));
        }

        return newNode;

    }

    Node* cloneGraph(Node* node) {
        Node* res = clone(node);

        return res;
    }
};
