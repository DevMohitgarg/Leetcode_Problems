class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();

        if (n < 3)
            return result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; ++i) {
            // Skip duplicates for the first number
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum == 0) {
                    // Found a valid triplet
                    result.push_back({nums[i], nums[j], nums[k]});

                    // Skip duplicates for the second number
                    while (j < k && nums[j] == nums[j + 1])
                        ++j;
                    // Skip duplicates for the third number
                    while (j < k && nums[k] == nums[k - 1])
                        --k;

                    // Move both pointers
                    ++j;
                    --k;
                } else if (sum < 0) {
                    ++j; // We need a larger sum, move j to the right
                } else {
                    --k; // We need a smaller sum, move k to the left
                }
            }
        }

        return result;
    }
};