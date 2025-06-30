bool checkArmstrong(int n){
	//Write your code here
	int count = 0;
	int temp = n;
	while(n>0){
		n = n/10;
		count++;
	}
	int ans = 0;
	n=temp;
	while(n>0){
		int rem = n%10;
		int product = 1;
		for(int i =1;i<=count;i++){
			product = product * rem;
		}
		ans = ans+ product;
		n=n/10;
	}
	if(temp==ans){
		return true;
	}else{
		return false;
	}
}
