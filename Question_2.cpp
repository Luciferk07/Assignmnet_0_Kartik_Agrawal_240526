void reverseArray(vector<int> &arr , int m) {
  int n= arr.size(); int a=m;
   vector<int> ans(n);  
   for(int i=0; i<=m; i++) ans[i]= arr[i];
   for(int i=n-1; i>m; i--) ans[++a]= arr[i];
   arr= ans;
       	
}
