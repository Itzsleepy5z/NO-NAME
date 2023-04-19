#include <bits/stdc++.h>
using namespace std;

void prh(int n)
{
   int m,k,a,b;
   m=(n+1)/2;  
   k=(n-1)/4;  
   a=(n-4*k+1)/2;
   for (int i = k;i>=1;i--)
   {
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << ".";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "\n" ;
   }
   for (int i = m;i>=1;i--)
   {
   b=m-i;
      for (int j = n;j>=1;j--) {
         if (j<=b xor j>n-b){
            cout << "." ;
         }else{
            cout << "#" ;
         }
      }
      cout << "\n" ;
   }
}

int main()
{
   int x;
   cin >> x;
   int la[x];
   for (int i = 0; i < x; i++)
   {
      cin >> la[i];
   }
   for (int i = 0; i < x; i++)
   {
      prh(la[i]);
   }
}
