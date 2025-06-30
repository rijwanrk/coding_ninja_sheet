bool print_composite(int n)
{
    //Write your code here
    if(n>3){
    for(int j=2;j<n;j++){
      if (n % j == 0) {
        return true;
        break;
      }
    }
    return false;
    }
    if(n==1 || n==2 || n==3){
        return false;
    }
}