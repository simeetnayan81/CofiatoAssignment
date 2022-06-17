class Solution {
public:
    string countAndSay(int p) {
        int n=1;
        string s;
        string res;
        int cv=1;
        string ans="1";
        while(1){
        s=ans;
        if(cv==p) return s;
        int cnt=1;
        ans="";
        for(int i=1; i<s.length(); i++){
            if(s[i]==s[i-1])
            cnt++;
            else{
                ans+=to_string(cnt)+s[i-1];
                cnt=1;
            }
        }
            ans+=to_string(cnt)+s[s.length()-1];
            cout<<ans<<endl;
            cv++;
        }
        return s;
    }
};
