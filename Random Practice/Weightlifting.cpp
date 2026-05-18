// https://www.codechef.com/problems/WEIGHTLIFT
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A1, A2, B1, B2, C1, C2;
    cin >> A1 >> A2 >> B1 >> B2 >> C1 >> C2;
    cout << max(A1, A2) + max(B1, B2) + max(C1, C2);

    return 0;
}