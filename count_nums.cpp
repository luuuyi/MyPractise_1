#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        vector<int> vecs(n,0);
        for(int i=0;i<n;i++)    cin >> vecs[i];
        int neg_count=0,pos_count=0,sum=0;
        for(int i=0;i<n;i++){
            if(vecs[i]<0)   ++neg_count;
            else if(vecs[i]>0){
                ++pos_count;
                sum += vecs[i];
            }
        }
        cout << neg_count << " ";
        double res = (double)sum/pos_count;
        cout << fixed << setprecision(1) << res << endl;
    }
    return 0;
}