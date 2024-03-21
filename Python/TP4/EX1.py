class Compte:
    def __init__(self, nom, numero, balance):
        self.nom = nom
        self.numero = numero
        self.balance = balance

    def deposer(self, montant):
        self.balance += montant

    def retirer(self, montant):
        if self.balance >= montant:
            self.balance -= montant
        else:
            print("Solde insuffisant.")

asmaa_compte = Compte("Asmaa", 12345, 20000)

asmaa_compte.deposer(3000)

asmaa_compte.retirer(800)

print("Le solde du compte d'Asmaa est de", asmaa_compte.balance, "DH")
