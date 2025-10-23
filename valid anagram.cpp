class Solution {
public:
    bool isAnagram(string s, string t) {
        //checking if both strings have a sam eno of charaters
        if(s.length()!=t.length())
        return false;
    //now we need to check freq of characters

    unordered_map<char,int>freq;

    for(char c:s){
        freq[c]++;
    }

    for(char c:t){
        freq[c]--;
        if (freq[c]<0){
            return false;
        }
    }
    //all counts now should be zero
    return true;
    }
};
