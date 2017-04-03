#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int func(int n, int m){
    if(n==0||m==0)    return 1;
    return func(n-1,m) + func(n,m-1);
}

int main(){
    int n=0,m=0;
    while(cin>>n>>m){
        cout << func(n,m) << endl;
    }
    return 0;
}