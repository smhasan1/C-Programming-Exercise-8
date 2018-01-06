# C-Programming-Exercise-8
Question 1 (6 points)  
Write a program that reads 10 integers from the standard input and display the maximum integer read and its position in the input sequence.  
For example if the input sequence is  
12 2 15 4 8 78 65 35 96 41  
The program should display  
9:96  
Followed by a new line.  
Explanation: the maximum number is 68, and it is number 6 in the sequence (the sequence starts with 1 not 0.  
If there are more than one number with the maximum value, you should display the first occurrence of the maximum.  

Question 2 (6 points)  
DNA sequence consists of the symbols A, C, G, and T. Write a program to read a sequence of DNA symbols (up to 250) and calculate the following.  
First check that the sequence is valid (contains sonly A,C,G, and T). If the sequence contains any other characters (even if it is a space) the program should write   **Invalid sequence** followed by a new line and terminates.  
If the sequence is valid, it should write  
**Valid sequence** followed by a new line and proceed to do the following:  
Display the number of times the sequence “ACGT” appears in the input sequence followed by a new line.   

Question 3 (8 points)  
The program should read a square matrix from the standard input and decide if it is a diagonally dominant matrix or not.  
For the purpose of the test, we will use a weak form of the definition such that, the matrix is diagonally dominant if the magnitude of the diagonal entry in a row is larger than or equal to the sum of the magnitudes of all the other (non-diagonal) entries in that row  
The input is a number n (matrix size) followed by n^2 integers.  
The program should display **on the standard output** either **YES** or **NO** followed by a new line depending on the matrix being diagonally dominant or not  
