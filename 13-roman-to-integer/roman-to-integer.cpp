class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
    int prevValue = 0;

    for (char c : s) {
        int currentValue = 0;
        if (c == 'I') currentValue = 1;
        else if (c == 'V') currentValue = 5;
        else if (c == 'X') currentValue = 10;
        else if (c == 'L') currentValue = 50;
        else if (c == 'C') currentValue = 100;
        else if (c == 'D') currentValue = 500;
        else if (c == 'M') currentValue = 1000;

        // Check for the subtraction case
        if (prevValue < currentValue) {
            total += (currentValue - 2 * prevValue); // Subtract the previous value once and add the current
        } else {
            total += currentValue; // Normal addition
        }

        prevValue = currentValue; // Update the previous value
    }

    return total;
    }
};