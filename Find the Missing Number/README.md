# Find the missing number in array

## Description

You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. Write an efficient code to find the missing integer.

## Example

```bash

Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: The missing number from 1 to 8 is 5

Input: arr[] = {1, 2, 3, 5}
Output: 4
Explanation: The missing number from 1 to 5 is 4

```

## Solve

missingNumber = totalArray - (n*(n-1))/2

## Other solve

```bash

A XOR B = C => C XOR A = B 
(PARTIAL SUM) XOR (MISSING ELEMENT) = (TOTAL) =>
(TOTAL) XOR ( PArTIAL SUM) = (MISSING ELEMENT)

```
