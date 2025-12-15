class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       //pattern 
       //if prefix sum of any index equals to its suffix sum then return that index  
       int n=nums.size();
      vector<int> prefixSum(nums.size());
      prefixSum[0]=nums[0];
      for(int i=1;i<nums.size();i++)
      {
          prefixSum[i]=prefixSum[i-1]+nums[i];
      }
       vector<int> suffixSum(nums.size());
      suffixSum[n-1]=nums[n-1];
      for(int j=n-2;j>=0;j--)
     {
          suffixSum[j]=suffixSum[j+1]+nums[j];
      }
      int index=-1;

       for(int i=0;i<n;i++)
       {
        if(prefixSum[i]==suffixSum[i])
        {
            
           index=i;
            break;

        }
       }
       return index;

       
    }
};
