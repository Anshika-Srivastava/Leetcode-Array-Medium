class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int sum, n=nums.size();
        if(n==0)
            return {};
        sort(nums.begin(),nums.end());
        int j,k;
        for(int i=0;i<n-2;i++){
            if(i==0 || nums[i]!=nums[i-1]){
                j=i+1;k=n-1;
                while(j<k){
                    sum=nums[i]+nums[j]+nums[k];
                    if(sum>0)
                        k--;
                    else if(sum<0)
                        j++;
                    else
                    {
                        res.push_back({nums[i],nums[j],nums[k]});
                        
                        while(j<k && nums[j]==nums[j+1])j++; 
                        while(j<k && nums[k]==nums[k-1])k--;
                        k--;
                        j++;
                    }
                }
            }
        }
        return res;
    }
};
