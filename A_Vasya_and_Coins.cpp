#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,i,j;
        cin >> a>> b;
        int suma=a;
        int sumb = b*2;
        if(suma ==0) cout << 1<<endl;
        else{
            cout << suma+sumb+1<< endl;
        } 
    }
    
    }