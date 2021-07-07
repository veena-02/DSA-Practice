### Maximum Subarray Sum
```
class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    if (!nums.size()) return 0;

    int max_global = nums[0];
    int max_current = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
      max_current = std::max(nums[i], max_current + nums[i]);
      max_global = std::max(max_global, max_current);
    }
    return max_global;
  }
};
```
---
### Flip Bits 
[Problem Statement](https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381872)
How to know that the problem is to be solved using Kadane's Algorithm:
- Finding something from Subarray
- Either maximize something or minimize something( Here we have to maximize no. of ones)

Code:
```
int flipBits(int* a, int n) 
{
    //The original array has countOf1s no. of 1's
    //We need to select a subarray, such that on flipping 
    //that gives maximum value of 1's
    //FOR EVERY 0'S IN THE SUBARRAY WE ADD +1 TO THE SUM
    //(as on flipping it would ultimately become 1 so add on to the actual sum)
    //FOR EVERY 1'S IN THE SUBARRAY WE ADD -1 TO THE SUM
    //(as on flipping it would ultimately become 0 so lessen the actual sum by 1)
    
    int countOf1s=0;
    for(int i=0;i<n;i++){
        if(a[i]==1)countOf1s++;
    }
    int currSum=0;
    int maxSum=0;
    for(int i=0;i<n;i++){
        int temp;
        if(a[i]==0)temp=1;
        if(a[i]==1)temp=-1;
        currSum=max(temp,currSum+temp);
        maxSum=max(maxSum,currSum);
    }
	    return maxSum+countOf1s;
}

```
---
### Print the maximum subarray of non-ve array elements
[Problem Statement](https://practice.geeksforgeeks.org/problems/maximum-sub-array5443/1#)

CODE:
```
vector<int> findSubarray(int a[], int n) {
	    
	    vector<int> subArr;
	    long long int currSum=0,maxSum=0;
	    int csI=-1,csJ=-1,msI=-1,msJ=-1;
	    
	    for(int i=0;i<n;i++){
	        if(a[i]<0){
	            // not including a[i](which is a -ve no.) in the previous subarray
	            csI=-1;csJ=-1;
	            currSum=0;
	        }
	        else{
	            //including a[i] in the previous subarray
	            if(csI==-1)csI=i;
	            csJ=i;
	            currSum+=a[i];
	        }
	        if(currSum>maxSum){msI=csI;msJ=csJ;}
	        if(currSum == maxSum){
	            if((msJ-msI+1)<(csJ-csI+1)){msI=csI;msJ=csJ;}
	            else if((msJ-msI+1)<(csJ-csI+1)){
	                if(csI<msI)msI=csI;msJ=csJ;
	            }
	        }
	        maxSum=max(currSum,maxSum);
	    }
	    if(msI==-1)subArr.push_back(-1);
	    else{
	        for(int i=msI;i<=msJ;i++){
	            subArr.push_back(a[i]);
	        }
	    }
	    return subArr;
	}
```
[Understanding Reference Video](https://www.youtube.com/watch?v=VMtyGnNcdPw) 
---
