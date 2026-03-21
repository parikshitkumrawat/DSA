#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	if(!(cin>>s))return 0;

	for(int i=0;i<s.length();i++){
		if(isupper(s[i])&& i!=0){
			cout<< endl;
		}
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}
//input:  IAmACompetitiveProgrammer
//output: 