class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";  // If the input list is empty, return an empty string.
    
    // Start by assuming the prefix is the first string.
    string prefix = strs[0];
    
    // Compare the prefix with each string in the list.
    for (int i = 1; i < strs.size(); i++) {
        int j = 0;
        
        // Compare characters one by one between prefix and current string.
        while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
            j++;
        }
        
        // Update the prefix to the common part found so far.
        prefix = prefix.substr(0, j);
        
        // If at any point, the prefix becomes empty, return it immediately.
        if (prefix == "") return "";
    }
    
    return prefix;
    }
};