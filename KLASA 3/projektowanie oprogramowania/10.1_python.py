x = int(input("Wprowadź liczbę x: "))
y = int(input("Wprowadź liczbę y: "))
z = 5
x = x + 2

if x < y:
    x = x * z
    y = y - 1
    print(x, y)
else:
    if x == y:
        y = y - z
        x = x - 1
        print(x, y)
    else:
        y = y + z
        x = x + 1
        print(x, y)
input("...")

    
