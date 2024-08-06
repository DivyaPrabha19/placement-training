students = {
    "Alice": 85,
    "Bob": 90,
    "Charlie": 78
}

name = input("Enter student's name: ")
if name in students:
    print(f"{name}'s score: {students[name]}")
else:
    print(f"{name} not found in records")
