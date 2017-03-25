#include <iostream>
#include <map>
#include <string>
#include <queue>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int n_tmp = n;
        queue<int> que;
        while(n_tmp){
            int p = n_tmp%10;
            n_tmp /= 10;
            que.push(p);
        }
        while(!que.empty()){
            cout << que.front();
            que.pop();
        }
        cout << endl;
    }
    return 0;
}