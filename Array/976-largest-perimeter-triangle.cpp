class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int max_pari=0;
        for(int i=0;i<=nums.size()-3;i++){
            if(nums[i]+nums[i+1]>nums[i+2]){
                max_pari=max(max_pari,nums[i]+nums[i+1]+nums[i+2]);
            }
        }
        if(max_pari)return max_pari;
        else return 0;
    }
};