#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n , cnt = 0;

    cin >> n;

    int a[n];

    for (int i = 0; i<n; i++)
    {
        cin >> a[i];
    }

    int maxx = a[0];
    int minn = a[0];

    for (int i = 0; i<n; i++)
    {
        if (a[i] > maxx)
        {
            maxx = a[i];
            cnt++;
        }
        if (a[i] < minn)
        {
            minn = a[i];
            cnt++;
        }

    }

    cout << cnt << " ";



}
