int fibonacci(int N){
   
   // Base Condition.
   if(N == 1)
   {
       return 0;
   }
   if(N==2){
       return 1;
   }

   // Problem broken down into 2 functional calls
   // and their results combined and returned.
    

   
   return fibonacci(N-1) + fibonacci(N-2);

}
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
   vector<int> ans;
    for (int i = 1; i <= n; ++i) {
        ans.push_back(fibonacci(i));
    }
    return ans;
}


