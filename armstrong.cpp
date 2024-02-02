bool checkArmstrong(int n){
	//Write your code here
	int numDigits = 0;
	int temp =n;
	 while (temp != 0) {
        temp = temp / 10;
        numDigits++;
    }
	int a = n;
	int ans = 0;
	while(n!=0){
		int rem = n%10;
		ans = ans+pow(rem,numDigits);
		n=n/10;
	}
	if(ans==a){
		return true;
	}
	else{
		return false;
	}
}
