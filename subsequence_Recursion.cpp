	#include<iostream>
	using namespace std;

	void printSubsequenceHelper(string input,int input_len,string output,int idx){
		if(idx==input_len){
			cout<<output<<" ";
			return;
		}
		else{
			printSubsequenceHelper(input,input_len,output,idx+1);
			printSubsequenceHelper(input,input_len,output+input[idx],idx+1);
		}

	}
	void printSubsequence(string str){
		int len=str.length();
		printSubsequenceHelper(str,len,"",0);
	}

	int main(){
		string str;
		cin>>str;
		printSubsequence(str);
	}
