long long solve(int n, vector<int> &a) {
    // Write your code here.
    long long sum = 0;
    for(int i=0;i<a.size();i++){
        sum = sum+a[i];
    }
    return sum;
}