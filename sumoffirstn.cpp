long sum(long n){
    
    if(n==0){
        return 0;
    }

    return n+sum(n-1);
}

long long sumFirstN(long long n) {
    // Write your code here.
    return  sum(n);
}
