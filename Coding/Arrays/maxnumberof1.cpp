 int findZeroes(int arr[], int n, int m) {
      
    int wL = 0, wR = 0; 
    int bestL = 0, bestWindow = 0; 
    int zeroCount = 0; 
    while (wR < n)
    {
        if (zeroCount <= m)
        {
            if (arr[wR] == 0)
              zeroCount++;
            wR++;
        }
        if (zeroCount > m)
        {
            if (arr[wL] == 0)
              zeroCount--;
            wL++;
        }

       
        if ((wR-wL > bestWindow) && (zeroCount<=m))
        {
            bestWindow = wR-wL;
            bestL = wL;
        }
    }
    return bestWindow;

    
    }  
};
