Search for a Range 
====
Given a sorted array of integers, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

For example,
Given [5, 7, 7, 8, 8, 10] and target value 8,
return [3, 4].

还是运用了泛型算法，count和find分别计算结束和开始位置。
auto first = find(nums.begin(), nums.end(), target);<br>
auto second = count(nums.begin(), nums.end(), target);
