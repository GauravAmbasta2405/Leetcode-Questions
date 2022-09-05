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

class Solution
{
public:
    // Map to tacks the node values at each level
    map<int, vector<int>> mp;
    void check(Node *r, int l)
    {
        // if null, return the control
        if (r == NULL)
            return;
        // Push the current node at the current level
        mp[l].push_back(r->val);
        // Check all the children of the current nodes and traverse them
        for (auto i : r->children)
            check(i, l + 1);
    }
    vector<vector<int>> levelOrder(Node *root)
    {
        ios_base::sync_with_stdio(0);
        check(root, 0);
        vector<vector<int>> ans;
        // Since the map is ordered, just push all the vectors stored in the map into the resultant vector
        for (auto i : mp)
            ans.push_back(i.second);
        return ans;
    }
};