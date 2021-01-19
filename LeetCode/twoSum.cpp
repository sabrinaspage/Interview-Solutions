#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int pos1 = 0;
        vector <int> twoSumArr;
        for(auto it = nums.begin(); it != nums.end(); ++it){
            int pos2 = pos1 + 1;
            for(auto jt = it + 1; jt != nums.end(); ++jt){
                if(*jt + *it == target){
                    twoSumArr.push_back(pos1);
                    twoSumArr.push_back(pos2);
                }
                pos2++;
            }
            pos1++;
        }
        if(twoSumArr.empty()){
            cout << "Too bad." << endl;
        }
        return twoSumArr;
    }
};

// test

int main() {
    Solution * sol = new Solution;
    
    vector<int> num1{9, 7, 5, 11, 6};
    int target = 11;
    
    vector<int> val = sol->twoSum(num1, target);
    
    for(int x : val)
        cout << x << endl;
    delete sol;
    return 0;
}
