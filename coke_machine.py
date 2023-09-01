coins = [25, 10, 5]

money_required = 50
print(f"owed amount = {money_required}")


while True:
    try: 
        money = int(input("inserted coin: "))
    except ValueError:
        print("invlaid input")
    if money in coins: 
        money_required -= money
   
    if money_required == 0:
        print("PAID")
        break
    elif money_required > 0:
        print(f"due amount = {money_required}")
    else:
        print(f"your change = {-money_required}")
        break
