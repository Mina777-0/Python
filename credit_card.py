from cs50 import get_int

a = 16
card_number = []

for i in range(a):
    n = get_int("Number: ")
    card_number.append(n)

sum1 = 0
for i in range(len(card_number)):
    if i %2 == 0:
       x = card_number[i] * 2
       if x > 9:
        sum1 = sum1 + x %10 + x//10
        print(sum1) 
       else:
          sum1 = sum1 + x 
          print(sum1)

sum2 = 0
for j in range(len(card_number)):
    if j %2 != 0:
      sum2 = sum2 + card_number[j]
    result = sum2 + sum1
    
print(sum1)
print(result)

if result % 10 == 0:
   print("Valid card")
else:
   print("Invalid Card")

if card_number[0] == 3 and card_number[1] in [3,7]:
   print("AMEX")
elif card_number[0] == 5 and card_number[1] in range(1,6):
   print("MASTER CARD")
elif card_number[0] == 4:
   print("VISA")
