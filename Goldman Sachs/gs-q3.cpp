// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod = 1;
        int res = 0;
        for(int j=0,i=0;i<n;++i){
            prod = (long long)(prod*a[i]);

            while(j < i && prod >= k)
                prod /= a[j++];

            if(prod < k){
                int len = i - j + 1;
                res += len;
            }
        }
        return res;
    }
};
// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends
