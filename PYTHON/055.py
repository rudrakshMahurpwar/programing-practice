rf = open("052.txt")

word = input("Enter Word to check for: ")

for line in rf:
    if word in line:
        print(line, end = '')

rf.close()
