// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    int p2 = 1, p3 = 1, p5 =1;
	    ull dp[n+1];
	    dp[1] = 1;
	    for(int i=2;i<=n;++i){
	        ull val2 = dp[p2]*2;
	        ull val3 = dp[p3]*3;
	        ull val5 = dp[p5]*5;
	        ull minn = min(val2, min(val3,val5));
	        dp[i] = minn;
	        
	        if(minn == val2)
	            p2++;
	        if(minn == val3)
	            p3++;
	        if(minn == val5)
	            p5++;
	        
	    }
	    return dp[n];
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
