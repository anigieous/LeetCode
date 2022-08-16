int solve(vector<int>& nums1, vector<int>& nums2){
int ans = 0;
for(int i = 0; i < nums1.size(); i++){
int max_len = 0;
int j = 0;
while(j < nums2.size() && i+j < nums1.size()){
int len = 0;
while(j < nums2.size() && i+j < nums1.size() && nums1[i+j] != nums2[j]){
j++;
}
while(j < nums2.size() && i+j < nums1.size() && nums1[i+j] == nums2[j]){
j++;
len++;
}
max_len = max(max_len, len);
}
ans = max(ans, max_len);
}
return ans;
}