void plusMinus(int arr_count, int* arr) {
    
    int posratio=0,negratio=0,zero=0;
     
    for (int i=0; i<arr_count; i++) {
        if (*(arr+i) >0){
            posratio++;
        } else if (*(arr+i) <0) {
            negratio++;
        } 
        else {
            zero++;
            }
    }
    printf("%.6f\n",(float)posratio/arr_count);
    printf("%.6f\n",(float)negratio/arr_count);
    printf("%.6f\n",(float)zero/arr_count);
}
