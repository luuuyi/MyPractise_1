#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int n=0,count_neg=0,count_pos=0,sum=0;
    while(cin>>n){
        if(n<0){
            ++count_neg;
        }
        else{
            ++count_pos;
            sum+=n;
        }
    }
    double res = (double)sum/count_pos;
    cout << count_neg << endl;
    cout << fixed << setprecision(1) << res << endl;
    return 0;
}