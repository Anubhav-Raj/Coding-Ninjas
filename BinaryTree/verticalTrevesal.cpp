class Solution
{
public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {

        map<int, map<int, multiset<int>>> mp;
        queue<pair<TreeNode *, pair<int, int>>> q;

        q.push({root, {0, 0}}); // pushing  into queuq;

        while (!q.empty())
        {

            auto top = q.front();
            q.pop();
            TreeNode *node = top.first;

            int x = top.second.first;
            int y = top.second.second;

            mp[x][y].insert(node->val);
            if (node->left)
            {
                q.push({node->left, {x - 1, y + 1}});
            }
            if (node->right)
            {
                q.push({node->right, {x + 1, y + 1}});
            }
        }

        vector<vector<int>> ans;

        for (auto x : mp)
        {
            vector<int> col;
            for (auto q : x.second)
            {
                col.insert(col.end(), q.second.begin(), q.second.end());
            }
            ans.push_back(col);
        }

        return ans;
    }
};