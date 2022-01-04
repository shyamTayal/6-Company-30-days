// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        int sum = 0;
        for(auto e : nums)
            sum += e;
        int n = nums.size();
        if(sum%k != 0 || n%2 != 0)
            return false;
        int count[k];
        memset(count, 0, sizeof(count));
        for(int i=0;i<nums.size();++i){
            count[nums[i]%k]++;
        }
        if(count[0]%2 != 0)
            return false;
        for(int i=1;i<=k/2;++i){
            if(count[i] != count[k-i])
                return false;
        }
        if(k%2 == 0){
            if(count[k/2]%2 != 0)
                return false;
        }
        
        return true;
        
        
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends
