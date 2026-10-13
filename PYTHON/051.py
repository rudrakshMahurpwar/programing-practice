string1 = input("Enter string to Write to the file: ")
string2 = "File Handling is easy."

print("Writting to the file...")
with open("sample.txt" , "w") as f:
    f.write(string1)
    f.write('\n')
    f.write(string2)
print("Written into the file\n")

print("Reading from the file...\n")
with open("sample.txt") as f:
    print(f.read())
print("\nFile closed after reading")
