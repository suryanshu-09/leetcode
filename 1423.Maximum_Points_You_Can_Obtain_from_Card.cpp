class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      /*int left = 0;*/
      /*int right = cardPoints.size() - 1;*/
      /*int cards_taken = 0;*/
      /*int sum = 0;*/
      /*if(k == cardPoints.size()){*/
      /*  return reduce(cardPoints.begin(), cardPoints.end());*/
      /*}*/
      /*while(cards_taken < k && left < right){*/
      /*  if(cardPoints[left] > cardPoints[right]){*/
      /*    sum += cardPoints[left];*/
      /*    ++left;*/
      /*  }else{*/
      /*    sum += cardPoints[right];*/
      /*    --right;*/
      /*  }*/
      /*  ++cards_taken;*/
      /*}*/
      /*return sum;*/
      vector<int>::iterator left = cardPoints.begin();
      int window = cardPoints.size() - k;
      vector<int>::iterator right = left + window;
      int max_sum = reduce(cardPoints.begin(), cardPoints.end());
      int min_sum = reduce(left, right);
      while(right < cardPoints.end()){
        int this_sum = reduce(++left, ++right);
        min_sum = min(min_sum, this_sum);
      }
      return max_sum - min_sum;
    }
};
