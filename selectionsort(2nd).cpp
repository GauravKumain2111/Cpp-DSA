void selectionSort(vector<int>&arr) {
    // Write your code here.

    for(int i =0;i<arr.size()-1;i++){
        int min_index = i;
        for(int j =i;j<arr.size();j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
            swap(arr[i],arr[min_index]);
    }
    for(int i =0;i<arr.size();i++){
        cout<<arr[i];
         
    }
}
