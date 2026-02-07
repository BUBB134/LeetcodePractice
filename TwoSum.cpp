class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex;
        for (int i = 0; i < nums.size(); ++i) {
            int needed = target - nums[i];
            if (numToIndex.find(needed) != numToIndex.end()) {
                return {numToIndex[needed], i};
            }
            numToIndex[nums[i]] = i;
        }
        return {};
    }
};