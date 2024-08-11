class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int> input_map;
       for(int i = 0; i < nums.size(); i++){
         if(input_map.find(target - nums[i]) != input_map.end())
           return {input_map[target-nums[i]],i};
         else
           input_map[nums[i]] = i;
       }
       return {-1, -1};
    }
};
