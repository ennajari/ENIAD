#Encapsulation
class Animal:
    def __init__(self,age=0):
        self.age = 0
    @property
    def GetAge(self):
        return self.age

    def ve(self):
        self.age = self.age+1
animal1 = Animal()
animal1.ve()
print(animal1.GetAge)
