# Program to Demonstrate Decision Making
# Find Greater of 3 Nos
a = input('Enter No 1 : ')
b = input('Enter No 2 : ')
c = input('Enter No 3 : ')
if(a > b):
    if(a > c):
        print("Greater No : ", a)
    else:
        print("Greater No : ", c)
else:
    if(b > c):
        print("Greater No : ", b)
    else:
        print("Greater No : ", c)
