class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        int frequency[26]={0};
        for (int i =0;i<s.size();++i){
            frequency[s[i]-'a']++;
            frequency[t[i]-'a']--;
        }
        for (auto ch:frequency){
            if (ch!=0)return false;
        }
        return true;
    }

};