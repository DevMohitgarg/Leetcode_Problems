class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        // Array to store the counts of each character
        int charCount[26] = {0};

        // Count characters from the first word
        for (char c : words[0]) {
            charCount[c - 'a']++;
        }

        // Update counts based on the other words
        for (int i = 1; i < words.size(); ++i) {
            int currentCount[26] = {0};
            for (char c : words[i]) {
                currentCount[c - 'a']++;
            }
            
            // Keep the minimum count for each character
            for (int j = 0; j < 26; ++j) {
                charCount[j] = min(charCount[j], currentCount[j]);
            }
        }

        // Build the result
        vector<string> result;
        for (int i = 0; i < 26; ++i) {
            for (int j = 0; j < charCount[i]; ++j) {
                result.push_back(string(1, 'a' + i));
            }
        }

        return result;
    }
};