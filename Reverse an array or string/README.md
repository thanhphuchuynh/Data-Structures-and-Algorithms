# Reverse an array or string

## Description

Given an array (or string), the task is to reserse the array/string

## Example

```bash

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

```

## Solve

1) Initialize start and end indexes as start = 0, end = n-1 
2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
    start = start +1, end = end – 1
![Alt text](Solve.jpg "Image")

