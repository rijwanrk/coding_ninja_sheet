int linearSearch(int arr[], int n, int val){
    for(int i=0;i<n;i++){
        if(val==arr[i]){
            return i;
        }
    }
    return -1;
}