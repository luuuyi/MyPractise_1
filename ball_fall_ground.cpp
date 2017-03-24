#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        double total=0;
        double n_dou = n;
        total += n_dou;
        for(int i=0;i<4;i++){
            total += n_dou;
            n_dou /= 2;
        }
        cout << total << endl;
        double res = n_dou/2;
        cout << res << endl;

    }
    return 0;
}