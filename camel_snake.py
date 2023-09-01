text = input("CamelCase: ")

c = ""

for i in range(len(text)):
    if text[i].isupper():
        c += "_" + text[i].lower()
    else:
        c += text[i]

print(f"Snake_Case: {c}")
        