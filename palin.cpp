bool palindrome(int n)
{
    // Write your code here
    int rev = 0;
    int original = n;
    while(n!=0){
        int rem = n%10;
        rev = (rev*10)+rem;
        n = n/10;
    }
    if(rev == original){
        return true;
    }else{
        return false;
    }
}
