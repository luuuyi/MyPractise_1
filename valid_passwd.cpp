#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

bool isValidLength(string str){
    int lens = str.size();
    if(lens<=8)     return false;
    else    return true;
}

bool isValidType(string str){
    int types = 0;
    int lens = str.size();
    for(int i = 0;i<lens;i++){
        if(str[i]>='0'&&str[i]<='9')    types |= 0x01;
        else if(str[i]>='a'&&str[i]<='z')   types |= 0x02;
        else if(str[i]>='A'&&str[i]<='Z')   types |= 0x04;
        else    types |= 0x08;
    }
    int count = 0;
    while(types){
        if(types&0x01)  ++count;
        types = types>>1;
    }
    if(count>=3)    return true;
    else    return false;
}

bool isValidSubstr(string str){
    map<char,vector<int>> mp;
    int lens = str.size();
    for(int i = 0;i<lens;i++){
        mp[str[i]].push_back(i);
    }
    for(auto k = mp.begin();k!=mp.end();k++){
        if(k->second.size()>=2){
            for(int i=0;i<k->second.size();i++){
                for(int j=i+1;j<k->second.size();j++){
                    string tmp1 = str.substr(k->second.at(i),2);
                    string tmp2 = str.substr(k->second.at(j),2);
                    if(tmp1.compare(tmp2)==0)   return false;
                }
            }
        }
    }
    return true;
}

int main(){
    string str;
    while(cin>>str){
        if(!isValidLength(str)){
            cout << "NG" << endl;
            continue;
        }
        if(!isValidType(str)){
            cout << "NG" << endl;
            continue;
        }
        if(!isValidSubstr(str)){
            cout << "NG" << endl;
            continue;
        }
        cout << "OK" << endl;
    }
    return 0;
}