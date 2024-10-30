class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int position = 0; // Start at the boundary
    int boundaryCount = 0; // Counter for boundary returns
    
    for (int num : nums) {
        // Update position
        position += num;

        // Check if the ant returns to the boundary
        if (position == 0) {
            boundaryCount++;
        }
    }
    
    return boundaryCount;
    }
};