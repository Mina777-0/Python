import string

text = input("Text: ")

s = 0
p = 0
for i in range(len(text)):
    if text[i] in string.whitespace:
        s += 1
    elif text[i] in string.punctuation:
        p +=1
    else:
        c = len(text)

count_letters = c - s - p
count_words = s + 1

sn = 0
for i in range(len(text)):
    if text[i] in [".","!","?"]:
        sn += 1
count_sentences = sn

print(count_letters)
print(count_words)
print(count_sentences)

words_perc = (count_letters / count_words) * 100
sentences_perc = (count_sentences / count_words) * 100

print(f"{words_perc:.2f}")
print(f"{sentences_perc:.2f}")

Index = 0.0588 * words_perc - 0.296 * sentences_perc - 15.8

x = round(Index, 0)

print(f"Grade: {x}")
