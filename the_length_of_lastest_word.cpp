#include <iostream>

using namespace std;

int main(){
    string words;
    while(getline(cin,words)){
        int station = 0;
        station = words.find_last_of(' ');
        string sub = words.substr(station+1);
        int lens = sub.size();
        printf("%d\n",lens);
    }
    return 0;
}