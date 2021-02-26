# Scott Warnock 2021.02.25
# class_element
# this class is intended to make an object which contains element properties for use in other classes/functions.
#   iron = element(26)
#   enter the atomic number to access the elements data

'''
elementsLib
compound
atmosphere
atmosphereIO
'''

import elementLibrary as eleLib

hydrogen = eleLib.hydrogen()

doubleAW = hydrogen.atomicWieght() * 2

print(doubleAW)
