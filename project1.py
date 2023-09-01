import random
import datetime 


class Date:
    @classmethod
    def date(cls):
        year = input("Year: ")
        month = input("Month: ")
        day = input("Day: ")
        return f"{year}.{month}.{day}"   
    

def main():

    birthdate = Date.date()

    year, month, day = birthdate.split(".")

    if int(year) > 2023 or int(year) < 1900:
        raise ValueError("Invlaid year")
    elif  int(month) < 1 or int(month) > 12:
        raise ValueError("Invlaid month")
    elif int(day) < 1 or int(day) > 31:
        raise ValueError("Invlaid month")
    else:
        print(True)

    x = birthdate.split(".")
    y = int(x[0])
    m = int(x[1])
    d = int(x[2])

    print(birth(y,m,d))

    
def birth(r,s,t):
    Date = datetime.date(r,s,t)
    month = Date.strftime("%B")
    day = Date.strftime("%d")
    print(f"born on {month} {day}")
    return zodiac(month, day)

def zodiac(r,s):
    if r == "March" and 21 <= int(s) <= 31 or r == "April" and 1 <= int(s) <= 19:
        Z = "Aries"
        print(Z)
        return flavour(Z)
    elif r == "April" and 20 <= int(s) <= 30 or r == "May" and 1 <= int(s) <= 20:
        Z = "Taurus"
        print(Z)
        return flavour(Z)
    elif r == "May" and 21 <= int(s) <= 31 or r == "June" and 1 <= int(s) <= 20:
        Z = "Gemini"
        print(Z)
        return flavour(Z)
    elif r == "June" and 21 <= int(s) <= 30 or r == "July" and 1 <= int(s) <= 22:
        Z = "Cancer"
        print(Z)
        return flavour(Z)
    elif r == "July" and 23 <= int(s) <= 31 or r == "August" and 1 <= int(s) <= 22:
        Z = "Leo"
        print(Z)
        return flavour(Z)
    elif r == "August" and 23 <= int(s) <= 31 or r == "September" and 1 <= int(s) <= 22:
        Z = "Virgo"
        print(Z)
        return flavour(Z)
    elif r == "September" and 23 <= int(s) <= 30 or r == "October" and 1 <= int(s) <= 22:
        Z = "Libra"
        print(Z)
        return flavour(Z)
    elif r == "October" and 23 <= int(s) <= 31 or r == "November" and 1 <= int(s) <= 21:
        Z = "Scorpio"
        print(Z)
        return flavour(Z)
    elif r == "November" and 22 <= int(s) <= 30 or r == "December" and 1 <= int(s) <= 21:
        Z = "Sagittarius"
        print(Z)
        return flavour(Z)
    elif r == "December" and 22 <= int(s) <= 31 or r == "January" and 1 <= int(s) <= 19:
        Z = "Capricon"
        print(Z)
        return flavour(Z)
    elif r == "January" and 20 <= int(s) <= 30 or r == "February" and 1 <= int(s) <= 18:
        Z = "Aquarius"
        print(Z)
        return flavour(Z)
    elif r == "February" and 19 <= int(s) <= 29 or r == "March" and 1 <= int(s) <= 20:
        Z = "Pisces"
        print(Z)
        return flavour(Z)

def flavour(r):
    if r:
        return random.choice(["Chocolate", "Vanilla", "Strawberry", "Kiwi", "Kitkat", "Oreo"])

if __name__ == "__main__":
    main()

