// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:

    void swap(int arr[], int i, int j){
        int c = arr[i];
        arr[i] = arr[j];
        arr[j] = c;
    }
    int *findTwoElement(int *arr, int n) {
        // code here
        int res[2] = {0,0};
        for(int i=0;i<n;++i){
            if(arr[i]-1 != i){
                if(arr[abs(arr[i])-1] != arr[i]){
                    swap(arr, i, arr[i]-1);
                    i--;
                }
                else{
                    res[0]=arr[i];
                    res[1]=i+1;
                    break;
                }
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends
