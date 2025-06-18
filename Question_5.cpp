string removeDuplicates(string str, int n)
{  string ans; int a[26];
   for(int i=0; i<26; i++) a[i]=0;
   for(int i=0; i<n; i++){
      a[str[i]-'a']++;
      if(a[str[i]-'a']<2) ans+=str[i];
   }
   return ans;
   
}
