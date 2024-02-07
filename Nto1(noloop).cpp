
void print(int x){

    if(x<=0){
        return;
    }
 
    cout<<x<<" ";
    
    print(x-1);
  
    

}

vector<int> printNos(int x) {
    // Write Your Code Here
      print(x);
      return{};
    

}
