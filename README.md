# 1 - General Project Information

Title: Project 1 - The Art Gallery</br>
Departement: Computer Science</br>
Professor: Dr. Fontenot</br>

Names: Gabriel Mongaras and Trevor</br>
Date: 2 / 14 / 2022</br>

Course: Fundamentals of Algorithms</br>
Section: CS 3353-001</br>

# 2 - Project Description
## 2.1 Problem
In this project, we aim to use three different algorithms to attempt to find the most valuable orientation of pictures on a wall.

## 2.2 - The Algorithms
### 2.2.1 - Brute Force Algorithm
The <strong>Brute Force Algorithm</strong> finds all possible orientations of pictures on the wall. In our implementation, we optimize the algorithm to only find 
the combinations that will fit on the given wall. This algorithm is very slow for large datasets but works well for small datasets. Since the 
algorithm looks at all possible combinations, it will always find the best possible orientation of pictures on the wall.
### 2.2.2 - Most Expensive Picture First Algorithm
The <strong>Most Expensive Picture First Algorithm</strong> gets the highest value picture, then the next highest value picture, and so on, until the 
picture width total reaches the maximum width. This algorithm is very fast, but it is likely to return a suboptimal arrangement of pictures.
### 2.2.3 - Custom Algorithm
The <strong>Custom Algorithm</strong> we created is similar to the <strong>Most Expensive Picture First Algorithm</strong>, but instead of picking the highest
value image, we pick the lowest highest ranked image. The rank of each image can be obtained from the following formula:  
<img src="https://render.githubusercontent.com/render/math?math=\frac{(Width \:\, of \:\, Image)^2}{Wall  \:\, Width * Value  \:\, of  \:\, Image}"></br>
In this function, we divide the square of the image width by the product of the wall width and the value of the picture. The formula effectively
gives pictures with a high width and low value a very high rank while making pictures with a low width, and a high value have a very low rank causing the pictures with a
lower width and a higher value to be chosen more often. This algorithm takes the same amount of time as the <strong>Most Expensive Picture First Algorithm</strong>, which
means it is very fast, but unlike the <strong>Most Expensive Picture First Algorithm</strong>, this algorithm gives close to optimal results.

## 2.3 - Project Execution
The following command can be used to run the project: </br>
./22s-pa01-sussybaka [Input File Name] </br>
When the code executes, it will read in the specified file name and will output three files, one for each algorithm, to the /output/ directory. To ensure to project runs successfully, make sure the specified input file name is correct in relation to the 22s-pa01-sussybaka project file, and the /output/ directory exists in the same directory as the 22s-pa01-sussybaka project file. If something were to go wrong, the project will give an error message stating the issue.

## 2.4 - Sample Input
The following lines are an example of an input file:
```
1024 768
10
1 2 541 1
2 12 982 1
3 18 452 1
4 9 680 1
5 4 123 1
6 1 433 1
7 26 496 1
8 4 129 1
9 6 927 1
10 20 466 1
```
The first line specifies the wall length and height. </br>
The second line specifies the number of pictures to choose from. </br>
All proceeding lines starting at line 3 represent a picture where each line is broken up into the following parts:
- The first number is the ID of the picture.
- The second number is the value or price of the picture.
- The third number is the width of the picture.
- The fourth and final number is the height of the image.

## 2.5 - Sample Output
The project will output three different files. Each file is the output from one of the algorithms. The following is an example of test-bruteforce.txt,
test-highvalue.txt, and test-custom.txt using the sample imput from above: </br>
test-bruteforce.txt:
```
46
7 26 496 1
10 20 466 1
```
test-highvalue.txt:
```
46
7 26 496 1
10 20 466 1
```
test-custom.txt:
```
34
5 4 123 1
8 4 129 1
7 26 496 1
```
The first line in the file contains the value of image orientation on the wall. </br>
The proceeding lines starting at line 2 represent information for each picture chosen to go on the wall. Each picture line is broken up as specified
<strong>in section 2.4</strong>.
