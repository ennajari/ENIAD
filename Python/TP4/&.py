class Compte:
    def __init__(self,nom,num,balance):
        self.nom = nom
        self.num = num
        self.balance = balance
        
    def Depot(self,montant):
         self.balance += montant
    
    def Retire(self,montant):
        if(montant<=0) :  
            print("Vous ne pouvez pas retirer un montant nul ou negatif.") 
        elif(montant>self.balance):        
            print("Le solde de votre  compte est insuffisant.")     
        else:      self.balance -= montant
    
client = Compte("ASMA",1288,20000)    
client.Depot(5000)
print(f"Le nouveau solde du client est {client.balance}")
client.Retire(3000)
print(f"Le nouveau solde du client après retrait est {client.balance}\n")
print(client.__dict__)
