class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int> ans(size,1);
        
        int curleft =1;
        for(int i=0;i<size;i++) {
            ans[i] = curleft;
            curleft *= nums[i];
            
        }
        int curright=1;
        for(int i=size-1;i>=0;i--) {
            ans[i] *=curright;
            curright *=nums[i];

        }
        
            
        return ans;
    }
};