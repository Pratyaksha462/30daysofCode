 void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {
            int q=partition(arr,low,high);
            quickSort(arr,low,q-1);
            quickSort(arr,q+1,high);
        }
    }
    
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[low];
       int i=low;
       int j=high;
       while(i<j)
       {
           while(pivot>=arr[i] && i<high)
           {
               i++;
           }
           while(pivot<arr[j] && j>=low)
           {
               j--;
           }
           if(i<j){
           swap(arr[i],arr[j]);
           }
           
       }
       swap(arr[j],arr[low]);
    
       
       return j;
       
       
    }
    
};
