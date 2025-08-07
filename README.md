# 2D-Array-in-C-plus-plus

*🔴Aim:*

To write and execute C++ programs for performing various operations on two-dimensional (2D) arrays (matrices), including:

Input and Display

1.Addition of Two Matrices

2.Multiplication of Two Matrices

3.Diagonal Addition

4.Transpose of Matrix

5.Comparison of Rows

*🔴Apparatus / Software Required:*

 VS Cods
 
*🔴Theory:*

A two-dimensional array (2D array) in C++ is a collection of elements stored in rows and columns, like a table or matrix. It is used to represent mathematical matrices or tabular data.

Matrix operations are fundamental in many areas such as graphics, engineering, data processing, and numerical computations. In C++, we can use nested loops to perform operations like:

1. Matrix Input & Display

Taking values for each row and column using nested loops.

Displaying matrix in matrix form using cout.


2. Matrix Addition

Each element of matrix A is added to the corresponding element of matrix B.

C[i][j] = A[i][j] + B[i][j]


3. Matrix Multiplication

Row of A is multiplied with column of B:

C[i][j] = sum(A[i][k] * B[k][j])


4. Diagonal Addition

Sum of elements from top-left to bottom-right:

Sum = A[0][0] + A[1][1] + A[2][2] + ...


5. Transpose

Converting rows to columns:

Transpose[i][j] = A[j][i]


6. Comparison of Rows

Element-wise comparison between first and second row:

if(A[0][j] == A[1][j])

*🔴Algorithm:*

*🔴 1. Matrix Input & Display – Algorithm:*

🔴 Start
🔴 Input number of rows and columns
🔴 Use nested loop to input each element of matrix
🔴 Use another nested loop to display the matrix
🔴 End


*🔴 2. Addition of Two Matrices – Algorithm:*

🔴 Start
🔴 Input number of rows and columns
🔴 Input elements of Matrix A
🔴 Input elements of Matrix B
🔴 For each element, add A[i][j] + B[i][j]
🔴 Store result in a third matrix C[i][j]
🔴 Display matrix C
🔴 End


*🔴 3. Multiplication of Two Matrices – Algorithm:*

🔴 Start
🔴 Input number of rows and columns
🔴 Input elements of Matrix A
🔴 Input elements of Matrix B
🔴 Initialize result matrix C[i][j] = 0
🔴 Use 3 nested loops:
  🔸 Outer loop: for each row of A
  🔸 Middle loop: for each column of B
  🔸 Inner loop: multiply A[i][k] * B[k][j] and add to C[i][j]
🔴 Display matrix C
🔴 End


*🔴 4. Diagonal Addition – Algorithm:*

🔴 Start
🔴 Input size n of square matrix
🔴 Input matrix elements
🔴 Initialize sum = 0
🔴 Use loop: for i = 0 to n-1, add A[i][i] to sum
🔴 Display the sum
🔴 End


*🔴 5. Transpose of a Matrix – Algorithm:*

🔴 Start
🔴 Input rows and columns
🔴 Input elements of matrix A
🔴 Use nested loop:
  🔸 Outer loop for i = 0 to column
  🔸 Inner loop for j = 0 to row
  🔸 Print A[j][i] instead of A[i][j]
🔴 End


*🔴 6. Compare First and Second Row – Algorithm:*

🔴 Start
🔴 Input number of rows and columns
🔴 Make sure there are at least 2 rows
🔴 Input matrix A
🔴 Use a loop to compare A[0][j] and A[1][j] for each column
🔴 If equal, print "Equal", else "Not Equal"
🔴 End

*🔴 Conclusion:🔴*
In this experiment, we successfully implemented various matrix operations using C++ programming.
We performed matrix input, display, addition, multiplication, diagonal sum, transpose, and row comparison using nested loops and 2D arrays.
 This helped us understand how to use two-dimensional arrays effectively for mathematical and data-based operations.
We also learned the logic behind row-column traversal, element-wise operations, and condition checking in matrices.
The experiment enhanced our logical thinking and improved our C++ programming skills for real-life matrix problems.




