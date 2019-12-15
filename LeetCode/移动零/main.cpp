#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {


        int cnt = 0;

        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != 0)
            {
                nums[cnt++] = nums[i];
            }
        }
        for (int i = cnt; i < nums.size(); ++i)
            nums[i] = 0;
    }
};


int main()
{
    int b[] = {0,1,0,3,12,11,5};
    int len = sizeof(b) / sizeof(int);
    vector<int> a(b, b + len);
    Solution c;
    c.moveZeroes(a);

    for(unsigned int i=0; i < a.size(); i++)
        cout<<a[i]<<" " ;
    return 0;
}
