class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.length(), m = str2.length();
        
        if(n>m){
            for(int i=0;i<n;++i){
                if(str1[i] != str2[i%m])
                    return "";
            }
        } else{
            for(int i=0;i<m;++i){
                if(str1[i%n] != str2[i])
                    return "";
            }
        }
        
        int g = __gcd(n,m);
        return str1.substr(0,g);        
    }
};
