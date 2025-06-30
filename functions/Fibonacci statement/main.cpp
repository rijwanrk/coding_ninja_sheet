bool checkMember(int n){
  int start =0;
  int end = 1;
  int sum =0;
  while(sum<=n){
    if(sum==n){
      return true;
    }
    sum = start +end;
    start = end;
    end = sum;

  }
  return false;
}