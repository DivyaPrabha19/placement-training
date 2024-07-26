Task
Given an integer, , perform the following conditional actions:

If  is odd, print Weird
If  is even and in the inclusive range of  to , print Not Weird
If  is even and in the inclusive range of  to , print Weird
If  is even and greater than , print Not Weird
Input Format

A single line containing a positive integer, .

Constraints

Output Format

Print Weird if the number is weird. Otherwise, print Not Weird.

Sample Input 0

3
Sample Output 0

Weird




answer:
n = int(input())
    if(n%2==0 and (n==2 or n==3 or n==4 or n==5)):
        print("Not Weird")
    elif(n%2==0 and (n==6 or n==7 or n==8 or n==9 or n==10 or n==11 or n==12 or n==13 or n==14 or n==15 or n==16 or n==17 or n==18 or n==19 or n==20)):
        print("Weird")
    elif(n%2==0 and n>20):
        print("Not Weird")
    else:
        print("Weird")
