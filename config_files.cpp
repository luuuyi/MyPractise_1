#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

vector<vector<string>> init(){
    vector<vector<string>> mp({{"reset","reset what"},
                            {"reset board","board fault"},
                            {"board add","where to add"},
                            {"board delet","no board at all"},
                            {"reboot backplane","impossible"},
                            {"backplane abort","install first"}});
    return mp;
}

int main(){
    string str;
    while(getline(cin,str)){
        vector<int> strs({-1,5,5,5,6,9});
        vector<vector<string>> mp = init();
        int pos = str.find_first_of(' ');
        vector<string> candi;
        for(int k=0;k<mp.size();k++){
            if(pos==-1){
                if(strs[k]==-1&&mp[k][0].substr(0,str.size()).compare(str)==0)   candi.push_back(mp[k][1]);
            }
            else{
                if(strs[k]!=-1&&mp[k][0].substr(0,pos).compare(str.substr(0,pos))==0&&
                mp[k][0].substr(strs[k]+1,str.size()-pos-1).compare(str.substr(pos+1))==0)  candi.push_back(mp[k][1]);
            }
        }
        if(candi.size()==0||candi.size()>=2)    cout << "unkown command" << endl;
        else    cout << candi[0] << endl;
    }
    return 0;
}