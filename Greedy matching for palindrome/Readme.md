# Shortest Palindrome Algorithm

## Problem Overview
Given a string `s`, the goal is to find the **shortest palindrome** that can be formed by adding characters to the front of `s`. A palindrome is a string that reads the same forward and backward.

## Approach
This algorithm finds the **longest palindromic prefix** of the string `s` and reverses the remaining suffix, prepending it to the front of `s` to create the shortest palindrome.

## Algorithm Explanation

### Key Idea
1. **Find the longest palindromic prefix**: The prefix is the longest part of the string starting from the beginning that forms a palindrome.
2. **Reverse the remaining characters**: After identifying the palindromic prefix, reverse the remaining non-palindromic part and add it to the front of the string to form the shortest palindrome.

### Step-by-Step Process
We use two pointers (`i` and `j`) to scan the string from both ends to find the longest palindromic prefix.

Initial string: "s"

Step 1: Two-pointer scan from both ends to find the longest palindromic prefix (i, j): Start at the beginning (i = 0) and the end (j = n - 1)

Step 2: Reverse the suffix that is not part of the palindrome

Step 3: Prepend the reversed suffix to form the shortest palindrome

## Complexity

### Time Complexity:
- **O(n²)** in the worst case. This happens due to repeated string comparisons and recursive calls.

### Space Complexity:
- **O(n)** due to recursion and string manipulation.

## Conclusion
This algorithm efficiently computes the shortest palindrome by identifying the longest palindromic prefix and reversing the remainder. The approach can be improved using advanced string matching techniques like **KMP** to achieve a more optimal time complexity.
