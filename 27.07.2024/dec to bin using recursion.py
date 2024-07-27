def convbin(n):
  if n>1:
       convbin(n//2)
  print(n%2,end="")
print("The binary of the given number:")

n=input()
convbin(n)  
