#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int getCommonDivisorAndResult(int a, int b){
    int a_tmp=a,b_tmp=b;
    while(a_tmp%b_tmp){
        int tmp = a_tmp%b_tmp;
        a_tmp = b_tmp; b_tmp = tmp;
    }
    return a*b/b_tmp;
}

int main(){
    int a=0, b=0;
    while(cin>>a>>b){
        if(a>b) cout << getCommonDivisorAndResult(a,b) << endl;
        else    cout << getCommonDivisorAndResult(b,a) << endl;
    }
    return 0;
}