class Solution {
public:
    void sortColors(vector<int>& nums) {
       multiset<int> ms;
       for(int x: nums) ms.insert(x);
       nums.clear();
       for(int x: ms) nums.push_back(x);
    }
};
