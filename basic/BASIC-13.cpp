#include <iostream>
#include <algorithm>
#define endl '\n'
using namespace std;

int n,A[205];

int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];
    sort(A,A+n);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    return 0;
}