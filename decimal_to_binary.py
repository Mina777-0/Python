def main():
    import cs50

    c = []

    for i in range(2):
       n = cs50.get_int("Number: ")
       c.append(n)
       b = is_binary(c[i])
       print(f"Binary = {b}")


def is_binary(x):

    b = []

    for _ in range(8):
     if x != 0:
      c = x % 2
      x = x // 2
      print(c,end=" ")
      b.append(c)
    b.reverse()
    return b

main()