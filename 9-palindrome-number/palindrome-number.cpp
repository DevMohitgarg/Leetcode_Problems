class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return 0;
        long ans=0;
        int rem,num=x;


        while(num!=0)
        {
            rem = num%10;
            num /=10;
            if(ans>INT_MAX)
            return 0;
            ans = ans*10 + rem;
            
        }
        if(ans==x)
        {
            return 1;
        }
        else 
            return 0;
    }
};