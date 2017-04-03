#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string str;
    while(cin>>str){
        int lens = str.size();
        vector<string> vecs;
        int max = 0, start = 0, end = 0;
        bool nums=true;
        for(int i=0;i<lens;i++){
            if(str[i]>='0'&&str[i]<='9'){
                if(nums){
                    start = i;nums=false;
                }
            }
            else{
                if(!nums){
                    nums = true;end = i-1;
                    if(end-start+1>max){
                        vecs.clear();vecs.push_back(str.substr(start,end-start+1));
                        max = end-start+1;
                    }
                    else if(end-start+1==max)   vecs.push_back(str.substr(start,end-start+1));
                }
            }
        }
        if (end<start){
			end = lens-1;
			if (end - start + 1>max){
				vecs.clear(); vecs.push_back(str.substr(start, end - start + 1));
				max = end - start + 1;
			}
			else if (end - start + 1 == max)   vecs.push_back(str.substr(start, end - start + 1));
		}
        int size = vecs.size();
        for(int i=0;i<size;i++){
            cout << vecs[i];
        }
        cout << "," << max << endl;
    }
    return 0;
}