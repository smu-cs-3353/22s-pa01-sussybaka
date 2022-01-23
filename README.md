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
