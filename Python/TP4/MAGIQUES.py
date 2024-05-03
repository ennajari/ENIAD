class Animal:
    def __init__(self, nom, espece, age = 0):
        self.nom = nom
        self.espece = espece
        self.age = age
    def __str__(self):
        return "Bonjour, je m'appelle {} et je suis un {} de {} ans".format(self.nom, self.espece, self.age)
    def make_sound(self):
        pass # Here, you can implement the specific sound of each animal

animal1 = Animal('Lily', 'chat', 0.5)
animal1.make_sound() # This will call the make_sound method for the animal1 object
