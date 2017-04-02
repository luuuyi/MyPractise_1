#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;


int main(){
    int a = 0, b=0;
    while(cin>>a){
        vector<int> vec_a(a,0);
        set<int> res;
        for(int i=0;i<a;i++){
            cin >> vec_a[i];
            res.insert(vec_a[i]);
        }
        cin >> b;
        vec_a.assign(b,0);
        for(int i=0;i<b;i++){
            cin >> vec_a[i];
            res.insert(vec_a[i]);
        }
        for(auto k=res.begin();k!=res.end();k++){
            cout << *k;
        }
        cout << endl;
    }
    return 0;
}