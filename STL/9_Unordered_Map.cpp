#include <bits/stdc++.h>
using namespace std;
// Insertion deletion all time complexity is  O(1)
int main()
{
    unordered_map<string, int> m;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
}
/*Input:
12
abc
asd
xyz
asd
qwe
xyz
qwe
xyz
qwe
abc
qwe
abc
*/