class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        function<int(TreeNode*)> dfs = [&](TreeNode* node){
            if(!node) return 0;

            int left = max(0, dfs(node->left));
            int right = max(0, dfs(node->right));

            ans = max(ans, left + right + node->val);

            return node->val + max(left, right);
        };

        dfs(root);
        return ans;
    }
};