d = {'A': -4, 'B':10, 'C':-5, 'D':3}

#solution 1
results = {}
for key in d:
    if d[key] > 0:
        results[key] = d[key]
print(results)

#solution 2
results2 = {key:value for key, value in d.items() if value > 0}
print(results2)