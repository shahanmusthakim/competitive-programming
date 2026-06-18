//https://cses.fi/problemset/task/1163
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, Q;
    cin >> N >> Q;
    multiset<int> m;
    set<int> st;
    st.insert(0);
    st.insert(N);
    m.insert(N);
    for (int i = 0; i < Q; i++)
    {
        int x;
        cin >> x;
        st.insert(x);
        auto it = st.find(x);
        auto pre = prev(it);
        auto post = next(it);
        int old = *post - *pre;
        m.erase(m.find(old));
        m.insert(*post - x);
        m.insert(x - *pre);
        cout << *m.rbegin() << " ";
    }
    return 0;
}