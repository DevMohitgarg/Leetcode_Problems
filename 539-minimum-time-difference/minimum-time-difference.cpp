class Solution 
{
public:
    int convert_stringto_int(string str)
    {
       string s1 = str.substr(0,2);
       string s2 = str.substr(3,2);
       int num1 = stoi(s1)*60;
       int num2 = stoi(s2);
       return num1 + num2 ;
    }

    int findMinDifference(vector<string>& s) 
    {
        sort(begin(s),end(s));
        s.push_back(s[0]);
        int ans = INT_MAX;
        for(int i=0;i<s.size()-1;i++)
        {
            int time_one = convert_stringto_int(s[i]);
            int time_two = convert_stringto_int(s[i + 1]);

            ans = min(ans, abs(time_one - time_two));
            ans = min(ans, abs(time_one - (1440 + time_two)));
        }
        return ans;
    }
};