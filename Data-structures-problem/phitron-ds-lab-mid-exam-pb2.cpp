#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    int n_arr[s.size()];
    int index = 0;
    for (auto x : s)
    {
        n_arr[index++] = x;
    }
    sort(n_arr, n_arr + s.size());

    for (int i = 0; i < s.size(); i++)
    {
        cout << n_arr[i] << " ";
    }
    return 0;
}
