/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        // level order traversal done in-place using the next pointers without additional memory for a queue.

if (!root) return nullptr;

        Node* curr = root;  // current node of current level
        Node* dummy = new Node(0);  // dummy node to build the next level's linked list
        while (curr) {
            Node* tail = dummy; // tail of the next level's linked list
            // iterate over the current level
            while (curr) {
                if (curr->left) {
                    tail->next = curr->left;
                    tail = tail->next;
                }
                if (curr->right) {
                    tail->next = curr->right;
                    tail = tail->next;
                }
                curr = curr->next; // move in current level using next pointer
            }
            curr = dummy->next; // move to next level
            dummy->next = nullptr; // reset dummy for next iteration
        }
        delete dummy; // cleanup
        return root;
    }
};