#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#include <iostream>

//THIS CODE MAKE BY OH DO NOT COPY IF USE FOR............... XD

//THIS IS HEARTH MAKER


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

void prhx(int n)
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
      cout << "x";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "x";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << ".";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << "x";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "x";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "\n" ;
   }
   for (int i = m;i>=1;i--)
   {
        b=m-i;
        for (int j = n+4;j>=1;j--) {
            if (j<=b+1 xor j>n-b+3){
                cout << "." ;
            }else if(j==b+2 xor j==n-b+3){
                cout << "x";
            }else{
                cout << "#" ;
            }
        }
        cout << "\n" ;
   }
}


void prhxy(int n)
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
      cout << "x*";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "*x";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << ".";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << "x*";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "*x";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "\n" ;
   }
   for (int i = m;i>=1;i--)
   {
        b=m-i;
        for (int j = n+6;j>=1;j--) {
            if (j<=b+2 xor j>n-b+4){
                cout << "." ;
            }else if(j==b+3){
                cout << "*x";
            }else if(j==n-b+4){
                cout << "x*";
            }else{
                cout << "#" ;
            }
        }
        cout << "\n" ;
   }
}

void prhxyz(int n)
{
   int m,k,a,b;
   m=(n+1)/2;  
   k=(n-1)/4;  
   a=(n-4*k+1)/2;
   for (int i = 1;i>=1;i--)
   {    
        cout << "H";
        for (int j = n+16;j>=1;j--) {
            cout << "O";
        }
        cout << "H";
        cout << "\n" ;
   }
   for (int i = k+4;i>=k+4;i--)
   {
        cout << "H";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "0";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "0";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << ".";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << "0";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "0";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "H";
      cout << "\n" ;
   }
   for (int i = k+3;i>=k+3;i--)
   {
        cout << "H";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "0x";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "x0";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << ".";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << "0x";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "x0";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "H";
      cout << "\n" ;
   }
   for (int i = k+2;i>=k+2;i--)
   {
        cout << "H";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "0x*";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "*x0";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << ".";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << "0x*";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "*x0";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "H";
      cout << "\n" ;
   }
   for (int i = k+1;i>=k+1;i--)
   {
        cout << "H";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "0x*^";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "^*x0";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << ".";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << "0x*^";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "^*x0";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "H";
      cout << "\n" ;
   }
   for (int i = k;i>=1;i--)
   {
        cout << "H";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "0x*^";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "^*x0";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << ".";
      for (int j = i-1;j>=1;j--) {
         cout << ".";
      }
      cout << "0x*^";
      for (int j = a+2*k-2*i;j>=1;j--) {
         cout << "#";
      }
      cout << "^*x0";
      for (int j = i;j>=1;j--) {
         cout << ".";
      }
      cout << "H";
      cout << "\n" ;
   }
   for (int i = m;i>=1;i--)
   {
        b=m-i;
        cout << "H";
        for (int j = n+10;j>=1;j--) {
            if (j<=b+2 xor j>n-b+8){
                cout << "." ;
            }else if(j==b+3){
                cout << "^*x0";
            }else if(j==n-b+8){
                cout << "0x*^";
            }else{
                cout << "#" ;
            }
        }
        cout << "H";
        cout << "\n" ;
   }
   for (int i = 2;i>=1;i--)
   {
        b=m-i;
        cout << "H..";
        for (int j = n+6;j>=1;j--) {
            if (j<=b+2 xor j>n-b+4){
                cout << "." ;
            }else if(j==b+3){
                cout << "^*x0";
            }else if(j==n-b+4){
                cout << "0x*^";
            }else{
                cout << "#" ;
            }
        }
        cout << "..H";
        cout << "\n" ;
   }
   for (int i = 1;i>=1;i--)
   {
        b=m-i;
        cout << "H...";
        for (int j = n+6;j>=1;j--) {
            if (j<=b+2 xor j>n-b+4){
                cout << "." ;
            }else if(j==b+3){
                cout << "*x0";
            }else if(j==n-b+4){
                cout << "0x*";
            }else{
                cout << "^" ;
            }
        }
        cout << "...H";
        cout << "\n" ;
   }
   for (int i = 1;i>=1;i--)
   {
        b=m-i;
        cout << "H....";
        for (int j = n+6;j>=1;j--) {
            if (j<=b+2 xor j>n-b+4){
                cout << "." ;
            }else if(j==b+3){
                cout << "x0";
            }else if(j==n-b+4){
                cout << "0x";
            }else{
                cout << "*" ;
            }
        }
        cout << "....H";
        cout << "\n" ;
   }
   for (int i = 1;i>=1;i--)
   {
        b=m-i;
        cout << "H.....";
        for (int j = n+6;j>=1;j--) {
            if (j<=b+2 xor j>n-b+4){
                cout << "." ;
            }else if(j==b+3){
                cout << "0";
            }else if(j==n-b+4){
                cout << "0";
            }else{
                cout << "x" ;
            }
        }
        cout << ".....H";
        cout << "\n" ;
   }
   for (int i = 1;i>=1;i--)
   {
        b=m-i;
        cout << "H.....";
        for (int j = n+6;j>=1;j--) {
            if (j<=b+3 xor j>n-b+3){
                cout << "." ;
            }else{
                cout << "0" ;
            }
        }
        cout << ".....H";
        cout << "\n" ;
   }
   for (int i = 1;i>=1;i--)
   {    
        cout << "H";
        for (int j = n+16;j>=1;j--) {
            cout << "O";
        }
        cout << "H";
        cout << "\n" ;
   }
}

