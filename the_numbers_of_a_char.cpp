#include <iostream>

using namespace std;

bool cmpChar(char c1, char c2){
    if((c1>='a'&&c1<='z')&&(c2>='A'&&c2<='Z')){
        char tmp = c2+('a'-'A');
        return tmp==c1;
    }
    else if((c2>='a'&&c2<='z')&&(c1>='A'&&c1<='Z')){
        char tmp = c1+('a'-'A');
        return tmp==c2;
    }
    else    return c1==c2;
}

int main(){
    string words;
    char t = 'A';
    while(getline(cin,words)){
        cin.get(t);
        int nums = 0;
        int lens = words.size();
        for(int i=0;i<lens;i++){
            if(cmpChar(words[i],t)) ++nums;
        }
        printf("%d\n",nums);
        cin.ignore();
    }
    return 0;
}