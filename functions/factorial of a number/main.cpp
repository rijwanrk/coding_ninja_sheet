int permutation(int n, int r) {
    //Write your code here
    if(r>n){
        return -1;
    }
    int p;
    int nomi =1;
    for(int i=1;i<=n;i++){
        nomi=nomi * i;
    }
    int deno= 1;
    for(int i=1;i<=n-r;i++){
        deno = deno * i;
    }
    p = nomi/deno;
    return p;
}
