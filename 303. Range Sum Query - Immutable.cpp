class NumArray {
    int* dp;
public:
    NumArray(vector<int>& nums) {
        if(nums.size()==0)
            return;
        dp=new int[nums.size()]{0};
        dp[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            dp[i]=dp[i-1]+nums[i];
    }

    int sumRange(int i, int j) {
        if(i>0)
            return dp[j]-dp[i-1];
        else
            return dp[j];
    }
};