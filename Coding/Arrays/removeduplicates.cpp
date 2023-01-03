//using two pointer approch is easier 
 int remove_duplicate(int a[],int n){
        // code here
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(a[j]!=a[i])
            {
                j++;
                a[j] = a[i];
                
                   
            }
        }
        return j+1;
    }
