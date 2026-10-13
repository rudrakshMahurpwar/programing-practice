string = """Need for File Handling
1. Store data permanently, even after the program ends.
2. Access external files like .txt, .csv, .json, etc.
3. Process large files efficiently without using much memory.
4. Automate tasks like reading configs or saving outputs."""

print("Writing data to file...")

with open("052.txt", "w") as w:
    w.write(string)

line = words = characters = 0

print("Counting lines in file...")
print("Reading Words in file...")
print("Reading Characters in file...")
with open("052.txt", "r") as rl:
    for l in rl:
        l = l.split()
        line +=1
        for w in l:
            words += 1
            for c in w:
                characters += 1
print("Total Lines in file:", line)
print("Total Words in file:", words)
print("Total Characters in file:", characters)
