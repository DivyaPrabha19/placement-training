def caesar_cipher(text, shift):
    encrypted = ""
    for char in text:
        if char.isalpha():
            shift_base = ord('A') if char.isupper() else ord('a')
            encrypted += chr((ord(char) - shift_base + shift) % 26 + shift_base)
        else:
            encrypted += char
    return encrypted

text = input("Enter text: ")
shift = int(input("Enter shift: "))
print("Encrypted text:", caesar_cipher(text, shift))
