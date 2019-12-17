0. Write a recursive function `int fib(int n)` to calculate the Nth number in the Fibonacci Sequence. The Fibonnaci sequence is defined as follows:

```
fib(0) = 0
fib(1) = 1
fib(n) = fib(n - 1) + fib(n - 2), n >= 2
```
Can you do it without always calling the recursive function?
  
1. Write a recursive function `int fact(int n)` that calculates N! (N factorial). N! = 1*2*3*...*N

2. Write a a recursive function `int sumInterval (int a, int b)` that calculates the sum of the natural numbers in the interval `[a, b]`.

```
sumInterval(1, 10) -> 55
sumInterval(9, 11) -> 30
sumInterval(99, 103) -> 505
```

3. Write a recursive function to count the number of digits in a number.

```   
countDigits(123) -> 3; 
countDigits(-12) -> 2
countDigits(1234567) -> 7
```

4. Write a recursve function `int sumDigits(int n)` that finds the sum of a number's digits

```
sumDigits(123) -> 6
sumDigits(100000) -> 1
sumSigits(98712) -> 27
```
             
             
5. Pascal's triangle is the following pattern of numbers:

```
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
   ...
```

The numbers on the outside of the triangle are ones. Every number
on the inside of the triangle is the sum of the two numbers directly above it.
Write a recursive function `int binomial-coefficient(int row, int index)`, calculating the element
of Pascal's triangle which is on `row` and a position `index` in the row.
Both rows and positions start from 1.  


6. Write a recursive function `int fastPow(int x, int n)` which calculates x<sup>n</sup>, using the following property:

   If `n` is even, x<sup>n</sup> = (x<sup>(n/2)</sup>)<sup>2</sup>.
   
   Otherwise, x<sup>n</sup> = x(x<sup>(n/2)</sup>)<sup>2</sup>.
   
7. A palindrome is a string or a number that is read forwards the same way it is read backwards:

```
abcba
racecar
a
```

Write a recursive function to determine whether a given string is a palindrome.


8. Write a recursive program that given a number N generates all N-dimensional vectors, consisting of 0 and 1.

```
If N = 3 then the vectors are (0,0,0), (0,0,1), (0,1,0), (0,1,1), (1,0,0), (1,0,1), (1,1,0), (1,1,1)
```
