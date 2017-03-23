#include <iostream>
#include <unordered_map>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main(){
    long long n;
    while(cin >> n){
        queue<int> que;
        map<int,int> map;
        long long n_tmp = n;
        while(n_tmp){
            int m = n_tmp%10;
            n_tmp /= 10;
            ++map[m];
            if(map[m]<=1)   que.push(m);
        }
        while(!que.empty()){
            cout << que.front();
            que.pop();
        }
        cout << endl;
    }
    return 0;
}