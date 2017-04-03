#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int i=0,count=0;
        while(i<=n){
            long tmp = pow(i,2);
            string s1 = to_string(tmp);
            int lens1 = s1.size();
            string s2 = to_string(i);
            int lens2 = s2.size();
            if(s2.compare(s1.substr(lens1-lens2))==0)  ++count;
            ++i;
        }
        cout << count << endl;
    }
    return 0;
}