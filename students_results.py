
n = int(input("How many assessments: "))

def main():
    c = []
    try:
       for i in range(n):
            x = int(input(f"assessment{i+1}: ")) 
            c.append(x)
    except ValueError:
        print("Invalid input")
    else:
        m = mean(c)
        p = percentage(c)
        f_q = first_quartile(c)

        print(f"mean = {m}, percentage = {p}, first_quartile = {f_q}")
        
def mean(*x):
    return sum(*x)/len(*x) 
    

def percentage(*x):
    return round((sum(*x) / (10*n)) * 100, 3)

def first_quartile(*x):
    return round(0.75 * sum(*x), 2)

if __name__ == "__main__":
    main()