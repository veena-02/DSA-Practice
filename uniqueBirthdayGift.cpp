	#include<bits/stdc++.h>
	using namespace std;
	
	#define mod 10000
	vector<unordered_map<int,int>> v;

	int countHelper(int k,int x,int n){
		if(n==0)return 1;
		int nextDivisibleNo=x;
		int cnt=0;
		while(nextDivisibleNo<=n){
			if(v[k-1].count(nextDivisibleNo)!=0)cnt+=v[k-1][nextDivisibleNo];
			else cnt+=countHelper(k-1,nextDivisibleNo,n);
			cnt%=mod;
			nextDivisibleNo+=x;
		}
		v[k][x]=cnt;
		return cnt;
	}
	int count(int n,int k){
		if(k==1)return n;
		vector<unordered_map<int,int>> dp(k);
		v=dp;
		for(int i=1;i<=n;i++){
			v[0][i]=1;
		}
		int cnt=0;
		for(int i=1;i<=n;i++){
			cnt+=countHelper((k-1),i,n);cnt%=mod;		
		}
		return cnt;
	}

	int main(){
		int n,k;
		cin>>n>>k;
		cout<<count(n,k);
	}
