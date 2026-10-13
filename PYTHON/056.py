with open("052.txt") as rf:
    old = rf.read()

print("Previous contents are\n", old)
print()

word = input("Enter word to replace: ")
rep = input("Enter word to replace with: ")

wf = open("056.txt", "w")
with open("052.txt") as rf:
    # old = rf.readline()
    for old in rf:
        old = old.split()
        for i, w in enumerate(old):
            if w == word:
                old[i] = rep
        new = " ".join(old)
        wf.write(new)
        wf.write('\n')
wf.close()


print("Modified data written to new file\n")

print("Modified text is:")
with open("056.txt") as rf:
    print(rf.read())
