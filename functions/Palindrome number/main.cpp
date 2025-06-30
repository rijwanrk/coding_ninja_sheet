bool palindrome(int n)
{
    // Write your code here
    int reverse  = 0;
    int temp = n;
    while(n>0){
        int rem = n%10;
        reverse = reverse *10 +rem;
        n=n/10; 
    }
    if(temp==reverse){
        return true;
    }else{
        return false;
    }
}