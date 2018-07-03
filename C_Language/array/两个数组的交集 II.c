#include<stddef.h>
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    if(nums1Size == 0 || nums2Size == 0 ){
        *returnSize = 0 ;
        return NULL;
    }
    // int* c2 = (int*)malloc(sizeof(int)*nums2Size);
    char* c2 = (char*)malloc(sizeof(char)*nums2Size);
    // memset(c2,'0',sizeof(c2)*sizeof(int));
    
    int i = 0, j = 0 , guard = 0;
    
    for(i = 0 ; i < nums2Size; i++){
        c2[i] = '0';
    }
    
    for(i = 0 ; i < nums1Size; i ++){
        for(j = 0 ; j < nums2Size; j++){
            if(nums1[i] == nums2[j] && c2[j] == '0'){
                c2[j] = '1';
                guard++;
                break;
            }
        }
    }
    int *arr = (int*)malloc(sizeof(int)*guard);
    *returnSize = (int*)malloc(sizeof(int));
    *returnSize = guard;
    guard = 0 ;
    for(i = 0 ; i < nums2Size ; i++){
    	if(c2[i] == '1'){
    		arr[guard++] = nums2[i];
    	}
    }
    return arr;
}