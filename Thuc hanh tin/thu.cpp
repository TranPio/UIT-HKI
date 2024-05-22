#include <iostream>
#include <list>
#include <unordered_map>
#define fi "xephang.txt"
#define fo "xephang.out"

using namespace std;

int main()
{
    freopen(fi,"r",stdin);
	freopen(fo,"w",stdout);
    int n, m;
    cin >> n >> m;

    list<int> lst;
    for (int i = 1; i <= n; i++)
    {
        lst.push_back(i);
    }

    unordered_map<int, list<int>::iterator> idx;
    for (auto it = lst.begin(); it != lst.end(); it++)
    {
        idx[*it] = it;
    }

    for (int i = 0; i < m; i++)
    {
        int student;
        cin >> student;
        auto it = idx[student];
        if (it != lst.begin())
        {
            lst.splice(lst.begin(), lst, it);
            idx[student] = lst.begin();
        }
        cout << lst.back() << " ";
    }
    return 0;
}