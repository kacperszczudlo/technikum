#importujemy czas w czasie rzeczywistym
import datetime

#definiujemy x jako date
x = datetime.datetime.now()

#wyswietlamy dzisiejsza date
print("Dzisiejsza data to: ",x.strftime("%A"),x.day,x.month,x.year)