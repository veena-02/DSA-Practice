	#include<iostream>
	using namespace std;
	
	unsigned int swapBits(unsigned int n){
		unsigned int x = ((n<<1) & 0xAAAAAAAA) | ((n>>1) & 0x55555555);
		return x;	
	}

	int main(){
		unsigned int n;
		cin>>n;
		cout<<swapBits(n);
	}
