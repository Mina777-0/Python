from datetime import date
import sys
import inflect  


p = inflect.engine()
x = input("Date of birth: ")
try:
    Date = date.fromisoformat(x)
    if not Date:
        sys.exit()
except ValueError:
    print("Invalid date")

else:

    date1 = Date
    date2 = date.today()
    period = date.__sub__(date2, date1)
    
    age_days = period.days
    age_minutes = round(age_days * 24 * 60)

    age_words = p.number_to_words(age_minutes)

    print(date1)
    print(date2)
    print(age_words, "minutes")
    
