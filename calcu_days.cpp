#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int y=0,m=0,d=0;
    vector<int> tables({31,28,31,30,31,30,31,31,30,31,30,31});
    while(cin>>y>>m>>d){
        if(d>tables[m-1]){
            cout << -1 << endl;
            continue;
        }
        int days = 0;
        if((y%4==0&&y%100!=0)||(y%100==0&&y%400==0)){
            for(int i=0;i<m-1;i++)  days += tables[i];
            if(m>2) days += d + 1;
            else    days += d;
        }
        else{
            for(int i=0;i<m-1;i++)  days += tables[i];
            days += d;
        }
        cout << days << endl;
    }
    return 0;
}