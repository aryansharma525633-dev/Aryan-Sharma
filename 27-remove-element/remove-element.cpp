class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> ans;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                continue;
            }
            else {
                ans.push_back(nums[i]);
            }
        }

        int i = 0;

        for (int x : ans) {
            nums[i] = x;
            i++;
        }

        return i;
    }
};