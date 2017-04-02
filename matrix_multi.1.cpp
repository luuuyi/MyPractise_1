#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    string str1, str2;
    while(cin>>str1>>str2){
        int lens_1 = str1.size(), lens_2 = str2.size();
        int i=lens_1, j= lens_2;
        int add_i=0,x=0;
        string res;
        while(i&&j){
            add_i = (str1[i-1]-'0') + (str2[j-1]-'0');
            add_i += (x==0?0:1);
            if(x==1)    x=0;
            char tmp='\0';
            if(add_i>9){
                tmp = (add_i%10)+'0';
                x=1;
            }
            else{
                tmp = add_i+'0';
            }
            res.push_back(tmp);
            add_i=0;--i;--j;
        }
        while(i){
            if(x==1){
                add_i = (str1[i-1] - '0')+x;
                x=0;
                char tmp='\0';
                if(add_i>9){
                    tmp = (add_i%10)+'0';
                    x=1;
                }
                else{
                    tmp = add_i+'0';
                }
                res.push_back(tmp);
            }
            else{
                res.push_back(str1[i-1]);
            }
            --i;
        }
        while(j){
            if(x==1){
                add_i = (str2[j-1] - '0')+x;
                x=0;
                char tmp='\0';
                if(add_i>9){
                    tmp = (add_i%10)+'0';
                    x=1;
                }
                else{
                    tmp = add_i+'0';
                }
                res.push_back(tmp);
            }
            else{
                res.push_back(str2[j-1]);
            }
            --j;
        }
        reverse(res.begin(),res.end());
        cout << res << endl;
    }
    return 0;
}