#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

bool isContainSeven(int n){
    int n_tmp = n;
    if(n/7==0)  return true;
    while(n_tmp){
        int k = n_tmp%10;
        if(k==7)    return true;
        n_tmp/=10;
    }
    return false;
}

int main(){
    int N=0;
    while(cin>>N){
        int count=0;
        for(int i=0;i<=N;i++){
            if(isContainSeven(i))   ++count;
        }
        cout << count << endl;
    }
    return 0;
}