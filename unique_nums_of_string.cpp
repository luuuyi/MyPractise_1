#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        int lens = str.size();
        map<char,int> mp;
        for(int i=0;i<lens;i++){
            ++mp[str[i]];
        }
        cout << mp.size() << endl;
    }
    return 0;
}