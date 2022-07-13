/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
	if(root==NULL)
        return {};
        
	queue<TreeNode*> q;
	vector<vector<int> > ans;
        
	q.push(root);
        
	while(!q.empty()) {
		int levelSize = size(q);
		vector<int> level;
		for(int i = 0; i < levelSize; i++) {
			auto top = q.front(); 
            q.pop();
			
            if(top -> left) 
                q.push(top -> left);
			if(top -> right) 
                q.push(top -> right);
			level.push_back(top -> val);
		}
		ans.push_back(level);
	}
	return ans;
    }
};
