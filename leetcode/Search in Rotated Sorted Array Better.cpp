class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left =0,right=nums.size()-1;
        
        while(left<=right){
            int mid = (left+right)/2;
            
            int midElement = nums[mid],curleft = nums[left],curright = nums[right]; 
            
            if(midElement == target) return mid;
            
            if(midElement>curright){
                if(target >=curleft && target<midElement) right =mid-1;
                else left = mid+1;
            }
            
            else if(midElement<curleft){
                if(target <=curright && target > midElement) left = mid +1;
                else right = mid -1;
                
            }
            else{
                if(target>midElement) left = mid+1;
                else right = mid-1;
            }
            
        }
        return -1;
    }
};