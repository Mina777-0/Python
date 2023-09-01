class Jar:
    def __init__(self, capacity = 12):
        if capacity < 0:
            raise ValueError("capacity is positive")
        self.size = 0
        self.capacity = capacity

    def __str__(self):
        return self.size * "\U0001F36A"
    
    def deposit(self, n):
        if n > self.capacity:
            raise ValueError("Exceeded limits")
        if self.size + n > self.capacity:
            raise ValueError("Exceeded limits")
        
        self.size += n

    def withdraw(self, n):
        if self.size < n:
            raise ValueError("empty jar")
        self.size -= n

    @property
    def capacity(self):
        return self._capacity
    @capacity.setter
    def capacity(self, capacity):
        self._capacity = capacity

    @property
    def size(self):
        return self._size
    @size.setter
    def size(self, size):
        self._size = size


n = int(input("Number: "))   
jar = Jar()
jar.deposit(n)
jar.withdraw(2)
print(jar)

