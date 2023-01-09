//Find the element that appears once in sorted array
 int findOnce(int arr[], int n)
    {
        //code here.
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1])
            return arr[mid];
            if(mid%2==0)
            {
                if(arr[mid+1]==arr[mid])
                {
                    i=mid+2;
                }
                else
                j=mid;
            }
            else
            {
                if(arr[mid]==arr[mid-1])
                {
                    i=mid+1;
                }
                else
                j=mid-1;
                
            }
            
        }
    }
