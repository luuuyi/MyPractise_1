#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

double getResult(double m){
    double x = 1.0;
    for(;abs(x*x*x-m)>=0.000001;x -= (x*x*x-m)/(3*x*x));
    return x;
}

int main(){
    double m=0;
    while(cin>>m){
        cout << fixed << setprecision(1) << getResult(m) << endl;
    }
    return 0;
}