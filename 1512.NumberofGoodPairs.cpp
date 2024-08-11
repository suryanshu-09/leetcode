class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      int count = 0;
  for(int i = 0; i < nums.size(); i++){
    int subcount = 0;
    for(int j = 0; j < i; j++){
      if(nums[i] == nums[j])
        subcount++;
    }
    count += subcount;
  }
  return count;
    }
};
