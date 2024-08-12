#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
#include<climits>

class Solution{
  public:
    int minDiff(std::vector<int>& nums, int m){
      if (m == 0 || nums.size() == 0 || nums.size() < m) return 0;

      std::sort(nums.begin(), nums.end());
      
      int min_diff = INT_MAX;

      for (int i = 0; i <= nums.size() - m; i++) {
        int diff = nums[i + m - 1] - nums[i];
        if (diff < min_diff) {
          min_diff = diff;
        }
      }
      return min_diff;
    }
};

int main() {
  int m;
  std::cout << "Enter the number of students: ";
  std::cin >> m;
  std::cin.ignore();

  std::vector<int> input_vector;
  std::string line;
  std::cout << "Enter the packets of chocolates: ";
  std::getline(std::cin, line);
  std::stringstream ss(line);
  int num;
  while(ss >> num){
    input_vector.push_back(num);
  }

  Solution solution;
  std::cout << "Minimum Difference is: " << solution.minDiff(input_vector, m) << std::endl;

  return 0;
}
