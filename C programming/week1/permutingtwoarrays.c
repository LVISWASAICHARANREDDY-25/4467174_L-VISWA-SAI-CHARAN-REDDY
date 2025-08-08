int compareAsc(const void*a,const void *b){
    return(*(int*)a-*(int*)b);
 }
 int compareDesc(const void *a,const void *b){
    return (*(int*)b-*(int*)a);
 }
char* twoArrays(int k, int A_count, int* A, int B_count, int* B) {
    qsort(A,A_count,sizeof(int),compareAsc);
    qsort(B,B_count,sizeof(int),compareDesc);
    for (int i=0 ;i<A_count;i++){
        if (A[i]+B[i]<k){
            return "NO";
        }

    }
    return "YES";

}
