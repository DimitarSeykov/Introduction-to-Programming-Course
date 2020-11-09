## Tasks for Loops and Functions

1. Write a function that finds the Greatest Common Divisor (GCD) of two numbers. Use the Euclidean Algorithm
```
84 24 -> 12
1000000 2 -> 2
```

2. Write a function that finds the GCD of 4 numbers a, b, c, d

```
84 48 144 96 -> 12
```


3. Write a function that given a number, finds all of its prime factors. 
```
1320 -> 2, 3, 5, 11
```

4. Write a function taht given a number N, finds all prime numbers lesser than N (also known as Sieve of Eratosthenes)
```
50 -> 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47
``` 

5. Write a program to find the running average (or mean) of a stream of numbers. The input ends with the input of a negative number.

``` 
  2 -> 2
  3 -> 2.5 (because (2 + 3) / 2)
  5 -> 3.33.. (because (2 + 3 + 5) / 3)
  0 -> 2.5 (because (2 + 3 + 5 + 0) / 4)
  11 -> 4.2
  -5 -> "Process terminated"
```
  
6. Write a function that returns a reversed given number. 
```
  1234 -> 4321
  11 -> 11
  310011 -> 110013
```
  
  
7. Write a function that given a number N prints the closest power of 2 (the abs is minimal). N should be lesser than 1000000. Validate the input.
```
  2 -> 2
  3 -> 2 or 4
  37 -> 32
  63 -> 64
  383 -> 256
  385 -> 512
  1000 -> 1024
```

8. Write a function that finds the average of the digits in a given number N
```
    3 -> 3
    120 -> 1
    9999 -> 9
    56789 -> 7
```

9. There are two towns A and B. The distance between town A and town B is `d`. A train T1 leaves from town A to town B with a constant speed of `v1`. At the same time train T2 leaves from town B to town A with a constant speed of `v2`. Together with T1, from town A to town B leaves a very fast fly with a constant speed of `v`. When it reaches T2 it turns around and continues flying towards town A. when it eaches T1 it turns around and goes towards town B. the proces continues until the distance between T1 and T2 is bigger than the fly itself. The size of the fly is `eps`. You are given `d, v, v1, v2 and eps`. Find the length of each segment the fly is travelling and the total distance it would have travelled before the two trains meet. 
