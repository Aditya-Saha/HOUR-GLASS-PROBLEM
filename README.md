# HOUR-GLASS-PROBLEM
From a 2D ARRAY  we have to calculate maximum sum of hourglass .In this code an attempt is made to allocate the 2d array dynamically.


Given a 2D matrix, the task is to find the maximum sum of an hourglass.
An hour glass is made of 7 cells
in following form.
    A B C
      D
    E F G
Examples: 
Input : 1 1 1 0 0 
        0 1 0 0 0 
        1 1 1 0 0 
        0 0 0 0 0 
        0 0 0 0 0 
Output : 7
Below is the hour glass with
maximum sum:
1 1 1 
  1
1 1 1
                                                      
Input : 0 3 0 0 0
        0 1 0 0 0
        1 1 1 0 0
        0 0 2 4 4
        0 0 0 2 4
Output : 11



Below is the hour glass with
maximum sum

1 0 0
  4
0 2 4


mat[][] = 2 3 0 0 0 
          0 1 0 0 0
          1 1 1 0 0 
          0 0 2 4 4
          0 0 0 2 0
Possible hour glass are :
2 3 0  3 0 0   0 0 0  
  1      0       0 
1 1 1  1 1 0   1 0 0 

0 1 0  1 0 0  0 0 0 
  1      1      0  
0 0 2  0 2 4  2 4 4 

1 1 1  1 1 0  1 0 0
  0      2      4
0 0 0  0 0 2  0 2 0
