T = int(input("Donner un temps T :"))
heures = T // 3600
minutes = (T % 3600) // 60
secondes = (T % 3600) % 60

print(f"{T} secondes équivaut à {heures} heures, {minutes} minutes, et {secondes} secondes.")

