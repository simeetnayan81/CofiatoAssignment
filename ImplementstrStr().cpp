class Solution {
public:
    int strStr(string haystack, string needle) {
        int l=needle.length();
        if(l==0) return 0;
        for(int i=0; i<=(int)haystack.length()-l; i++){
            cout<<haystack.length()-l;
            if(needle==haystack.substr(i, l))
                return i;
        }
        return -1;
    }
};
