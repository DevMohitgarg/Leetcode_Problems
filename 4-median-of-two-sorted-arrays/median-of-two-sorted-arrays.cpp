class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merged;
        merged.reserve(nums1.size() + nums2.size());

        int i = 0, j = 0;

        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                merged.push_back(nums1[i++]);
            } else {
                merged.push_back(nums2[j++]);
            }
        }

        // Add remaining elements from nums1 or nums2
        while (i < nums1.size()) {
            merged.push_back(nums1[i++]);
        }

        while (j < nums2.size()) {
            merged.push_back(nums2[j++]);
        }

        // Calculate the median
        int size = merged.size();
        if (size % 2 == 0) {
            // If even, median is the average of two middle numbers
            return (merged[size / 2 - 1] + merged[size / 2]) / 2.0;
        } else {
            // If odd, median is the middle number
            return merged[size / 2];
        }
    }
};