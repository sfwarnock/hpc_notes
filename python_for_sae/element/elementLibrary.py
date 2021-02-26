'''
elements = {1:{'Atomic Number': 1, 'Name': 'Hydrogen', 'Symbol': 'H', 'Atomic Weight': 1.008},
            2:{'Atomic Number': 2, 'Name': 'Helium', 'Symbol': 'He', 'Atomic Weight': 4.002},
            3:{},
            4:{},
            }

print(elements[1], elements[2])
'''

class hydrogen(object):
    '''A class to get Periodic Table of Element properties'''
    def __init__(self, element = 'Hydrogen'):
        self.element = element
    def atomicNumber(self):
        return 1
    def elementName(self):
         return 'Hydrogen'
    def symbol(self):
        return 'H'
    def atomicWieght(self):
        return 1.008
    def properties(self):
        print(self.atomicNumber())
        print(self.elementName())
        print(self.symbol())
        print(self.atomicWieght())

h = hydrogen()
h2 = hydrogen()

h.properties()
h2.properties()