class Compte:
    def __init__(self,nom,num,balance):
        self.nom = nom
        self.num = num
        self.balance = balance
    def Depot(self,amount):
        self.balance += amount
    def Retirer(self,amount):
        if amount <= self.balance:
            self.balance -= amount
        else:
            print("hhhhhh seeer tqwed")
        
client1 = Compte('ASMA',1234,100)

client1.Retirer(500)

print(client1.nom,client1.num,client1.balance)
