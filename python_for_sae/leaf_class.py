class Leaf():
    """A leaf falling in the woods."""
    def __init__(self, color = 'green'):
        self.color = color
    def __str__(self):
        return f"This is a {self.color} leaf."
    def __repr__(self):
        return f"Leaf(color={self.color}."
    def fall(self):
        print("Splat!")
        self.rustle()
    def rustle(self, num=1):
        print("Woosh " * num)

leaf = Leaf()

print(leaf)

class P():
    def __init__(self, c=1):
        self.c = c
        print(type(self), id(self))

p = P()
p2 = P()
