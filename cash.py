#This Code calculate is Harvard Pset which calculate the coins for cashier

def main():
    try:
        x = int(input("change owed: "))
        print(f"{Penny(x)} pennies")
        print(f"{Nickle(x)} nickles")
        print(f"{Dime(x)} dimes")
        print(f"{Quarter(x)} quarters")


    except ValueError:
        print("Invlaid input")
        main()
    

def Penny(a):

    if 1 <= a <= 4:
        return a
    elif a >= 5:
        return Penny(a - 5)
    else:
        return 0

def Nickle(a):
    if 5 <= a <= 9:
        return 1
    elif a > 9:
        return Nickle(a - 19) # I added 9+5+5
    else:
        return 0

def Dime(a):
    if 10 <= a <= 19:
        return 1
    elif 20 <= a <= 24:
        return 2
    elif a > 25:
        return Dime(a - 25)
    else:
        return 0
    
def Quarter(a):
    if 25 <= a <=49 :
        return 1
    elif 50 <= a <= 74:
        return 2
    elif 75 <= a <= 99:
        return 3
    elif a >= 100:
        return 4
    else:
        return 0
    
main()