void LOLXD(int n){
   /*
   for (int i=n;i>=1;i--){
      for (int j=n;j>=1;j--){
         cout << "5";
      }
      cout <<"\n";
   }
   */
   /*
   for(int i=0;i<N;i++){
      for (int j=N;j>=1;j--){
         cout << "5";
      }
        for(int j=0;j<N*2+1;j++){
            if( j < N-i or j > N+i ) cout << ".";
            else cout << "*";
        }
        for(int j=0;j<N*2+1;j++){
            if( j < N-i or j > N+i ) cout << ".";
            else cout << "*";
        }
        for (int j=N;j>=1;j--){
         cout << "5";
      }
        cout << "\n";
    }
    for(int i=2*N-2;i>=0;i--){
      for (int j=N;j>=1;j--){
         cout << "5";
      }
        for(int j=0;j<N*2+1;j++){
            if( j < N-i or j > N+i ) cout << ".";
            else cout << "*";
        }
        cout << "\n";
    }*/
    int m,k,a,b;
   m=(n+1)/2;  
   k=(n-1)/4;  
   a=(n-4*k+1)/2;
   for (int i=m+k;i>=1;i--){
      for (int j=n*3;j>=1;j--){
         cout << "5";
      }
      cout <<"\n";
   }
   for (int i = k;i>=1;i--)
   {  
      for (int j=n;j>=1;j--){
         cout << "5";
      }
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
      for (int j=n;j>=1;j--){
         cout << "5";
      }
      cout << "\n" ;
   }
   for (int i = m;i>=1;i--)
   {
   b=m-i;
   for (int j=n;j>=1;j--){
         cout << "5";
      }
      for (int j = n;j>=1;j--) {
         if (j<=b xor j>n-b){
            cout << "." ;
         }else{
            cout << "#" ;
         }
      }
      for (int j=n;j>=1;j--){
         cout << "5";
      }
      cout << "\n" ;
   }
   for (int i=m+k;i>=1;i--){
      for (int j=n*3;j>=1;j--){
         cout << "5";
      }
      cout <<"\n";
   }

}

void ERR(int n){
   for (int i=n;i>=1;i--){
      for (int j=n/5;j>=1;j--){
         cout << "ERROR";
      }
      cout <<"\n";
   }

}

int main()
{
   int ERRORCOUT=0;
    /*
    cout << "     ###\n";
    cout << "     #@@## # ##\n";
    cout << "      #@@@#$#$##\n";
    cout << "     #####$$@$@##\\\n";
    cout << "     #@@## # ##\n";
    cout << "      #@@@#$#$##\n";
    */
   while (true){
      cout << "Happy Birth Day Mommy\n";
      cout << "\n    chose your mode 1 2 3 4     OR END THE PROGRAM(TYPE 5)\n";
      int n,m;
      cin >> n;
      n=(int)n;
      if(n==5){
         cout << "\n PROGRAM ENDED XD GOODBYE HAVE A GOOD DAY \n        BYE\n";
      return 0;
      }
      cout << "choose your size of Heart to print XD (IN PUT OOD NUMBER THAT >=11)\n";
      cin >> m;
      if (n==1){
         prh(m);
         ERRORCOUT=0;
      }else if(n==2){
         prhx(m);
         ERRORCOUT=0;
      }else if (n==3){
         prhxy(m);
         ERRORCOUT=0;
      }else if(n==4){
         prhxyz(m);
         ERRORCOUT=0;
      }else{
         if (ERRORCOUT>=8){
            cout << "\n\nERROR"
         }
         if (m>50){
            ERR(m);
            cout << "\n\n\n\n               BYE \n\n\n\n";
            return 0;
         }else{
            LOLXD(m);
         }
         ERRORCOUT++;
         if (ERRORCOUT>5&&ERRORCOUT<8){
            cout << "\n\n     !!!!!!!!\n\n           YOUR ERROR COUNT IS MORE THAN FIVE " << 8-ERRORCOUT << "TIME BEFORE PORGRAM END (IF HAVE ERROR)\n" 
         }
         cout << "\n\nERROR XD\n\n";
      }
   }
   prhxyz(15);
}

