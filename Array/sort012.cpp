void sort012(int *arr, int){
    int low=0;
    int mid=0;
    int high=n-1;
    while(high>=mid){
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}