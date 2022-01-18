# Arrays
> An array is a user-defined data type that stores related information together. All the information stored in an array belongs to the same data type.

1. The elements of the array are stored in consecutive memory locations and are referenced by an _index_.
2. There is no single statement that can read, access, or print all the elements of an array. To do this,
we have to use a loop to execute the same statement with different index values.
3. The name of the array is a symbolic reference to the address of the first byte of the array. When we use the array name, we are actually referring to the first byte of the array.

> Since an array stores all its data elements in consecutive memory locations, storing just the base address, that is the address of the first element in the array, is sufficient. The address of other data elements can simply be calculated using the base address. The formula to perform this calculation is,
>
>Address of data element, **A[k]** = BA(A) + w*(k – lower_bound(0))
_Here, A is the array, k is the index of the element of which we have to calculate the address, BA is the base address of the array A, and w is the size of one element in memory, for example, size of int is 2._

### Calculating the size of the array 
The length of an array is given by the number of elements stored in it. The general formula to calculate the length of an array is
**Length** = upper_bound – lower_bound + 1
where upper_bound is the index of the last element and lower_bound is the index of the first element in the array.

## 2D Arrays

### Operations on a 2D Array (Matrices)
> 2D arrays can be used to implement the mathematical concept of matrices. We can perform the following operations on matrices : 

1. **Transpose :** Transpose of an mxn matrix A is given as a nxm matrix B, where B(i,j) = A(j,i)

2. **Sum :** Two matrices that are compatible with each other can be added together, storing the result in the third matrix. Two matrices are said to be compatible when they have the same number of rows and columns. The elements of two matrices can be added by writing:
C(i,j) = A(i,j) + B(i,j)

3. **Difference :** Two matrices that are compatible with each other can be subtracted, storing the result in the third matrix. Two matrices are said to be compatible when they have the same number of rows and columns. The elements of two matrices can be subtracted by writing:
Ci,j = Ai,j – Bi,j

4. **Product :** Two matrices can be multiplied with each other if the number of columns in the first matrix is equal to the number of rows in the second matrix. Therefore, m x n matrix A can be multiplied with a p x q matrix B if n=p. The dimension of the product matrix is m x q. The elements of two matrices can be multiplied by writing:
C(i,j) = Summation[A(i,k) * B(k,j)] for k=1 to n

### Sparse Matrices
> Sparse matrix is a matrix that has large number of elements with a zero value. In order to efficiently utilize the memory, specialized algorithms and data structures that take advantage of the sparse structure should be used. If we apply the operations using standard matrix structures and algorithms to sparse matrices, then the execution will slow down and the matrix will consume large amount of memory. Sparse data can be easily compressed, which in turn can significantly reduce memory usage.

There are two types of sparse matrices:

1. In the first type of sparse matrix, all elements above the main diagonal have a zero value. This type of sparse matrix is also called a **(lower) triagonal matrix**. In a lower triangular matrix, A(i,j) = 0 where i < j.

 An nxn lower-triangular matrix A has one non-zero element in the first row, two non-zero elements in the second row and likewise n non-zero elements in the nth row. 

 To store a lower-triangular matrix efficiently in the memory, we can use a one-dimensional array which stores only non-zero elements.

2. In an **upper-triangular matrix**, A(i,j) = 0 where i>j. 

 An nxn upper-triangular matrix A has n non-zero elements in the first row, n–1 non-zero elements in the second row and likewise one non-zero element in the nth row.

3. There is another variant of a sparse matrix, in which elements with a non-zero value can appear only on the diagonal or immediately above or below the diagonal. This type of matrix is also called a **tri-diagonal matrix**.
Hence in a tridiagonal matrix, A(i,j) = 0, where |i – j| > 1. In a tridiagonal matrix, if elements are present on
 1. the main diagonal, it contains non-zero elements for i=j. In all, there will be n elements.
 2. below the main diagonal, it contains non-zero elements for i=j+1. In all, there will be n–1 elements.
 3. above the main diagonal, it contains non-zero elements for i=j–1. In all, there will be n–1 elements.


##### End of Chapter