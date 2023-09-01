
def main():
    b = input("enter a password: ")

    print(is_valid(b))


def is_valid(x):
    for i in range(len(x)):
            if x[i].isupper():
                a = True
            if x[i].islower():
                b = True
            if x[i].isnumeric():
                c = True
            if not x[i].isalnum():
                d = True
    try: 
        if a == True and b == True and c == True and d == True:
            return True
    except UnboundLocalError:
        return f"the password must contain at least one small letter, one capital letter, one digit, and a symbol"
    

main()