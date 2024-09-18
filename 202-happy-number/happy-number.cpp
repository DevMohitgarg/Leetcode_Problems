class Solution {
public:
 int isHappyChecker(int n)
 {
   int sum = 0;

    while(n != 0)
    {
        int digit = n % 10;
        sum+= pow(digit,2);
        n = n/10;
    }
    return sum;
}

    bool isHappy(int n) {
         

    while(n >= 10)
    {
        n = isHappyChecker(n);
    }    
if(n==1 || n==7)
    {
        return true;
    }
    if(n == 1)
    {
        return true;
    }
    return false;
    }
};