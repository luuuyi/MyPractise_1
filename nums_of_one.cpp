#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int n=0;
    while(cin>>n){
        int n_tmp = n;
        int count = 0;
        while(n_tmp){
            ++count;
            n_tmp = n_tmp&(n_tmp-1);
        }
        cout << count << endl;
    }
    return 0;
}