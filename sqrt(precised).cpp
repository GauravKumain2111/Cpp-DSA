    #include<iostream>
    using namespace std;

    long sqprecision(int n,int precision,int tempsol){
        long factor = 1;
        double ans = tempsol;
        for(int i =0;i<precision;i++){
            factor = factor/10;
            for(double j = ans;j*j<n;j+=factor){
                ans = j;
            }
        }
        return ans;
    }
    int square(int x){
        int s = 0;
        int e = x-1;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            int sq = mid*mid;
            if(sq==x){
                return mid;
            }
            else if (sq>x){
                e = mid-1;
            }
            else{
                ans = mid;
                s=mid+1;
            }
            mid = s+ (e-s)/2;
        }
        return ans;
    }
    int main()
    {
        int n ;
        cin>>n;
    int  tempsol=square(n);
        cout << sqprecision(n,3,tempsol);
        return 0;
    }