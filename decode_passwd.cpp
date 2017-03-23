#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    string str;
    string passwd_mp = "22233344455566677778889999";
    while(cin>>str){
        int lens = str.size();
        string res;
        for(int i=0;i<lens;i++){
            if(str[i]>='a'&&str[i]<='z')    res.push_back(passwd_mp[str[i]-'a']);
            else if(str[i]>='A'&&str[i]<='Z')   res.push_back('a'+((str[i]-'A'+1)%26));
            else    res.push_back(str[i]);
        }
        cout << res << endl;
    }
    return 0;
}