class Solution {
public:
    vector<int> countBits(int n) {
        int x = 1;
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int count = 0;
            int j = i;
            while(j != 0){
                if(j & x == 1){
                    ++count;
                }
                j = j >> 1;
            }
            ans.push_back(count);
        }
        return ans;
    }
};