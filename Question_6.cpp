long long getTrappedWater(long long* arr, int n) {
   long long int ans=0; vector<int> l(n), r(n);
   l[0]=arr[0]; r[n-1]= arr[n-1];
   for(int i=1; i<n; i++)
   if(arr[i]>l[i-1]) l[i]= arr[i];
   else l[i]=l[i-1];

   for(int i=n-2; i>=0; i--)
   if(arr[i]>r[i+1]) r[i]=arr[i];
   else r[i]= r[i+1];
   
   for(int i=0; i<n; i++) ans+=min(l[i],r[i])-arr[i];
   return ans;
   
}
