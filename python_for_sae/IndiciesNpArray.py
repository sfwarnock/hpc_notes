import numpy as np

a = np.arange(0, 80, 10)
print(a)

indices = [1, 2, -3]
print(a[indices])

mask = np.array([1, 0, 1, 0, 0, 1, 0, 1], dtype=bool)
print(a[mask])

x = np.arange(25).reshape(5,5)
print(x)

rows = [0, 1, 2, 3]
cols = [3, 1, 0, 4]

y = x[rows, cols]
print(y)

mask2 = x % 3 == 0
z = x[mask2]
print(z)