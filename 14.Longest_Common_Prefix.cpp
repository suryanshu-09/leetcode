class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      sort(strs.begin(), strs.end());
      string prefix = "";
      int k = 0;
      for(auto letter: strs[0] ){
        if(letter == strs[strs.size() - 1][k++]){
          prefix += letter;
        }else{
          return prefix;
        }
      }
      return prefix;
    }
};
