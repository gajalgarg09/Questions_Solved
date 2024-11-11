#include<iostream>
#include<stack>
using namespace std;

bool redundantBrackets(string &s){

    stack <char> st;
    for(int i =0; i<s.length(); i++){

        char ch = s[i];

        if(s[i] == '(' || ch == '+' || ch == '-' || ch == '*' || ch =='/'){
            st.push(ch);
        }

        else{
            bool isRedundant = true;
            while(st.top() != '('){
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top =='/'){
                    isRedundant = false;
                }
                st.pop();
            }
            if( isRedundant == true)
                return true;
            st.pop();
        }
    }
   return false; 
}