class Solution {
public:
    int water(vector<int>& height, int left, int right){
      return min(height[left], height[right]) * (right - left);
    }
    int maxArea(vector<int>& height) {
       int left = 0;
       int right = height.size() - 1;
       int max_water = water(height, left, right);

       for(int i = 1; i < height.size() - 1; ++i){
         while(left < right){
           int new_water = water(height, left, right);
           if(new_water > max_water){
             max_water = new_water;
           }
           if(height[left] > height[right]){
             --right;
           }else{
             ++left;
           }
         }
       }
       return max_water;
    }
};
