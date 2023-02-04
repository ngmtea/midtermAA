#include <bits/stdc++.h>
#define fto(i,a,b) for(int i=a;i<=b;++i)
#define maxn 100002

using namespace std;

int n, a[maxn], x;
string s;
int rs = 0;

int main()
{
    ios_base::sync_with_stdio(0);
    cin >> n;
    priority_queue<int> q;
    fto(i,1,n) cin >> a[i], q.push(a[i]);
    while (1)
    {
        cin >> s;
        if (s=="*") return 0;
        if (s=="insert") 
        {
            cin >> x;
            q.push(x);
        }
        else {
            x = q.top();q.pop();
            cout << x << '\n';
        }
    }
    return 0;
}
