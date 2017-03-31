#include <iostream>
#include <map>
#include <string>
#include <deque>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int result=n*n*n;
        deque<int> deq;
        if(n&0x01){
            int mid = result/n;
            int each = n/2;
            int i=0;
            deq.push_back(mid);
            while(i<each){
                int left = mid-2*(i+1), right = mid+2*(i+1);
                deq.push_front(left);
                deq.push_back(right);
                ++i;
            }
        }
        else{
            int each = n/2;
            int mid = result/n;
            int i=0;
            while(i<each){
                int left = mid-1-2*i,right=mid+1+2*i;
                deq.push_front(left);
                deq.push_back(right);
                ++i;
            } 
        }
        int size = deq.size();
        for(int i=0;i<size;i++){
            if(i!=size-1)   cout << deq[i] << "+";
            else    cout << deq[i] << endl;
        }
    }
    return 0;
}