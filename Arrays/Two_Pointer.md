### TWO POINTER APPROACH
The primary condition for using the Two Pointers technique is monotonicity.

[Longest Mountain Subarray](https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118509/offering/1376554)

CODE:
`
int longestMountain(int *arr, int n)
{
    if(n==1)return 0;
    int i=0,j=1,mx=0;
    bool incr;
    while(j<n){
        incr=false;
        if(arr[j-1]==arr[j]){i=j;j++;continue;}
        while(j<n and arr[j]>arr[j-1]){
            incr=true;
            j++;
        }
        if(arr[j-1]==arr[j]){i=j;j++;continue+;}
        if(incr==true){
            while(j<n and arr[j]<arr[j-1]){
                j++;
            }
            mx=max(mx,(j-i));
            i=j-1;
        }else{j++;}
    }
    return mx;
}
`
---

[Find All Triplets With Zero Sum](https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118509/offering/1376555?leftPanelTab=0)

CODE:
`
/*
        Time Complexity : O(N^2)
        Space Complexity : O(N),

        where N is the number of elements in the array.

 */


vector<vector<int>> findTriplets(vector<int>arr, int n) {

    vector<vector<int>>ans;

    // Sorting the vector.
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {

        int target = -arr[i];
        int front = i + 1;
        int back = n - 1;

        while (front < back) {

            int sum = arr[front] + arr[back];

            // Finding answer which starts from arr[i]
            if (sum < target) {
                front++;
            }

            else if (sum > target) {
                back--;
            }

            else {

                int x = arr[front];
                int y = arr[back];
                ans.push_back({arr[i], arr[front], arr[back]});

                // Incrementing front pointer until we reach a different number
                while (front < back && arr[front] == x) {
                    front++;
                }

                // Decrementing last pointer until we reach a different number
                while (front < back && arr[back] == y) {
                    back--;
                }

            }
        }

        // Ensuring that we don't encounter duplicate values for arr[i]
        while (i + 1 < n && arr[i] == arr[i + 1]) {
            i++;
        }
    }
    return ans;
}
`
