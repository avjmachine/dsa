/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

// recursive approach
class Solution {
public:
    void traverse(Node* root, vector<int> &result){
        if (root==nullptr){
            return;
        }
        
        result.push_back(root->val);
        for (Node* child: root->children){
            traverse(child, result);
        }
    }
    
    
    vector<int> preorder(Node* root) {
        vector<int> result {};
        traverse(root, result);
        return result;
    }
};

// iterative approach
class Solution2 {
public:
    vector<int> preorder(Node* root) {
        vector<int> result {};
        stack<Node*> tempstack;
        
        if (root != nullptr){
            tempstack.push(root);        
        }
        
        Node* current_node;
        
        while(!tempstack.empty()){
            current_node = tempstack.top();
            result.push_back(current_node->val);
            tempstack.pop();
            
            for(auto i=current_node->children.rbegin(); i!=current_node->children.rend(); i++){
                tempstack.push(*i);
            }
        }
                
        return result;
    }
};