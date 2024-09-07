class Solution {
public:
    /*vector<int> findDuplicates(vector<int>& nums) {*/
    /*  unordered_set<int> uset;*/
    /*  vector<int> out;*/
    /*    for(auto num: nums){*/
    /*      if(uset.find(num) != uset.end()){*/
    /*        out.push_back(num);*/
    /*      }else{*/
    /*        uset.insert(num);*/
    /*      }*/
    /*    }*/
    /*return out;*/
    /*}*/
    vector<int> findDuplicates(vector<int>& nums){
      vector<int> out;
      for(auto num: nums){
        int x = abs(num);
        if(nums[x - 1] < 0){
          out.push_back(x);
        }
        nums[x - 1] *= -1;
      }
      return out;
    }
};
