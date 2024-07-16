void swap(int *arr, int n) {
    int i=0;
    int j=i+1;
    while (n > j) {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i=i+2;
        j=i+1;
    }
}