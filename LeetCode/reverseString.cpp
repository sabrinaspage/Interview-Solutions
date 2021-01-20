#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        void reverseString(vector<char>& s) {   
            auto b = s.begin();
            auto e = s.end();
            while(b < e){
                --e;
                swap(*b, *e);
                ++b;
            }
        }
};

// test 

int main()
{
    Solution *sol = new Solution;
    vector<char> c1{'a', 'd', 'r', 'g', 'z', 'p'};
    sol->reverseString(c1);
    for(auto i: c1){
        cout << i << endl;
    }
    return 0;
}
