#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

bool isExchange(char a1, char a2){
    if(a1>='a'&&a1<='z'){
        a1 = a1-('a'-'A');
    }
    if(a2>='a'&&a2<='z'){
        a2 = a2-('a'-'A');
    }
    if(a1<=a2)  return false;
    else    return true;
}

int main(){
    string str;
    while(getline(cin,str)){
        int lens = str.size();
        for(int i=0;i<lens-1;i++){
            int left = 0;
            for(int j=left+1;j<lens-i;j++){
                if((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')){
                    if(isExchange(str[left],str[j])){
                        char tmp = str[j];
                        str[j] = str[left];
                        str[left] = tmp;
                    }
                    left = j;
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}