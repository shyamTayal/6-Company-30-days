class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minlen = n;
        int sum = 0, start = -1,i;
        for(i=0;i<n;++i){
            sum += nums[i];
            if(sum >= target)
                minlen = min(minlen, i-start);
            while(sum-nums[start+1] >= target && start+1 < i){
                sum -= nums[++start];
                minlen = min(minlen, i-start);
            }
        }
        if(minlen == n && sum < target)
            return 0;
        return minlen;
    }
};
