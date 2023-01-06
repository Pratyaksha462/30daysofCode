void stockBuySell(int price[], int n)
{
    // code here
   
    int start = 0;
    int end = 0;
    int flag=0;

    
    for(int i=1;i<n;i++)
    {
        if(price[i-1]<=price[i] && price[i]!=price[start])
        {
            end++;
            flag=1;
        }
        else if(start==end)
        {
            
            start=i;
            end=i;
        }
        else
        {
            cout << "(" << start << " " << end << ") ";
            start=i;
            end=i;
        }
        if(start!=n-1 && end==n-1)
          cout << "(" << start << " " << end << ") ";

       
    }
    
    if (flag == 0){
        cout << "No Profit" << endl;
        return;
        
    }
    cout<<endl;
}
