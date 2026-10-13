with open("sample.txt") as r:
    r1 = r.read()
with open("052.txt") as r:
    r2 = r.read()

with open("057.txt", "w") as w:
    w.write(r1)
    w.write("\n")
    w.write(r2)

print("New file created with following contents:")

with open("057.txt") as r:
    print(r.read())
print()
