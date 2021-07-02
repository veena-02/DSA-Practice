	#include <bits/stdc++.h>
	using namespace std;
	
	int quickSelectSmallest(vector<int>& a, int l, int h, int k){
		int pivotIdx;
		if(h==l+1){
			a[l]=min(a[l],a[h]);
			a[h]=max(a[l],a[h]);
			pivotIdx=k-1;
		}
		else{
			int pivot=a[l];
			swap(a[l],a[h]);
			int i=l,j=h-1;
			while(i<j){
				if(a[i]<pivot)i++;
				else if(a[j]>pivot)j--;
				else if(a[i]>pivot and a[j]<pivot){swap(a[i],a[j]);i++;j--;}
			}	
			pivotIdx=i;
			swap(a[i],a[h]);
		}
		if(pivotIdx == (k-1)) return a[k-1];
		else if((k-1) < pivotIdx) quickSelectSmallest(a,l,(pivotIdx-1),k);
		else quickSelectSmallest(a,pivotIdx+1,h,k);
		
	}
	
	int main(){
		int n,k;
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			a.push_back(x);
		}
		cin>>k;
	        cout<<quickSelectSmallest(a,0,n-1,k);

	}
