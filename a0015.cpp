#include <iostream>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int n, k, a[1000010];

int solve(int s, int e)
{
    while(s<e) {
        int m = (s+e)/2;
        if(a[m]<k)
            s = m+1;
        else
            e=m;
    }
    return e+1;
}

int main()
{
    fastio;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    cin >> k;

    cout << solve(0, n) << '\n';

    return 0;
}
