import random


def createFile(numPics, minWidth, maxWidth, minHeight, maxHeight, minVal, maxVal, Filename):
    file = open(Filename, 'w')
    file.write(f"{maxWidth} {maxHeight}\n")
    file.write(f"{numPics}\n")
    for i in range(1, numPics):
        randWidth = random.randint(minWidth, maxWidth)
        randHeight = random.randint(minHeight, maxHeight)
        randVal = round(random.uniform(minVal, maxVal), 2)
        file.write(f"{i} {randVal} {randWidth} {randHeight}\n")
    randWidth = random.randint(minWidth, maxWidth)
    randHeight = random.randint(minHeight, maxHeight)
    randVal = round(random.uniform(minVal, maxVal), 2)
    file.write(f"{numPics} {randVal} {randWidth} {randHeight}")
    file.close()




numPics = 10
minWidth = 1
maxWidth = 1024
minHeight = 1
maxHeight = 768
minVal = 1
maxVal = 10000
Filename = "test.txt"
createFile(numPics, minWidth, maxWidth, minHeight, maxHeight, minVal, maxVal, Filename)
