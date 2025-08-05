void miniMaxSum(int arr_count, int* arr) {
    long total_sum=0;
    int min=*arr;
    int max=*arr;
    
    for (int i=0; i<arr_count; i++) {
        int value=*(arr+i);
        total_sum+=value;
        if (value>max){
            max=value;
        }
        else if (value<min){
            min=value;
        }
    }
    long max_sum=total_sum-min;
    long min_sum=total_sum-max;
    
    printf("%ld \n",min_sum);
    printf("%ld \n",max_sum);
}
