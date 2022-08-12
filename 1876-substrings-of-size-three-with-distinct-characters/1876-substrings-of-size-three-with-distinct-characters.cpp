class Solution {
public:
    int countGoodSubstrings(string s) {
        int res = 0;
        if(s.length() < 3){
            return 0;
        }
        for(int i=0;i<s.length()-3+1;i++){
            string st = s.substr(i,3);
            cout<<st<<" : ";
            if(st[0] != st[1] && st[0] != st[2] && st[1] != st[2]){
                res++;
            }
        }
        return res;
    }
};