
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> comb(k, 0);
        backTrack(ans, comb, n, k, 1, 0);
        return ans;
    }

    void backTrack(vector<vector<int>>& ans, vector<int>& comb, int n, int k, int pos, int count) {
        if(count == k) {
            ans.push_back(comb);
            return;
        }
        for(int i = pos; i <= n; i++) {
            comb[count] = i;
            count++;
            backTrack(ans, comb, n, k, i + 1, count);
            count--;
        }
    }
};
int main(){
    Solution solution ;
    vector<vector<int>> ans=solution.combine(4,3);
    for (const auto& innerVec : ans) {
        // 在外层向量的每个内层向量中遍历并输出元素
        for (const auto& element : innerVec) {
            std::cout << element << " ";
        }
        std::cout << std::endl; // 输出一个换行符来区分内层向量
    }
}