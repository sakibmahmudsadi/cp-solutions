#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 1, 2, 3, 3, 4, 5, 6, 6, 7, 9, 9, 11};
    // Expected output: 1 2 3 4 5 6 7
    int left = 0, right = v.size() - 1, count = 0;
    while (left <= right)
    {
        bool same = false;
        for (int i = left + 1; i <= right; i++)
        {
            if (v[i] == v[left])
            {
                same = true;
                swap(v[i], v[right]);
                ++count;
                --right;
                break;
            }
        }
        if (!same)
        {
            ++left;
        }
    }
    while (count--)
    {
        v.pop_back();
    }
    sort(v.begin(), v.end());

    for (int i : v)
    {
        cout << i << " ";
    }
}
// I implemented a manual way to remove duplicates from the vector without using std::unique and std::erase.