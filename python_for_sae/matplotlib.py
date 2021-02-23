import matplotlib.pyplot as plt
import numpy as np

x = np.linspace(0, 2*np.pi, 50)
y1 = np.sin(x)
y2 = np.cos(x)

plt.figure()
plt.plot(y1)
plt.plot(y2)

y2 = np.sin(2*x)

plt.figure()
plt.plot(y2)

plt.plot([2*np.pi]*2, [-2,2])
plt.plot(x, y1, 'r-.o')
plt.plot(x, y1, 'k.')
plt.clf()

plt.plot(x, y1, 'g-o', x, y2, 'b-+')
plt.legend(['sin(x)', 'sin(2x)'])