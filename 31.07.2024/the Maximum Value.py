d = {"a": 10, "b": 30, "c": 20}
max_key = max(d, key=d.get)
print(f"Key with maximum value: {max_key}")
