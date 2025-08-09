# Sorting Algorithms

This repository contains implementations of common sorting algorithms in C++/ Java.  
Each algorithm is implemented in a separate file and can be compiled and run individually.

## Algorithms Included

1. **Selection Sort**  
   Repeatedly selects the smallest (or largest) element from the unsorted portion and places it in the sorted portion.  
   - **Best Case:** O(n²)  
   - **Average Case:** O(n²)  
   - **Worst Case:** O(n²)  
   - **Space Complexity:** O(1)

2. **Insertion Sort**  
   Builds the sorted array one element at a time by inserting elements into their correct position.  
   - **Best Case:** O(n) (already sorted)  
   - **Average Case:** O(n²)  
   - **Worst Case:** O(n²)  
   - **Space Complexity:** O(1)

3. **Bubble Sort**  
   Repeatedly swaps adjacent elements if they are in the wrong order.  
   - **Best Case:** O(n) (already sorted)  
   - **Average Case:** O(n²)  
   - **Worst Case:** O(n²)  
   - **Space Complexity:** O(1)

4. **Quick Sort**  
   Divides the array into subarrays based on a pivot and sorts each subarray recursively.  
   - **Best Case:** O(n log n)  
   - **Average Case:** O(n log n)  
   - **Worst Case:** O(n²) (rare, pivot is always worst element)  
   - **Space Complexity:** O(log n) (due to recursion stack)

---

## Comparison Table

| Algorithm      | Best Case | Average Case | Worst Case | Space Complexity |
|----------------|----------|--------------|------------|------------------|
| Bubble Sort    | O(n)     | O(n²)        | O(n²)      | O(1)             |
| Insertion Sort | O(n)     | O(n²)        | O(n²)      | O(1)             |
| Selection Sort | O(n²)    | O(n²)        | O(n²)      | O(1)             |
| Quick Sort     | O(n log n)| O(n log n)  | O(n²)      | O(log n)         |
