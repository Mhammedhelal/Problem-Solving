class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int size = min(word1.size(),word2.size());
        int i;
        for(i=0;i<size;i++) {
            res = res + word1[i] + word2[i];
        }
        if(word1.size()>word2.size()){
            for(;i<word1.size();i++)
                res = res + word1[i];
        }
        else if(word1.size()<word2.size()){
            for(;i<word2.size();i++)
                res = res + word2[i];
        }
        return res;
    }
};