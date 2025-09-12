class Solution {
public:
    string reverseWords(string s) {
        int n = s.size()-1;
        string result;
        while(n>=0){
            while(n>=0 && s[n]==' '){n--;}
            if (n<0){break;}
            int end=n;
            while(n>=0 && s[n]!=' '){n--;
            
            }
            int start=n+1;
            string word = s.substr(start,end-start+1);
            if(!result.empty()) result+=" ";
            result = result + word;


        }
        return result;
    }
};