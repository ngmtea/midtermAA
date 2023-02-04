#include <bits/stdc++.h>
#define fto(i,a,b) for(int i=a;i<=b;++i)
#define maxn 100002

using namespace std;

int n, a[maxn], x;
int b[maxn];
int rs = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    fto(i,1,n) cin >> a[i];
    b[1] = a[1]; b[2] = a[1] + a[2];
    rs = a[1] + a[2];
    fto(i,3,n)
    {
        b[i] = max(a[i] + b[i-2], a[i] + a[i-1] + b[i-3]);
        rs = max(rs, b[i]);
    }
    cout << rs;
    return 0;
}
