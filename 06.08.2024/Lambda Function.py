numbers = list(map(int, input("Enter numbers: ").split()))
squared_numbers = list(map(lambda x: x**2, numbers))
print("Squared numbers:", squared_numbers)
