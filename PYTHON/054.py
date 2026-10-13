
print("Existing content in sample file:")
with open("sample.txt") as r:
    print(r.read())
print()

string = input("\nEnter string to Write to file: ")

print("Appending entered string to sample file...")
with open("sample.txt", "a") as a:
    a.write('\n')
    a.write(string)

print("\nDisplaying Updated Content")
with open("sample.txt") as r:
    print(r.read())
print()
