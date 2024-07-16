int findunique(int *arr, int size) {
  for (int i = 0; i < size; i++) {
      bool isunique=true;
      for (int j = 0; j < size; j++) {
        if (i == j) {
            continue;
        }
        else{
            if (arr[i] == arr[j]) {
                isunique=false;
                break;
            }
        }
      }
      if (isunique) {
          return arr[i];
      }
  }
}