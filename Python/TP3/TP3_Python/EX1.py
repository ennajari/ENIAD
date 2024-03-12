pythoniista = [1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 10]
pythoniista2 = []

for i in pythoniista:
    if i not in pythoniista2:
        pythoniista2.append(i)

print(pythoniista2)
