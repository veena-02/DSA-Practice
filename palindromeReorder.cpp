	#include<bits/stdc++.h>
	using namespace std;
	
	void printPalindrome(string s){
		vector<char> v(26,0);
		int n = s.length();
		for(int i=0;i<n;i++){
			v[s[i]-'a']++;	
		}
		string p;
		char odd;
		bool oddDone=false;
		for(int i=0;i<v.size();i++){
			if(v[i]%2==0){
				if(oddDone==false){oddDone=true;odd=(i+'a');v[i]--;}
				else {cout<<"No Solution";return;}
			}
			while(v[i]){
				p+=(i+'a');
			}
		}
		p+=odd;
		cout<<p;
	}
	
	int main(){
		string s;
		cin>>s;
		cout<<s;
		printPalindrome(s);
	}
