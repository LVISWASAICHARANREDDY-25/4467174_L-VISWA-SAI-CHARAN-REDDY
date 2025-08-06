int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int sum1=0,sum2=0,result=0;
    for(int i=0;i<arr_rows;i++){
        sum1+=arr[i][i];
        sum2+=arr[i][arr_columns-1-i];    
    }
    result=sum1-sum2;
    
    return abs(result);
}
