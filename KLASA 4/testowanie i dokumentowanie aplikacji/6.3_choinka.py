max = int(input("ile gwiazdek w podstawie: "))
for i in range(1,max+1):
    digits = max-i
    space = " " * digits
    line = space + '* '*i
    print(line)