#include <iostream>
#define endl '\n'
using namespace std;

int n;

int fibonacci(int depth,int penultimate,int last){
    if(depth>=n)
    return (penultimate+last)%10007;
    fibonacci(depth+1,last,(penultimate+last)%10007);
}


int main(){
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else
        cout<<fibonacci(2,0,1)<<endl;
    return 0;
}