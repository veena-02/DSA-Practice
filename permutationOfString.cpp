	#include<bits/stdc++.h>
	using namespace std;
	
	//RETURNS DISTINCT OUTPUT FOR DUPLICATE CHARACTERS IN INPUT
	void permutation_STL(string str){
		sort(str.begin(),str.end());
		do{
			cout<<str<<" ";	
		}while(next_permutation(str.begin(),str.end()));
	}
	// RETURNS DUPLICATE PERMUTATIONS FOR THE DUPLICATE CHARS IN INPUT
	void permutation_backtracking(string input,string output){
		if(input==""){
			cout<<output<<" ";
			return ;
		}
		int n=input.length();
		for(int i=0;i<n;i++){
			char temp=input[i];
			string tempI=input;
			output+=input[i];
			input=input.substr(0,(i-0))+input.substr(i+1,n-i-1);
			permutation_backtracking(input,output);
			output=output.substr(0,output.length()-1);
			input=tempI;
		}
	}

	//RETURNS DUPLICATE PERMUTATIONS
	void permute_backtracking_swapping(string s, int startIdx, int endIdx){
		if(startIdx == endIdx){
			cout<<s<<" ";
			return;
		}
		for(int i=startIdx;i<=endIdx;i++){
			swap(s[startIdx],s[i]);
			permute_backtracking_swapping(s,startIdx+1,endIdx);
			swap(s[startIdx],s[i]);
		}
	}
	
	int main(){
		string str;
		cin>>str;
		permutation_backtracking(str,"");
		cout<<endl;
		permute_backtracking_swapping(str,0,str.length()-1);
		cout<<endl;
		permutation_STL(str);
		return 0;
	}

