#include <bits/stdc++.h>
#define fto(i,a,b) for(int i=a;i<=b;++i)
#define maxn 100002

using namespace std;

int n, a[maxn], k, A, B;
int rs = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n >> k >> A >> B;
    fto(i,1,n) cin >> a[i];
    int z = 0;
    fto(i,1,k) z += a[i];
    rs+=(A<=z && z<=B);
    fto(i,k+1,n)
    {
        z-=a[i-k]; z+=a[i];
        rs+=(A<=z && z<=B);
    }
    cout << rs;
    return 0;
}
