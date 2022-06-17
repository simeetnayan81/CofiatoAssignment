 
class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=needle.length();
        if(l==0) return 0;
        for(int i=0; i<=haystack.length()-l; i++){
            if(needle==haystack.substr(i, l))
                return i;
        }
        return -1;
    }
};
