/* Given an integer array nums sorted in non-decreasing order, return an array of the squares of each
number sorted in non-decreasing order.

Example 1:
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].

Example 2:
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

Constraints:
1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order. */

//My solution

//For sort, vector, and pow
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int i=0;i<nums.size();i++) {
            nums[i] = pow(nums[i],2);
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};

/* Follow up: Squaring each element and sorting the new array is very trivial, could you find an
O(n) solution using a different approach?

My answer:
We can see  that the array is already sorted in an incresing order, with negatives, then zeroes,
then positives. We can these into 3 separate parts. Then after squaring, we can approach the O(n)
time using a merge sort to insert from 2 sorted arrays. We can ignore the zeroes, which are placed at
the beginning of the final array.  */
