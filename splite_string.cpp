#include <iostream>

using namespace std;

int main(){
    string words1, words2;
    while(getline(cin,words1)){
        int lens1 = words1.size();
        while(lens1>8){
            string tmp = words1.substr(0,8);
            words1 = words1.substr(8);
            lens1 = words1.size();
            cout << tmp << endl;
        }
        int diffs = 8-lens1;
        string tmp(diffs,'0');
        tmp = words1+tmp;
        cout << tmp << endl;
        //cin.ignore();
        //cin.ignore();
    }
    return 0;
}