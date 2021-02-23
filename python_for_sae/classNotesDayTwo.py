# tuple
hydrogen = 1, 'Hydrogen', 'H', 1.0008
hydrogen = hydrogen + ('Shell: 1',)
print(hydrogen)

# for loops
a = [-1, 2, 0, 1, -100, 1000]

negvals = []
posvals = []

for n in a:
    if n >= 0:
        posvals.append(n)
    else:
        negvals.append(n)

print(negvals, posvals)

