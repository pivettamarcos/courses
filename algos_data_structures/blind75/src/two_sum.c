/*
 * 1. Two Sum
 *
 *  Easy
 *
 *  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 *  You may assume that each input would have exactly one solution, and you may not use the same element twice.
 *  You can return the answer in any order.
 *
 *  Example 1:
 *
 *  Input: nums = [2,7,11,15], target = 9
 *  Output: [0,1]
 *  Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 *  Example 2:
 *
 *  Input: nums = [3,2,4], target = 6
 *  Output: [1,2]
 *  Example 3:
 *
 *  Input: nums = [3,3], target = 6
 *  Output: [0,1]
 *   
 *  Constraints:
 *
 *  2 <= nums.length <= 104
 *  -109 <= nums[i] <= 109
 *  -109 <= target <= 109
 *  Only one valid answer exists.
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* createHashTable(int size){
  return (int*) malloc(size * sizeof(int));
}

unsigned int hash (int target, int number){
  return target - number;
}

void initHashTable(int* hashTable, int size){
  for (int i = 0; i < size; i++){
    hashTable[i] = -1;
  }
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
  // Create a hash table with hash fuction = target - x
  int* hashTable = createHashTable(target+1);
  initHashTable(hashTable, target);
  
  // O(n) time complexity and O(n) space complexity
  for (int i = 0; i < numsSize; i++) {
    if (nums[i] <= target) {
      int complementIndex = hashTable[hash(target, nums[i])];
      if (complementIndex != -1) { 
        *returnSize = 2;
        int* indices = (int*) malloc(*returnSize * sizeof(int));

        indices[1] = i;
        indices[0] = complementIndex; 
        
        free(hashTable);
        return indices;
      }
      hashTable[nums[i]] = i;
    }
  }
  *returnSize = 0;
  free(hashTable);

  /*  O(n^2) time complexity and O(1) space complexity
   *  for (int i = 0; i < numsSize; i++) {
   *    for (int j = i + 1; j < numsSize; j++) {
   *      sum = nums[i] + nums[j];
   *      if(sum == target) {
   *        indices[0] = i; 
   *        indices[1] = j; 
   *      }
   *    }
   *  }    
  */

  return NULL;
}

int main(void) {

  int nums[] = {3,2,4,7};
  int target = 7;
  size_t sizenums = sizeof(nums)/sizeof(nums[0]);
  int returnSize;

  int* indices = twoSum(nums, sizenums, target, &returnSize);
  printf("target %d\n", target);
  for (int i = 0; i < returnSize; i++) {
    printf("%d\n", indices[i]);
  }

  free(indices);
  return 0;
}
