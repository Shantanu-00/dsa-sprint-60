class Solution{

public: 
string sortcharacterfrequency(string& s){
    int n = s.size();
    unordered_map<char,int> mpp;
    for(auto ch:s){
        mpp[ch]++;
    }
    vector<vector<char>> bucket(n+1);
    for(auto it:mpp){
        bucket[it.second].push_back(it.first);
    }
    string result;
    for(int i=n;i>0;--i){
        for(auto a:bucket[i]){
            result.append(i,a);
        }
    }
    return result;
}
};