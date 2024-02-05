void print(int count,int x){
    if(count>x){
        return;
    }
    cout<<count<<" ";
    count++;
    print(count,x);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    print(1,x);
    return {};
}
