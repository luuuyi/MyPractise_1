#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
    int n=0;
    while(cin>>n){
        map<string,int> mp;
        for(int i=0;i<n;i++){
            string tmp;
            cin >> tmp;
            ++mp[tmp];
        }
        map<string,int>::iterator k;
        for(k=mp.begin();k!=mp.end();k++){
            while(k->second--){
                cout << k->first << endl;
            }
        }
    }
    return 0;
}