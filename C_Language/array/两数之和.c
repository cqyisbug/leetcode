int* twoSum(int* nums, int numsSize, int target) {
    int *result = (int *)malloc(2*sizeof(int));
    int index = 0 ;
    for (index = 0 ; index < numsSize ; index ++){
        int dv = target - *(nums+index);
        int j = 0 ;
        for(j = index+1 ; j<numsSize ; j++){
            if(*(nums+j) == dv){
                result[0] = index;
                result[1] = j;
                goto end;
            }
        }
    }
end:
    return result;
}