class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
          map<int, int> weight_map; 

    for (auto& item : items1) {
        weight_map[item[0]] += item[1];  // Add weight for each value
    }

    // Process items2
    for (auto& item : items2) {
        weight_map[item[0]] += item[1];  // Add weight for each value
    }

    // Convert map to result vector
    vector<vector<int>> result;
    for (auto& entry : weight_map) {
        result.push_back({entry.first, entry.second});
    }

    return result; 
    }
};