import re 
import sys

def main():
    print(convert(input("Hours: ")))

def convert(s):

    x = re.search(r"([0-9]+)(?:\:)?([0-9]+)? (AM)?(PM)? to ([0-9]+)(?:\:)?([0-9]+)? (PM)?(AM)?", s, re.IGNORECASE)

    if x.group(3):
        y = int(x.group(5)) + 12

        if x.group(2):
            t = "0" + x.group(1) + ":" + x.group(2) + " to " + str(y) + ":" + x.group(6)
            return t 
        
        else: 
            t = "0" + x.group(1) + ":" + "00" + " to " + str(y) + ":" + "00"
            return t
        
    elif not x.group(3):
        y = int(x.group(1)) + 12

        if x.group(2):
            t = str(y) + ":" + x.group(2) + " to " + x.group(5) + ":" + x.group(6)
            return t
        else: 
            t = str(y) + ":" + "00" + " to " + x.group(5) + ":" + "00"
            return t
    else:
        return sys.exit("Invalid format")
    

if __name__ == "__main__":
    main()        


from test1 import convert
import unittest

class Test(unittest.TestCase):
    def test1(self):
        self.assertTrue(convert(x))

x = input("Hours: ")

if __name__ == "__main__":
    unittest.main()