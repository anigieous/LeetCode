class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int avg;
        int i, n = nums.size();
        int sum = 0;
        for(i = 0;i < k;i++){
            sum += nums[i]; 
        }
        avg = sum;
        
        for(;i<n;++i){
            sum = sum - nums[i-k] + nums[i];
            if(avg < sum)
                avg = sum;
        }
        return (double)avg/k;
    }
};