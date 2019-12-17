NB: All tasks assume you have already inputted `n` - the size of the array.

0. Write a function `int sumArray(int* arr, int n)` that finds the sum of all elements in an array.

```
5 4 11 -5 8 -> 23
```

1. Write a function `bool checkIfTwoElementsSum(int* arr, int k, int n)` that checks whether any 2 elements in an array have a sum of k.

```
k = 5
2 -5 7 11 3 4 -> true

k = 100
2 3 4 5 6 -> false

```

2. Write a function to find the median of an array without sorting it. A median is such number that has as much elements that are smaller than it as element that are bigger than it in the array. If the size of the array is odd, the median is an element of the array. If the size is even - the median is the average of the 2 elements that would be in the middle should the array was sorted.

```
5 7 -4 2 11 6 1 -> 5
10 8 4 12 2 6 -> 7
```

3. Write a function `int minDiffFromElement(int* arr, int k, int n)` that finds the element of an array, which is the closes to the number `k`. (Closest is defined as the lowest absolute difference).
```
k = 5
1 8 11 -5 4 -> 8
k = 5
-7 9 3 14 1 -> 3
```

4. Write a function which finds the most occuring element in an array. 

If you know that all numbers are in the interval `[0,1000]`, can you do it without nested loops?
And what about if all the numbers are in the interval `[-1000, 1000]`? 

```
4 7 77 11 7 4 2 1 -> 4
2 3 -5 3 11 2 3 -6 7 2 3 -> 3
```

5. Implement Selection Sort
https://en.wikipedia.org/wiki/Selection_sort


6. Write a function `int printSpecificOrder(int* arr, int a, int b, int n)` that first prints all elements from arr that are smaller than `a`, then those in the interval `[a, b]` and then the elements, that are bigger than `b`, while maintaining the stability of the order (if element `x` and element `y` are both bigger than `b` and `x` comes before `y` in the array, `x` should be printed before `y` in the function).

```
a = 4, b = 10
7 4 6 10 11 10 8 -2 3 120 12 4 1 -> -2 3 1 7 4 6 10 10 8 4 11 120 12
```

-----------------------------------

0. Write a function that prints only the odd rows of matrix. 

1. Write a function that prints a matrix, but all it's odd rows are reversed

2.1 Write a function that prints all elements of a matrix that are above its main digonal, while maintaining the visual representation

2.2 Write a function that prints all elements of a matrix that are above it's secondary diagonal, while maintaining the visual representation

3. Write a function that multiplies two matrices.

4. You have a matrix with only zeros and ones. All the ones are connecte to each other. Write a functiion that "draws" the smallest possible rectangle in this matrix, that contain all the ones. 

```
0 0 0 0 0 0 0        0 0 0 0 0 0 0
0 0 0 0 0 0 0        0 0 0 0 0 0 0
0 0 1 1 1 1 0        0 2 2 2 2 2 0
0 1 1 1 1 0 0   -->  0 2 2 2 2 2 0 
0 0 0 1 0 0 0        0 2 2 2 2 2 0
0 0 1 0 0 0 0        0 2 2 2 2 2 0
0 0 0 0 0 0 0        0 0 0 0 0 0 0

```

5. Write a function that prints the elements of a matrix spiral-wise, starting from the top-left and going to the right.

```
10 11 12 13
14 15 16 17
18 19 20 21
22 23 24 25      ->          10 11 12 13 17 21 25 24 23 22 18 14 15 16 20 19
```



