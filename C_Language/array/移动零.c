
void moveZeroes(int* nums, int numsSize) {
    int i = 0 ,zeroSize = 0 ;
    for(i =0 ; i < numsSize ; i ++){
        if(nums[i] == 0) zeroSize++;
        else{
            nums[i-zeroSize] = nums[i];
        }
    }
    for(i = 0 ; i < zeroSize ; i++){
        nums[numsSize-i -1] = 0;
    }
}