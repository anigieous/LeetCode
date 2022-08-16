class Solution {
public:
    int helper(vector<int> nums1, vector<int> nums2){
        int ans = INT_MIN;
        for(int i=0;i<nums1.size();i++){
            int max_len = INT_MIN;
            int j=0;
            while(j<nums2.size() && i+j< nums1.size()){
                int total = 0;
                while(j<nums2.size() && i+j< nums1.size() && nums1[i+j]!= nums2[j]){
                    j++;
                }
                while(j<nums2.size() && i+j< nums1.size() && nums1[i+j]==nums2[j]){
                    j++;
                    total++;
                }
                max_len = max(max_len, total);
            }
            ans = max(ans, max_len);
        }
        return ans;
    }
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int ans = helper(nums1, nums2);
        ans = max(ans,helper(nums2, nums1));
        return ans;
    }
};