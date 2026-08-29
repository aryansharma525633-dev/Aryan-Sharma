class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int right = n-1 , left = 0;
        vector<pair<int,int>>ans;
        for (int i=0;i<n;i++) {
            ans.push_back({nums[i] , i});
        }
        sort(ans.begin() , ans.end());

        while (left < right) {
             int sum = ans[left].first + ans[right].first;
             if (sum == target) {
                return {ans[left].second,ans[right].second};
             }
             else if (sum <target) {
                left++;
             }
             else {
                right--;
             }
        }
        return {-1,-1};
    }
};