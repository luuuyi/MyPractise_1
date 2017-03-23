#include <iostream>
#include <iomanip>

using namespace std;

/*int main(){
    double n;
    while(cin >> n){
        cout << fixed << setprecision(0) << n <<endl;
    }
    return 0;
}*/

int main(){
    double n;
    while(cin >> n){
        cout << (int)(n+0.5) <<endl;
    }
    return 0;
}