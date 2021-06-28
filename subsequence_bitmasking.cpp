	#include<iostream>
	using namespace std;

	void printSubsequence(string str){
		int n=str.length();
		for(int i=0;i<(1<<n);i++){
			int tempi=i;
			string out="";
			int j=n-1;
			while(tempi>0){
				if((tempi & 1)==1)	
				{
					out=out+str[j];
				}
				tempi=tempi>>1;
				j--;
			}
			cout<<out<<" ";
		}			
	}

	int main(){
		string str;
		cin>>str;
		printSubsequence(str);	
	}
