listD = [1, 2, 2, 3, 4, 5, 5, 5, 6, 7, 7, 8, 9, 10]
resultat = list(set(listD))

print(resultat)



# Example of inheritance and polymorphism
class Animal:
    def make_sound(self):
        pass

class Dog(Animal):
    def make_sound(self):
        print("Woof")

class Cat(Animal):
    def make_sound(self):
        print("Meow")

# Polymorphic behavior
def make_animal_sound(animal):
    animal.make_sound()

dog = Dog()
cat = Cat()
make_animal_sound(dog)  # Output: Woof
make_animal_sound(cat)  # Output: Meow
