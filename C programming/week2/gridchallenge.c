char* gridChallenge(int grid_count, char** grid) {
    int n=grid_count;
    for(int i=0;i<n;i++){
        int len=strlen(grid[i]);
        for(int j=0;j<len-1;j++){
            for(int k=0;k<len-j-1;k++){
                if(grid[i][k]>grid[i][k+1]){
                    char temp=grid[i][k];
                    grid[i][k]=grid[i][k+1];
                    grid[i][k+1]=temp;
                }
            }
        }
    }
    for(int col=0;col<strlen(grid[0]);col++){
        for(int row=0;row<n-1;row++){
            if(grid[row][col]>grid[row+1][col]){
                static char no[]="NO";
                return no;
            }
        }
    }
    static char yes[]="YES";
    return yes;

}
