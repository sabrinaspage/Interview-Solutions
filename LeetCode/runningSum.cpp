#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            int count = 0;
            for(vector<int>::iterator temp = nums.begin(); temp != nums.end();){
                 count += *temp;
                *(temp) = count;
                ++temp;
            }
            return nums;
        }
};

// test

int main()
{
    Solution * sol = new Solution;
    vector<int> chn{1, 2, 3, 4};
    vector<int> val = sol->runningSum(chn);
    for(auto i: val){
        cout << i << endl;
    }

    return 0;
}