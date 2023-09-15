def main():
    text = input("Text: ")
    Filter(text)

def Filter(x):
    a = "@#$%&*!"
    c = ""

    for i in x:
        if i in a:
            c += ""
        else:
            c += i
    return evaluate(c)
    

def evaluate(m):
    a = ["asshole", "fuck", "cunt", "fucker", "fucking", "motherfucker", "blood", "slaughter", "stupid", "idiot", "imbacile"]

    wordlist = m.split(" ")    
    
    for j in wordlist:
        if j in a:
           print("you have used improper language")

if __name__ == "__main__":
    main()