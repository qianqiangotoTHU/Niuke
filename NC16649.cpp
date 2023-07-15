#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int L, M;
    cin >> L >> M;
    int change[10005] = { 0 };
    for (int i = 0; i <= M; i++)
    {
        int a, b;
        cin >> a >> b;
        change[a] -= 1;
        change[b + 1] += 1;
    }
    int remain[10005];
    remain[0] = change[0];
    int sum = 0;
    if (remain[0] == 0)
    {
        sum++;
//         cout << "i=" << 1 << " sum=" << sum << endl;
    }
    for (int i = 1; i <= L; i++)
    {
        remain[i] = remain[i - 1] + change[i];
        if (remain[i] == 0)
	    {
	        sum++;
// 	        cout << "i=" << i << " sum=" << sum << endl;
	    }
    }
    cout << sum;
    return 0;
}
