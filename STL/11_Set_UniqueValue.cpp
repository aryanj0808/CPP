#include <bits/stdc++.h>
using namespace std;
// Insertion deletion all time complexity is log O(n)

int main()
{
    set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    cout << endl;
    for (auto value : s)
    {
        cout << value << endl;
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