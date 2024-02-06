void print(int i ,int n ){
	
	if (n==0 || i>n ||n<0){
		return;
	}
	
	cout<<"Coding Ninjas ";
	
	i++;
	print(i,n);

}

vector<string> printNTimes(int n) {
	// Write your code here.
	
	print(1,n);
	  return {}; 

}
