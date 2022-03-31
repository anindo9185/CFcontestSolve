#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i,j,k;
        cin >> n;
        int a[n];
        for ( i = 0; i <n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n, greater<int>());
        if(a[0]-a[1]>=2 || (n==1&& a[0]!=1)) cout << "NO"<<endl;
        else
        cout << "YES"<<endl;

        
    }
    
    }