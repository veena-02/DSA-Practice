## DNF SORT / 012 Sort

![image](https://user-images.githubusercontent.com/59028294/124893752-a0f18b80-dff8-11eb-96ed-8a0319386262.png)

[Problem Statement](https://leetcode.com/problems/sort-colors/)

CODE:
```
void sortColors(vector<int>& nums) {
        int low=0,mid=0,high=nums.size();
    
        while(mid<high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                high--;
                swap(nums[mid],nums[high]);
            }
        }
 }
```
### Quicksort using the Dutch national flag algorithm

[Problem:](https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118820/offering/1381876)

CODE:
```
```
