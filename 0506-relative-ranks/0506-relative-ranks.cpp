class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
     
         priority_queue<int> pq;
    unordered_map<int, string> mp;

    // Insert scores into priority queue
    for (int i : score) {
        pq.push(i);
    }

    // Assign ranks based on position in priority queue
    int n = pq.size();
    for (int i = 0; i < n; ++i) {
        int val = pq.top();
        pq.pop();
        if (i == 0) mp[val] = "Gold Medal";
        else if (i == 1) mp[val] = "Silver Medal";
        else if (i == 2) mp[val] = "Bronze Medal";
        else mp[val] = to_string(i + 1);
    }

    // Assign ranks to original scores
    vector<string> ans;
    for (int i : score) {
        ans.push_back(mp[i]);
    }

    return ans;}
};

