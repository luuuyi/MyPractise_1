#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string str;
	while (getline(cin,str)) {
		int lens = str.size(),nums_num=0,nums_sym=0;
		bool upper=false, lower=false;
		int total = 0;
		if(lens<=4)	total+=5;
		else if(lens>=5&&lens<=7)	total += 10;
		else	total += 25;
		for(int i=0;i<lens;i++){
			if(str[i]>='a'&&str[i]<='z')	lower = true;
			else if(str[i]>='A'&&str[i]<='Z')	upper = true;
			else if(str[i]>='0'&&str[i]<='9')	nums_num++;
			else	nums_sym++;
		}
		if(lower)	total+=10;
		if(upper)	total+=10;
		if(nums_num==1)	total+=10;
		else if(nums_num>1)	total+=20;
		
		if(nums_sym==1)	total+=10;
		else if(nums_sym>1)	total+=25;
		if((lower||upper)&&nums_num!=0)	total += 2;
		else if((lower||upper)&&nums_num!=0&&nums_sym!=0)	total+=3;
		else if(lower&&upper&&nums_num!=0&&nums_sym!=0)	total += 5;

		if(total>=90)	cout << "VERY_SECURE" << endl;
		else if(total>=80)	cout << "SECURE" << endl;
		else if(total>=70)	cout << "VERY_STRONG" << endl;
		else if(total>=60)	cout << "STRONG" << endl;
		else if(total>=50)	cout << "AVERAGE" << endl;
		else if(total>=25)	cout << "WEAK" << endl;
		else	cout << "VERY_WEAK" << endl;
	}
	return 0;
}