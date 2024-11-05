#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[26];
  int ch;
  for(int i=0;i<26;i++)
      a[i]=0;
  string s;
  cin>>s;
  for(int i=0;i<s.size();i++)
  {
    int m=s[i]-'a';
    a[m]++;
  }
  int count=0;
  for(int i=0;i<26;i++)
  {
      if(a[i]%2 !=0)
      {
          count++;
      }
          
  }
  if (count<2)
      ch=1;
  else
      ch=0;
  if(ch==0)
  {
      cout<<"false"<<endl;
  }
  else
  {
      string front="",mid="",rear="";
      for(int i=0;i<26;i++)
      {
          if(a[i]%2 !=0)
          {
              char ch=i+'a';
              mid=mid+ch;
              a[i]--;
          }
      }
      for(int i=0;i<26;i++)
      {
          if(a[i]%2==0)
          {
              int k=a[i]/2;
              char g=i+'a';
              for(int j=0;j<k;j++)
              {
              
              front=front+g;
              rear=g+rear;
              }
          }
      }
  
  cout<<front+mid+rear<<endl;
   }
}
