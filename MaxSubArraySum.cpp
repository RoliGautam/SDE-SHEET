Question link : https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //kadane's algorithm...
        //take two variable sum and a maximum as first element of array..as given that atleast one element should be in subarray..
        
        int maxi = nums[0];
        int sum = 0;
        //traverse the array...
        for(int i = 0; i<nums.size(); i++){
           //add array elements in sum ..
            sum = sum+nums[i];
            //if our sum became greater than our maxi then update max...
            maxi = max(maxi,sum);
            //if in any case some became negative then update some as 0 because there in no mean to take negative some as it always decrease our subarray-sum...
            if(sum<0) sum = 0;
        }
        //return the maximum as maximum sum of our subarray...
        return maxi;
    }
};
