#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    int x,y;
    if (a>b){
        x=a;
        y=b;
    }else {
        x=b;
        y=a;
    }
    if (x==0 or y==0){
        return x+y;
    }
    if (x%y==0){
        return y;
    }
    return gcd(y,x%y);
}

int main()
{
    int n,m;
    cin >> n >> m;
    cout << gcd(n,m);

}