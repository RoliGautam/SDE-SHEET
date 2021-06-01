class Solution {
public:
    void sortColors(vector<int>& nums) {
        int mid = 0, low = 0, high = nums.size()-1;
      while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[high], nums[mid]); 
                high--;
            }
         }      
    }
};


Time Complexity : O(n)
Space Complexity : O(1)
