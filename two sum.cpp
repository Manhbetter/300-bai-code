/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vt1;
        unordered_map<int, int> umap;
        for(int i = 0; i< nums.size(); i++){
            const int num = nums[i];
            if(umap.find(target-num) == umap.end()) {}
            else {
                vt1.push_back(i);
                vt1.push_back(umap[target-num]);
                return vt1;
            }
            umap[num] = i;
        }
        return vt1;
    }
}; 
