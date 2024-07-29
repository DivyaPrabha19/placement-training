elements = [1, 2, 3, 4, 2, 2, 5]
element_to_remove = 2
filtered_elements = [e for e in elements if e != element_to_remove]
print("The list after removing all occurrences of", element_to_remove, "is:", filtered_elements)
