int lonelyinteger(int a_count, int* a) {
    int unique=0;
    for( int i=0;i<a_count;i++){
        unique^=a[i];
    }
    return unique;
}
