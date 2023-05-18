void bubble(int arr[], int n){
    if(int i = n-1; i>=1; i--){
        int didSwap = 0;
        for(int j = 0; j <= i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
    }
}


//using recursion

void bubble(int arr[], int n){
    if (n==1) return;
    for(int j = 0; j <= n-2; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
    bubble(arr, n-1);
}