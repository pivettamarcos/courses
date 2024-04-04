#include<stdio.h>
#include<stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int sum = 0;
    int* indices = (int*) malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            sum = nums[i] + nums[j];
            if(sum == target) {
                indices[0] = i; 
                indices[1] = j; 
            }
        }
    }
    
    return indices;
}

int main(void) {
    
    int nums[] = {2,7,11,15};
    int target = 9;
    size_t sizenums = sizeof(nums)/sizeof(nums[0]);
    int returnSize;
        
    int* indices = twoSum(nums, sizenums, target, &returnSize);
    
    for (int i = 0; i < returnSize; i++) {
        printf("%d\n", indices[i]);
    }
    
    free(indices);
    return 0;
}