numbers = list(map(int, input("Enter numbers: ").split()))
even_squares = [x**2 for x in numbers if x % 2 == 0]
print("Even squares:", even_squares)
