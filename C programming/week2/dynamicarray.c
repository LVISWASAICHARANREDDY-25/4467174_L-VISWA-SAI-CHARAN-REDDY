int* dynamicArray(int n, int queries_rows, int queries_columns, int** queries, int* result_count) {
    int** seqList=malloc(n*sizeof(int*));
    int* seqSizes=calloc(n,sizeof(int));
    int* seqCap=calloc(n,sizeof(int));
    for (int i=0;i<n;i++){
        seqList[i]=NULL;
        seqSizes[i]=0;
        seqCap[i]=0;
    }
    int* results =malloc(queries_rows * sizeof(int));
    *result_count=0;
    int lastAnswer=0;
    for(int i=0;i<queries_rows;i++){
        int type=queries[i][0];
        int x=queries[i][1];
        int y=queries[i][2];
        int idx=(x^lastAnswer)%n;
        if(type==1){
            if(seqSizes[idx]==seqCap[idx]){
                seqCap[idx]=seqCap[idx]==0?2:seqCap[idx]*2;
                seqList[idx]=realloc(seqList[idx],seqCap[idx]*sizeof(int));
            }
            seqList[idx][seqSizes[idx]++]=y;
        }
        else if (type==2) {
            int pos =y%seqSizes[idx];
            lastAnswer=seqList[idx][pos];
            results[(*result_count)++]=lastAnswer;
        
        }
    }
    free(seqSizes);
    free(seqCap);
    free(seqList);
    
    return results;

}
