#include <iostream>
using namespace std;
int main()
{
    int n;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n-i; j++)
        {
            cout<<" ";
        }
        for(int j=0; j<=i; j++)
        	cout<<"*";
        cout<<'\n';
    }
    return 0;
}