int pairSum(int *input, int size, int x)
{
	//Write your code here
	int pairr=0;
        for (int i = 0; i < size; i++) {
			for(int j=i+1; j<size; j++){
                          if (input[i] + input[j] == x) {
							  pairr++;
                          }
                        }
        }
		return pairr;
}