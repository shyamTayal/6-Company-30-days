class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int left[n],right[n];
        left[0] = 1;
        right[n-1] = 1;
        for(int i=1;i<n;++i){
            if(arr[i] > arr[i-1]){
                left[i] = left[i-1]+1;
            }
            else{
                left[i] = 1;
            }
        }

        for(int i=n-2;i>=0;--i){
            if(arr[i] > arr[i+1])
                right[i] = right[i+1]+1;
            else
                right[i] = 1;
        }
        int maxx = 1;
        for(int i=0;i<n-1;++i){
            if(left[i] > left[i+1] && right[i] > right[i-1])
                maxx = max(maxx,left[i]+right[i+1]);
        }
        return (maxx >= 3)?maxx:0;
    }
};
