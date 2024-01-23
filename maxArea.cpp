// LeetCode Problem #11 - Container with Most Water 

#include <vector>
class Solution {
public:
  int maxArea(vector<int>& height) {
      int result = 0;
      int left = 0;
      int right = height.size() - 1;

      while (left < right) {
        result = max(result, min(height[left], height[right]) * (right - left));
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return result;
  }
};
