 void rotate(vector<int>& nums, int k) {
      int n=nums.size();
      vector<int>v1(n);
      k=k%n;
      reverse(nums.begin(),nums.end());
      int i=0;
      int j=k-1;
      while(i<j)
      {
          swap(nums[i],nums[j]);
          i++;
          j--;

      }
      int i1=k;
      int j1=n-1;
      while(i1<j1)
      {
          swap(nums[i1],nums[j1]);
          i1++;
          j1--;
      }

 }
