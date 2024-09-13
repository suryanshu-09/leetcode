class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector <int>> output;
        sort(nums.begin(), nums.end());
        set<vector<int>> my_set;
        for(int i = 0; i < nums.size(); ++i){
          int left = i + 1;
          int right = nums.size() - 1;
          while(left < right){
            int sum = nums[i] + nums[left] + nums[right];
            if(sum == 0){
              my_set.insert({nums[i], nums[left], nums[right]});
              ++left;
              --right;
            }else if(sum > 0){
              --right;
            }else{
              ++left;
            }
          }
        }
        for(auto out : my_set){
          output.push_back(out);
        }
        return output;
    }
};
