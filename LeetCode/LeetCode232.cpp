//
// Created by CRZ on 2024/3/9.
//

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution{
public:
    bool isValid(string s) {
        stack<char> parsed;
        for (const char &c: s) {
            if (c == '[' || c == '(' || c == '{') {
                parsed.push(c);
            } else {
                if(parsed.empty())return false;
            }
            char cc = parsed.top();
            if((c==']'&&cc=='[')||(c==')'&&cc=='(')||(c=='}'&&cc=='{')){
                parsed.pop();
            } else{
                return false;
            }
        }
        return parsed.empty();
    }
};

int main() {
    Solution solution;
    bool ans = solution.isValid("[](){}");
    std::cout << ans;
}

