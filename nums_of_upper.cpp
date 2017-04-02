#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string str;
    while(cin>>str){
        int lens = str.size();
        int nums=0;
        for(int i=0;i<lens;i++){
            if(str[i]>='A'&&str[i]<='Z')    ++nums;
        }
        cout << nums << endl;
    }
    return 0;
}