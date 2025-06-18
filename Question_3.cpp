#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{   int n= s.size(); string final;
for(int i=0; i<n; i++){
    if(s[i]>='A'&&s[i]<='Z') final+=(s[i]+32);
    if(s[i]>='0'&&s[i]<='9') final+=s[i];
    if(s[i]>='a'&&s[i]<='z') final+=s[i];
}

for(int i=0; i<final.size()/2; i++){
  if(final[i]!=final[final.size()-i-1]) return false;
}
  return true;
}
