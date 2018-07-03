void swap(int *a ,int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int get_point_by_xy(int x ,int y ,int dev){
	return x+y*dev;
}

void rotate(int** matrix, int matrixRowSize, int *matrixColSizes) {

	int i = 0 , j = 0 ;
	for( i = 0 ; i < matrixRowSize/2 ; i++){
		for(j = 0 ; j < matrixRowSize ; j++){
			swap(*matrix+i+j*matrixRowSize,*matrix+matrixRowSize-1-i+j*matrixRowSize);
		}
	}

	for(i = 2-matrixRowSize ; i < matrixRowSize -2 ; i ++){
		if( i < 0 ){
			for(j = 0 ; j < (matrixRowSize + i)/2 ; j++){
				swap(
						*matrix+get_point_by_xy(j,j-i,matrixRowSize),
						*matrix+get_point_by_xy(matrixRowSize -1 -j ,matrixRowSize -1-j-i,matrixRowSize)
					);
			}
		}else if (i > 0){
			for(j = 0 ; j < (matrixRowSize -i)/2;j++){
					swap(
						*matrix+get_point_by_xy(i+j,j,matrixRowSize),
						*matrix+get_point_by_xy(matrixRowSize -1-j,matrixRowSize -1 + i -j ,matrixRowSize)
					);
			}
		}else{
			for(j = 0 ; j < matrixRowSize/2 ; j ++){
				swap( 
				*matrix + get_point_by_xy(j , j, matrixRowSize),
				*matrix + get_point_by_xy(matrixRowSize-j-1 , matrixRowSize-j-1 , matrixRowSize) 
				);
			}

		}
	}
}