int ans=INT_MAX;
sort(nums.begin(),nums.end());
for(int i=0;i+k-1<nums.size();i++) ans=min(ans,nums[i+k-1]-nums[i]);
return ans;