// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here
        char min ='1';
        int n = S.length();
        string res;
        int start;
        if(S[0] == 'I'){
            res += "12";
            min = '3';
            start = 1;
        }
        else if(S[0] == 'D'){
            res += "21";
            min = '3';
            start = 0;
        }
        for(int i=1;i<n;++i){
            if(S[i]=='I'){
                res += min;
                min++;
                start = i+1;
            }
            else if(S[i]=='D' ){
                res+=res[i];
                for(int k = start;k<=i;++k){
                    res[k]++;
                }
                min++;
            }
            
        }
        return res;
        
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
