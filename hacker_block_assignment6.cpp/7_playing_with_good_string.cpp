#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isvowel(char c){
		return(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	}

int main() {
	string s;
	if(!(cin>>s)) {
		cout << 0 <<endl;
		return 0;
	}
	int max_len = 0;
	int current_len = 0;

	for(char c : s){
		if (isvowel (c)){
			current_len++;
		}else{
			max_len = max(max_len,current_len);
			current_len = 0;
		}
	}
	max_len = max(max_len,current_len);
	cout << max_len << endl;
	return 0;
}
//input : cbaeicde
//output : 3