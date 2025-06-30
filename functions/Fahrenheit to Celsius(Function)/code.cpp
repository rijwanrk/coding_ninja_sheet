void printTable(int start, int end, int step) {

     while(start<=end){
        int c = (start-32)*5.0/9;
        cout<<start<<" "<<c<<endl;
        start = start+step;
    }
    
}
