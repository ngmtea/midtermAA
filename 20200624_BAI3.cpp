#include <bits/stdc++.h>
#define fto(i,a,b) for(int i=a;i<=b;++i)
#define maxn 22

using namespace std;

int n, a[maxn], k, m;
string s;
int rs = 0;

int gb(int i,int j) {return (i>>j)&1;}
int check(int x)
{
    int tr = 0;
    fto(i,0,n-1) tr += (gb(x,i)) ;
    return (tr==k);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> k >> m;
    fto(i,1,n) cin >> a[i];
    int mt = 1;
    fto(i,1,n) mt*=2;
    fto(i,0,mt-1)
    {
        if (!check(i)) continue;
        int tr = 0;
        fto(j,0,n-1) if (gb(i,j)) tr+=a[j+1];
        rs += (tr==m);
    }
    cout << rs;
    return 0;
}
