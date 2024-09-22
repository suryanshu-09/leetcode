class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       set<vector<int>> output_set;
       vector<vector<int>> output_vec;
       sort(nums.begin(), nums.end());
       for(int i = 0; i < nums.size() - 1; ++i){
         for(int j = i + 1; j < nums.size(); ++j){
           int left = j + 1;
           int right = nums.size() - 1;
           while(left < right){
             long long sum = nums[i];
             sum += nums[j];
             sum += nums[left];
             sum += nums[right];
             if(sum == target){
               output_set.insert({nums[i], nums[j], nums[left++], nums[right--]});
             }else if(sum > target){
               --right;
             }else if(sum < target){
               ++left;
             }
           }
         }
       }
       for(auto sol: output_set){
          output_vec.push_back(sol);
       }
       return output_vec;
    }
};
