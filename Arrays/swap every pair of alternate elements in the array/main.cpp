void swapAlternate(int arr[], int size){
    for(int i=1;i<size;i=i+2){
        swap(arr[i],arr[i-1]);
    }    
}