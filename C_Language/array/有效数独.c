#include<stdbool.h>

bool hasDuplicateChar(char* c,int size){
	int i = 0 ; 
	int arr[] = {0,0,0,0,0,0,0,0,0,0};
	for( i = 0 ; i < size ; i++){
		if (c[i] == '.') continue;
		int c_int = (int)c[i] - 48;
		if(arr[c_int]!=0) return true;
		else
			arr[c_int] = 1;
	}
	return false;
}

bool isValidSudoku(char **board, int boardRowSize, int boardColSize)
{
	int i = 0 , j = 0 , k = 0 ;
	for( i = 0 ; i < 9 ; i++){
		char* tmp = (char*)malloc(9);
		// row
		for( j = 0 ; j < 9 ; j++){
			tmp[j] = *(*(board+i)+j);
		}
		if(hasDuplicateChar(tmp,9))
			return false;

		//col
		for(j = 0 ; j< 9 ; j++){
			tmp[j] = *(*(board+j)+i);
		}
		if(hasDuplicateChar(tmp,9))
			return false;

		//3 matrix
		for(j = 0 ; j < 9 ; j++){
			tmp[j] = *(*(board+(i/3)*3+j/3)+(i%3)*3+j%3);
		}
		if(hasDuplicateChar(tmp,9))
			return false;
	}
	return true;
}