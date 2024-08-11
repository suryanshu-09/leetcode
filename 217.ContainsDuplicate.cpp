class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_set<int> uno_set;
      for(int num: nums){
        if(uno_set.find(num) != uno_set.end()) return true;
        uno_set.insert(num);
      }
      return false;
    }
};
