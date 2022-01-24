# 1 - General Project Information

Title: Project 1 - The Art Gallery</br>
Department: Computer Science</br>
Professor: Dr. Fontenot</br>

Names: Gabriel Mongaras and Trevor Dohm</br>
Date: 2 / 14 / 2022</br>

Course: Fundamentals of Algorithms</br>
Section: CS 3353-001</br>

# 2 - Project Description
## 2.1 - Problem
In this project, we aim to use three different algorithms in order to find the most valuable orientation of pictures on a wall.

## 2.2 - The Algorithms
### 2.2.1 - Brute Force Algorithm
The <strong>Brute Force Algorithm</strong> finds all possible orientations of pictures on the wall. In our implementation, we optimize the algorithm to find only
the combinations that will fit on the given wall. This algorithm is quite slow for large datasets but works well for small datasets. Since the 
algorithm looks at all possible combinations, it will always find the highest value arrangement of pictures on the wall.
### 2.2.2 - Most Expensive Picture First Algorithm
The <strong>Most Expensive Picture First Algorithm</strong> fetches the highest value pictures in the dataset until the current 
picture width total reaches the maximum width, or wall width. This algorithm is very fast, but it is likely to return a suboptimal arrangement of pictures.
### 2.2.3 - Custom Algorithm
The <strong>Custom Algorithm</strong> we created is similar to the <strong>Most Expensive Picture First Algorithm</strong>, but instead of picking the highest
value image, we pick the lowest ranked image. The rank of each image can be obtained from the following formula:  

<img src="https://render.githubusercontent.com/render/math?math=\frac{(Image \:\, Width)^2}{(Wall  \:\, Width) * (Image  \:\, Value)}"></br>

In this function, we divide the square of the image width by the product of the wall width and the picture value. The formula simply
gives pictures with a large width and small value a higher rank while giving pictures with a small width and large value a lower rank, causing the latter to be chosen more often. This algorithm takes the same amount of time as the <strong>Most Expensive Picture First Algorithm</strong>, meaning
it is very fast, and normally generates better, or closer-to-optimal, results than the <strong>Most Expensive Picture First Algorithm</strong>.

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
test-highvalue.txt, and test-custom.txt using the sample input from above: </br>
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
The proceeding lines starting at line 2 represent information for each picture chosen to go on the wall. Each picture line is broken up as specified in 
<strong>section 2.4</strong>.

# 3 - Algorithm Analysis
The algorithm performance analysis will examine how each of the three algorithms perform, and how they compare against each other.
## 3.1 - Setting up The Analysis
To set up the analysis, we took 5 different sample sizes:
- 10 Pictures
- 15 Pictures
- 50 Pictures
- 100 Pictures
- 1000 Pictures
Each sample of pictures is split up into 6 different parts where:
- the maxWidth is 1000 x 2
- the maxWidth is 2500 x 2
- The maxWidth is 5000 x 2
So, in total, there are 30 input sample files that will be used to test the algorithms. Each algorithm will analyze each dataset for a total of 84 results. Brute Force takes too long in the final dataset with 1000 pictures, so it will not be analyzed on that input file.
## 3.2 - Results
Below are graphs for each dataset used
![Size 10 Results](https://github.com/smu-cs-3353/22s-pa01-sussybaka/blob/README_Creation/Algorithm%20Analysis/Graphs/Size%2010.png)
![Size 15 Results](https://github.com/smu-cs-3353/22s-pa01-sussybaka/blob/README_Creation/Algorithm%20Analysis/Graphs/Size%2015.png)
![Size 50 Results](https://github.com/smu-cs-3353/22s-pa01-sussybaka/blob/README_Creation/Algorithm%20Analysis/Graphs/Size%2050.png)
![Size 100 Results](https://github.com/smu-cs-3353/22s-pa01-sussybaka/blob/README_Creation/Algorithm%20Analysis/Graphs/Size%20100.png)
![Size 1000 Results](https://github.com/smu-cs-3353/22s-pa01-sussybaka/blob/README_Creation/Algorithm%20Analysis/Graphs/Size%201000.png)
In each graph, the different lines represent the different algorithms used. 
- Blue is Brute Force
- Orange is The Custom Algorithm
- Grey is the High-Value Algorithm


The trial number is on the x-axis, and the wall value for the algorithm is on the y-axis.</br>
Below is another plot that shows the relationship among the three algorithms on all datasets.
![Comparizon of All Algorithms on All Datasets](https://github.com/smu-cs-3353/22s-pa01-sussybaka/blob/README_Creation/Algorithm%20Analysis/Graphs/Average%20Wall%20Value%20vs.%20Dataset%20Size.png)
In this graph, each line and color represents a different algorithm. The x-axis represents the dataset size, and the y-axis represents the average value for that data for each algorithm.
## 3.3 - Analysis
As expected, the <strong>High-Value Algorithm</strong> almost always gave the worst wall value, and the <strong>Brute Force Algorithm</strong> always gave the best value. Since the <strong>Brute Force Algorithm</strong> examines every combination, the result will always be the best combination. As for the <strong>High-Value Algorithm</strong>, it is expected to give a result that isn't very great since it only picks the pictures with the highest value and doesn't take the width of the picture into consideration. The <strong>Custom Algorithm</strong> is expected to do better than the <strong>High-Value Algorithm</strong> since it takes both the width of the picture and the value into consideration. Interestingly, the <strong>Custom Algorithm</strong> gave results that were usually very close to the <strong>Brute Force Algorithm</strong> meaning that although it is suboptimal, it is still not a bad choice when choosing an algorithm for this problem.
