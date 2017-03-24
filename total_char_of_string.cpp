#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        int lens = str.size();
        int eng_nums=0,spa_nums=0,num_nums=0,oth_nums=0;
        for(int i=0;i<lens;i++){
            if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))  ++eng_nums;
            else if(str[i]==' ')    ++spa_nums;
            else if(str[i]>='0'&&str[i]<='9')   ++num_nums;
            else    ++oth_nums;
        }
        cout << eng_nums << endl;
        cout << spa_nums << endl;
        cout << num_nums << endl;
        cout << oth_nums << endl;
    }
    return 0;
}