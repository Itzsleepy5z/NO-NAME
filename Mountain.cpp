#include <bits/stdc++.h>
using namespace std;

int getwat(int e,int f,int x,int c[],int n){
    int ret,d,y,z;
    ret=y=0;
    d=1;
    if (x>=f-e){
        return 1;
    }
    while (d<n-1)
    {
        ret++;
        //cout << d << " X " << n-1 << "\n";
        while (c[d]-c[y]<=x)
        {
            if (c[d+1]-c[y]>x){
                z=d;
            }
            y++;
        }
        y=z;
        d=y+1;
    }
    ret++;
    return ret;
}

int main()
{
    int n,m,e,f,d_sm;
    d_sm=0;
    cin >> n >> m;
    int a[n],b[n],c[n],s[m],q[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        c[i]=a[i]+b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> s[i]; 
        q[i]=s[i];
    }
    sort(q,q+m);
    sort(c,c+n);
    e=c[0];
    f=c[n-1];
    //cout << "Xd";
    for (int i = 0; i < m; i++)
    {
        d_sm=d_sm+getwat(e,f,q[i],c,n);
        //cout << i << "\n";
    }
    //cout << "\n\n\n" << d_sm ;
    cout << d_sm;
}

/*


5
12
16
20
>?<


*/