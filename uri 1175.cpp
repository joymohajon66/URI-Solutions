#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i, j=0, a[20];

    for (i=0; i<20; i++)
        cin >> a[i];

    // displaying array
    for (i=19; i>-1; i--)
    {
        cout << "N[" << j << "] = " << a[i] << endl;
        j++;
    }

    return 0;
}



