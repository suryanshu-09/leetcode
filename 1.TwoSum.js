/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
  for (let i = 0; i < nums.length; i++) {
    let toFind = nums.indexOf(target - nums[i]);
    if (toFind != -1 && toFind != i) {
      return [i, toFind]
    }
  }
  return null;
};
