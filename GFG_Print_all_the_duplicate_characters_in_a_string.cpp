#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
#include<climits>
#include<map>

class Solution{
  public:
    std::map<char, int> duplicateChars(std::string inp_str){
      std::map<char, int> output;
      for(auto letter : inp_str){
        output[letter]++;
      }
      return output;
    } 
};

int main() {
  std::string inp_str;
  std::cout << "Enter the string: ";
  std::cin >> inp_str;
  std::cin.ignore();

  Solution solution;
  std::map<char, int> sol = solution.duplicateChars(inp_str);
  for(const auto& [key, value] : sol){
    if(value == 1){
      continue;
    }
    std::cout << "[" << key << "] : " << value << std::endl;
  }

  return 0;
}
