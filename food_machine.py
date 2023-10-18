import sys

def Order():
    menu = {
        "coke": 5.5,
        "water": 2.0,
        "tea": 3.0,
        "coffee": 3.5,
    }
    total = 0
    try:
        for _ in range(10):
            x = input("put your order: ")
            if x in menu:
                total += menu[x]
            else:
                print("your order isn't on the menu")
    except EOFError:
        print("end of order")

    print(f"The total amount is ${total}")

    print(pay_machine(total))


def pay_machine(x):

    coins = [25, 10,5]

    debit = x

    try:
        x = int(input("enter a coin: "))
    except ValueError:
        print("invlaid input")
    if x in coins:
        debit -= x
        if debit == 0:
            sys.exit(f"Paid")
            
        elif debit < 0:
            sys.exit(f"we owe you ${- debit}")
        else:
            print(f"change = ${debit}")
            pay_machine(debit)
            
    else:
        print("The machine accepts only 5,10,20")

Order()
