	#include<iostream>
	using namespace std;

	bool isPalindrome(string s,int n,int idx){
		if(idx==(n/2+1))return true;
		else{
			if(s[idx]==s[n-1-idx])isPalindrome(s,n,idx+1);
			else return false;
		}
	}
	
	int main(){
		string s;
		cin>>s;
		int n=s.length();
		if(isPalindrome(s,n,0))cout<<"Palindrome";
		else cout<<"Not a Palindrome";
	}
