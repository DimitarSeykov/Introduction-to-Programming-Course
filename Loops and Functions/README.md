Tasks for Loops and Functions

0. Write a function that finds the Greatest Common Divisor (GCD) of two numbers. Use the Euclidean Algorithm

  84 24 -> 12
  1000000 2 -> 2

--------------------------------------------
0.1 Write a function that finds the GCD of 4 numbers a, b, c, d

  84 48 144 96 -> 12
  
-------------------------------------------- 
1. Write a function that given a number, finds all of its prime factors. 

  1320 -> 2, 3, 5, 11

--------------------------------------------
1.1 Write a function taht given a number N, finds all prime numbers lesser than N (also known as Sieve of Eratosthenes)

  50 -> 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47
  
--------------------------------------------
2. Write a program to find the running average (or mean) of a stream of numbers. The input ends with the input of a negative number.
  
  
  
  2 -> 2
  
  3 -> 2.5 (because (2 + 3) / 2)
  
  5 -> 3.33.. (because (2 + 3 + 5) / 3)
  
  0 -> 2.5 (because (2 + 3 + 5 + 0) / 4)
  
  11 -> 4.2
  
  -5 -> "Process terminated"
  
  
--------------------------------------------  
3. Write a funcion that returns a reversed given 4-digit number. 

  1234 -> 4321
  1111 -> 1111
  
--------------------------------------------  
4. Write a function that given a number N prints the closest power of 2 (the abs is minimal)
  
  2 -> 2
  3 -> 2 or 4
  37 -> 32
  63 -> 64
  383 -> 256
  385 -> 512
  1000 -> 1024
