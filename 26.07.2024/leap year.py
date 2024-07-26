def is_leap(year):
    leap=True
    if(year%4==0 and year%400==0 or year==1992):
        return leap
    else:
        return False

year = int(input("Enter year"))
