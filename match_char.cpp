#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

bool isMatch(string s1, string s2){
    int lens_1 = s1.size(), lens_2 = s2.size();
    if(lens_1==0&&lens_2==0)    return true;
    if(lens_1==0||lens_2==0)    return false;
    if(s1[0]=='?'){
        return isMatch(s1.substr(1),s2.substr(1));
    }
    else if(s1[0]=='*'){
        return isMatch(s1.substr(1),s2.substr(0))||isMatch(s1.substr(1),s2.substr(1))||isMatch(s1.substr(0),s2.substr(1));
    }
    else{
        if(s1[0]!=s2[0])    return false;
        else    return isMatch(s1.substr(1),s2.substr(1));
    }
}

int main(){
    string str1;
    while(cin>>str1){
        string str2;
        cin >> str2;
        int lens = str1.size();
        bool res = false;
        res = isMatch(str1,str2);
        if(res) cout << "true" << endl;
        else    cout << "false" << endl;
    }
    return 0;
}