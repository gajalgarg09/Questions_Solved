// Given a string s of zeros and ones, return the maximum score after splitting the string into two non-empty substrings 
// (i.e. left substring and right substring).
// The score after splitting a string is the number of zeros in the left substring plus the number of ones in the right substring.
    
// Example:
// Input: s = "011101"
// Output: 5 
// Explanation: 
// All possible ways of splitting s into two non-empty substrings are:
// left = "0" and right = "11101", score = 1 + 4 = 5 
// left = "01" and right = "1101", score = 1 + 3 = 4 
// left = "011" and right = "101", score = 1 + 2 = 3 
// left = "0111" and right = "01", score = 1 + 1 = 2 
// left = "01110" and right = "1", score = 2 + 1 = 3

#include<iostream>
#include<string>
using namespace std;

int maxScore(string s){
    int ans =0;
    for(int i=0; i<s.size()-1; i++){
        int curr =0;
        for(int j =0; j<=i; j++){
            if(s[j] == '0'){
                curr++;
            }
        }

        for(int j = i+1; j<s.size(); j++){
            if(s[j] == '1'){
                curr++;
            }
        }
        ans = max(ans , curr);
    }
    return ans;
}