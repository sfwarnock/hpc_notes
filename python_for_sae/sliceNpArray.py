import numpy as np

a = np.arange(25).reshape(5, 5)
print(a)

b = a[4, ]
print(b)

c = a[:, 1]
print(c)

d = a[1, 0:3:2]
print(d)

e = a[3, 0:3:2]
print(e)

f = a[1::2, :3:2]
print(f)