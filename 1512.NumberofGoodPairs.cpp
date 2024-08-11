class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      vector<int>::iterator i;
      vector<int>::iterator j;
      int count = 0;
      i = nums.begin();
      while(i != nums.end()){
        j = i+1;
        while(j != nums.end()){
          if(*i == *j){
            count++;
          }
          j++;
        }
        i++;
    }
    return count; 
  }
};
