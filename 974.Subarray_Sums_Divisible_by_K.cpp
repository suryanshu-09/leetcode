/*class Solution {*/
/*public:*/
/*  int subarraysDivByK(vector<int>& nums, int k) {*/
/*    int sum = 0;*/
/*    int rem = 0;*/
/*    int ans = 0;*/
/*    map<int, int> my_map;*/
/*    my_map[0] = 1;*/
/*    for(int i = 0; i < nums.size(); i++){*/
/*      sum += nums[i];*/
/*      rem = (sum % k + k) % k;*/
/*      if(my_map.find(rem) != my_map.end())*/
/*        ans += my_map[rem]++;*/
/*      else*/
/*        my_map[rem] = 1;*/
/*    }*/
/*    return ans;*/
/*  }*/
/*};*/
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int K) {
        vector<int> count(K);
        count[0] = 1;
        int prefix = 0, res = 0;
        for (int a : nums) {
            prefix = (prefix + a % K + K) % K;
            res += count[prefix]++;
        }
        return res;
    }
};
