#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {
     int i = 0 ,j = 0 ;
    for(i = 0 ; i < numsSize ; i ++){
        for(j = i+1; j < numsSize;j++){
            if(nums[i] == nums[j])  return true;
        }
    }
    return false;
}