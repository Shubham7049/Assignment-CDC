#unclude<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
          //prefix sum
            nums[i]=nums[i]+nums[i-1];
        }
        return nums;
    }
};

int main()
{
Solution s;
  int n;
cin>>n;
vector<int> nums(n);
for(int i=0;i<n;i++)
{
   cin>>nums[i];
}
   s.runningSum(nums)

     for(int i=0;i<n;i++)
     {
       cout<<nums[i]<<" ";
return 0;
}
