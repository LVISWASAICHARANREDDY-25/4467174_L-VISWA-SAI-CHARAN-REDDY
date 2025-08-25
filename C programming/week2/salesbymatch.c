int sockMerchant(int n, int ar_count, int* ar) {
    int result=0;
    int count[200]={0};
    for (int i=0;i<n;i++)
    {
       count[ar[i]]++;
    }
    for (int i;i<101;i++){
        result+=count[i]/2;
    }
    return result;
}
