class Solution {
public:
    string longestPalindrome(string s) {
        int start=0,maxlen=0;
        int n = s.size();
        for(int i =0;i<n;++i){
            expand(s,i,i,start,maxlen);
            expand(s,i,i+1,start,maxlen);
        }
        return s.substr(start,maxlen);
    }
    private:
        void expand( const string& s,int l, int r,int& start, int& maxlen){
            while(l>=0 && r<s.size()&&s[l]==s[r]){
                int len=r-l+1;
                if(len>maxlen){
                    start=l;
                    maxlen=len;
                }
                l--;
                r++;
           }
    }
};
