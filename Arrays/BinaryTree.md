[Find Peak Element-Leetcode](https://leetcode.com/problems/find-peak-element/)

### Linear Scan O(n)
Interesting to note:
- Only need to check if num[i]>num[i+1]
- Strictly Increasing Array/Strictly Increasing Array/ Peaks in the mid

### Code Using Binary Search 

- Any given sequence in nums array can be viewed as alternating ascending and descending sequences. 
- By making use of this, and the fact that <b> we can return any peak as the result </b>, we can make use of Binary Search to find the required peak element.
- We start off by finding the middle element, mid from the given nums array. 
- If this element happens to be lying in a descending sequence of numbers. or a local falling slope
- (found by comparing nums[i]nums[i] to its right neighbour), it means that the peak will always lie towards the left of this element. 
- we reduce the search space to the left of mid(including itself) and perform the same process on left subarray.
- If the middle element, mid lies in an ascending sequence of numbers, or a rising slope
- (found by comparing nums[i]nums[i] to its right neighbour), it obviously implies that the peak lies towards the right of this element
- we reduce the search space to the right of midmid and perform the same process on the right subarray.

In this way, we keep on reducing the search space till we eventually reach a state where only one element is remaining in the search space. This single element is the peak element.

```

```
