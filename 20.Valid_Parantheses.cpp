class Solution {
  public:
    bool isValid(string s) {
      stack<char> my_stack;
      map<char, char> my_hash{
          { '(' , ')' },
          { '{' , '}' },
          { '[' , ']' }
      };
      for(auto ch : s){
        switch (ch) {
          case '(':
          case '{':
          case '[':
            my_stack.push(ch);
            break;
          case ')':
          case ']':
          case '}':
            if(my_stack.size() < 1){
              return false;
            }else if(my_hash[my_stack.top()] == ch){
              my_stack.pop();
              break;
            }
            return false;
          default:
            break;
        }
      }
      return my_stack.empty();
    }
};
