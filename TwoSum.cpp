class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a hash map to store the numbers and their indices
        unordered_map<int, int> numToIndex;
        // Iterate through the list of numbers
        for (int i = 0; i < nums.size(); ++i) {
            int needed = target - nums[i];
            // Check if the needed number is already in the hash map
            if (numToIndex.find(needed) != numToIndex.end()) {
                // If it is, return the indices of the needed number and the current number
                return {numToIndex[needed], i};
            }
            // If not, add the current number and its index to the hash map
            numToIndex[nums[i]] = i;
        }
        // If no solution is found, return an empty vector
        return {};
    }
};