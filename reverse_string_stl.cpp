#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        reverse(str.begin(),str.end());
        cout << str << endl;
    }
    return 0;
}