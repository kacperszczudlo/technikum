a=3
b=-2
c=10
if a + b < c:
    a*=2
    b-=1
    if c>0:
        c+=a
        print(a,b,c)
    else:
        c+=b
        print (a,b,c)
else:
    c+=a*b
    print (a,b,c)
input ("podaj kolejne zeby kontunowac..")
