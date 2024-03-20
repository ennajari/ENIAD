class animal:
    def __init__(self):
        self.age = 0
    @staticmethod
    def est_vieux(age_limite,animal_age):
        return animal_age >= age_limite
age_limite = 10
animal1 = animal()
if animal.est_vieux(age_limite,animal1.age):
    print("Cet animal est considéré comme vieux.")
else :
    print("Cet animal n\'est considéré comme vieux.")