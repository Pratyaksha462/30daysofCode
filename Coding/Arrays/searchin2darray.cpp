	
int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	   	
int i=0;
	 int j=M-1;
	 int sum=0;
	 
	 while(i<N && j>=0)
	 {
	     if(mat[i][j]<X)
	     {
	         i++;
	     }
	     else if(mat[i][j]>X)
	     {
	         j--;
	     }
	     else
	     {
	         for(int h=j;i>=0;h--)
	         {
	             if(mat[i][h]==X)
	             {
	                 return 1;
	             }
	         }
	     }
	 }
	 return 0;
	}
