print("Reading contents from file...")

f1 = open("sample.txt")

print("Writing contents to file...")
with open("053.txt", "w") as w:
    string = f1.read()
    w.write(string)

print("Contents written to file")            
f1.close()
