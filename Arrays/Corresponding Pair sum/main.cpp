void correspondingPairSum(int arr[],int n,int output[]){
    //Write your code here
    int idx = 0;
    for(int i=0;i<n;i++){
        int sum = arr[i]+arr[n-1-i];
        output[idx] = sum;
        idx++;
    }
}