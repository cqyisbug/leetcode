int cmp(const void *a ,const void *b){
	return *(int *) a - *(int *)b;
}

int singleNumber(int* nums, int numsSize) {
	if(numsSize == 1) return nums[0];
    qsort(nums,numsSize,sizeof(int),cmp);
    int i = 0 ,result = 0;
    for(i = 0 ; i < numsSize ;  ){
    	if(i == numsSize -1){
    		return nums[i];
    	}
    	if(nums[i] == nums[i+1]){
    		i+=2;
    	}else{
    		result = nums[i];
            break;
    	}
    }
    return result;
}
