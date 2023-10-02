import re

period = input("Hours: ")

t = re.search(r"([0-9]+)(?:\:)?([0-9]+)? (AM)?(PM)? to ([0-9])+\:([0-9]+) (PM)?(AM)?", period, re.IGNORECASE)

if t.group(3):
    if t:
        h = int(t.group(5)) + 12

        if not t.group(2):
            time = "0" + t.group(1) + ":" + "00" + " to " + str(h) + ":" + t.group(6)

        else:
            time = t.group(1) + ":" + t.group(2) + " to " + str(h) + ":" + t.group(6)

        print(time)

elif not t.group(3):
    if t:
        h = int(t.group(1)) + 12
        time = str(h) + ":" + t.group(2) + " to " + t.group(5) + ":" + t.group(6)

    print(time)

else:
    print("no match")
