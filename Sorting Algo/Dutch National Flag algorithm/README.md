# Dutch National Flag Algorithm 🇳🇱

The Dutch National Flag algorithm, devised by Edsger W. Dijkstra, is an efficient algorithm for sorting an array with three distinct values. It is named after the Dutch national flag, which consists of three colors in a specific order.

## How It Works

The algorithm uses three pointers to partition the array into three sections: low, mid, and high. Here's a step-by-step explanation:

1. **Initialization**: Three pointers (`low`, `mid`, and `high`) are initialized.
2. **Partitioning**: Traverse the array with the `mid` pointer and swap elements to ensure that:
   - All elements less than the mid value are before `low`.
   - All elements equal to the mid value are between `low` and `high`.
   - All elements greater than the mid value are after `high`.
3. **Completion**: Continue until `mid` surpasses `high`.

## Visual Explanation

Let's consider an array with three colors: 🟥 (red), 🟩 (green), and 🟦 (blue). The goal is to sort the array so that all reds come first, followed by greens, and then blues.

### Example

Initial array:
[🟩, 🟥, 🟦, 🟥, 🟩, 🟦, 🟥]


1. **Step 1**: Initialize pointers
low = 0, mid = 0, high = 6


2. **Step 2**: Traverse and swap
- 🟩 (green) at `mid=0`, no swap needed. Increment `mid`.
low = 0, mid = 1, high = 6

- 🟥 (red) at `mid=1`, swap with `low=0`. Increment `low` and `mid`.
[🟥, 🟩, 🟦, 🟥, 🟩, 🟦, 🟥]
low = 1, mid = 2, high = 6

- 🟦 (blue) at `mid=2`, swap with `high=6`. Decrement `high`.
[🟥, 🟩, 🟥, 🟥, 🟩, 🟦, 🟦]
low = 1, mid = 2, high = 5

- 🟥 (red) at `mid=2`, swap with `low=1`. Increment `low` and `mid`.
[🟥, 🟥, 🟩, 🟥, 🟩, 🟦, 🟦]
low = 2, mid = 3, high = 5

- 🟥 (red) at `mid=3`, swap with `low=2`. Increment `low` and `mid`.
[🟥, 🟥, 🟥, 🟩, 🟩, 🟦, 🟦]
low = 3, mid = 4, high = 5

- 🟩 (green) at `mid=4`, no swap needed. Increment `mid`.
low = 3, mid = 5, high = 5

- 🟦 (blue) at `mid=5`, swap with `high=5`. Decrement `high`.
low = 3, mid = 5, high = 4


3. **Step 3**: Mid pointer surpasses high pointer, sorting complete!
Sorted array: [🟥, 🟥, 🟥, 🟩, 🟩, 🟦, 🟦]


## Complexity

- **Time Complexity**: O(n) - Each element is processed at most once.
- **Space Complexity**: O(1) - The algorithm sorts the array in place.

## Usage

This algorithm is particularly useful for:
- Sorting arrays with a fixed number of unique values.
- Partitioning arrays for quicksort.
- Color sorting problems where items can belong to one of three categories.

## Implementation in Python

Here's a Python implementation of the Dutch National Flag algorithm:

```python
def dutch_national_flag(arr):
    low, mid = 0, 0
    high = len(arr) - 1

    while mid <= high:
        if arr[mid] == "red":
            arr[low], arr[mid] = arr[mid], arr[low]
            low += 1
            mid += 1
        elif arr[mid] == "green":
            mid += 1
        else:
            arr[high], arr[mid] = arr[mid], arr[high]
            high -= 1

    return arr

# Example usage:
colors = ["green", "red", "blue", "red", "green", "blue", "red"]
sorted_colors = dutch_national_flag(colors)
print(sorted_colors)