class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<bool> marked(n, false);
        vector<pair<int, int>> sorted_nums;

        for (int i = 0; i < n; ++i) {
            sorted_nums.push_back({nums[i], i});
        }

        sort(sorted_nums.begin(), sorted_nums.end());

        long long score = 0;

        for (auto& [value, idx] : sorted_nums) {
            if (marked[idx]) {
                continue;
            }

            score += value;
            marked[idx] = true;
            if (idx - 1 >= 0)
                marked[idx - 1] = true;
            if (idx + 1 < n)
                marked[idx + 1] = true;
        }

        return score;
    }
};