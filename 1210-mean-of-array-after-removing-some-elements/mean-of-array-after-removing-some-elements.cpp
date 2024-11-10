class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int removeCount = n / 20;

        vector<int> trimmedArr(arr.begin() + removeCount,
                               arr.end() - removeCount);

        double sum = accumulate(trimmedArr.begin(), trimmedArr.end(), 0LL);
        return sum / trimmedArr.size();
    }
};