void rotate(int* nums, int numsSize, int k) {
    k = k>numsSize ? k%numsSize :k;
	if (k==0){
        return ;
    }else if(k == -1){
		int i = 0 ,j = numsSize -1;
		for (i = 0 ;i < j ; )
		{
            // printf("i:%d j:%d\n",i,j);
			// nums[j] = nums[i] ^ nums[j];
			// nums[i] = nums[i] ^ nums[j];
			// nums[j] = nums[i] ^ nums[j];
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            i++;j--;
		}
	}else {
		rotate(nums,numsSize - k ,-1);
		rotate(nums+numsSize - k, k,-1);
		rotate(nums,numsSize,-1);
	}
}