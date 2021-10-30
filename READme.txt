Following is the description about small image processing library.

This library contains the following functions

1- convolve_without_padding
2- conv_without_padding_mult
3- relu_of_matrix
4- tanh_of_matrix
5- maxPooling_of_matrix
6- avgPooling_of_matrix
7- softMax
8- sigmoid

Commandlines to run these functions are mentioned below


1-  ./binaryFile convolve_without_padding matrix1.txt matrix1_no_rows matrx2.txt matrix2_no_rows

2-  ./binaryFile convolve_with_padding padding_value matrix1.txt matrix1_no_rows matrx2.txt matrix2_no_rows

3-  ./binaryFile conv_without_padding_mult matrix1.txt matrix1_no_rows matrx2.txt matrix2_no_rows

4-  ./binaryFile conv_with_padding_mult padding_value matrix1.txt matrix1_no_rows matrx2.txt matrix2_no_rows

5-  ./binaryFile relu_of_matrix inputMatrix.txt rows cols

6-  ./binaryFile tanh_of_matrix inputMatrix.txt rows cols

7-  ./binaryFile sigmoid_of_vector inputVector.txt sizeOfVector

8-  ./binaryFile softMax_of_vector inputVector.txt sizeOfVector

9-  ./binaryFile maxPooling_of_matrix inputMatrix.txt sizeOfMatrix strideValue

10- ./binaryFile avgPooling_of_matrix inputMatrix.txt sizeOfMatrix strideValue