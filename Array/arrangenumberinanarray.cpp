void arrange(int *arr, int n) {
    int i=0;
    int j=n-1;
int number=1;
while (j >= i) {
      if (number % 2 == 0) {
          arr[j]=number;
          j--;
          number++;
      } else {
          arr[i]=number;
          i++;
          number++;
      }
}
}