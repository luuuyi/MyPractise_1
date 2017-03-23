#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(char a1, char a2){
    return a1 < a2;
}

int main(){
    string str;
    while(cin>>str){
        sort(str.begin(),str.end(),cmp);
        cout << str << endl;
    }
    return 0;
}