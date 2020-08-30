#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		if (root == NULL) {
			return result;
		}
        this->inorderTraversal(root, result);
        return result;
	}

    void inorderTraversal(TreeNode* root, vector<int>& result) {
        if(root == NULL) {
            return;
        }

        if (root->left != NULL) this->inorderTraversal(root->left, result);
        result.push_back(root->val);
        if (root->right != NULL) this->inorderTraversal(root->right, result);
    }
};

int main()
{
	std::cout << "Hello World!\n";
}
