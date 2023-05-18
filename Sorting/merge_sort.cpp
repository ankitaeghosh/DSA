void merge(int arr[], int l, int m, int r){
    vector<int> temp;
    int i = l, j = m+1;
    while(i<= l && j<= r){
        if(arr[i] <= arr[j]) temp.push_back(i++);
        else temp.push_back(j++);
    }
    while(i<=l){
        temp.push_back(i++);
    }
    while(j<=r){
        temp.push_back(j++);
    }
    for(int k = l; k<= r; k++){
        arr[k] = temp[k-l];
    }
}

void mergeSort(int arr[], int l, int r){
    if(l >= r) return;
    m = l+ ((r-l)/2);
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    merge(arr, l, m, r);
}