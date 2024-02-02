int calcGCD(int n, int m){
    // Write your code here.
   int got = 0;
   int min_ans = min(n,m);
   for(int i =1;i<=min_ans;i++){
       if(m%i==0 && n%i==0){
          got = i;
       }
          }
       return got;
}
