class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
         int left = 0, sum = 0, min_length = std::numeric_limits<int>::max();

    for (int right = 0; right < nums.size(); ++right) {
        sum += nums[right]; // Expand the window

        // Shrink the window from the left as long as the sum is >= target
        while (sum >= target) {
            min_length = std::min(min_length, right - left + 1); // Update the minimum length
            sum -= nums[left]; // Shrink the window
            left++;
        }
    }

    // Return the result, or 0 if no valid subarray was found
    return min_length == std::numeric_limits<int>::max() ? 0 : min_length;
    }
};