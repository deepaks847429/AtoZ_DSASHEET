void sortZeroesAndOne(int input[], int size)
{
    //Write your code here
    int low=0;
    int high=0;
    while (size >= high) {
      if (input[high] == 0) {
          swap(input[low], input[high]);
          low++;
          high++;
      } else if (input[high] == 1) {
          high++;
      }
    }
}