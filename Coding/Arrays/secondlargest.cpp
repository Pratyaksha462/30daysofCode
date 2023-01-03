int print2largest(int arr[], int n) {
	    // code here
	    int largest=-1;
	    int secondl=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=largest)
	        {largest=arr[i]; }
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	         if(arr[i]>secondl && arr[i]!=largest)
	         secondl=arr[i];
	    }
	    return secondl;
	}
