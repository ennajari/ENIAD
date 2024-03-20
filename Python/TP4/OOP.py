class animial:
    def __init__(self,nom,espace,age=0):
        self.nom = nom
        self.espace = espace
        self.age = age
    def se_presenter(self):
        print(f"Je suis {self.nom}, je mesure {self.espace} et j'ai {self.age}")
        
chat = animial("Minou","chat")
chat.se_presenter()
print(chat.__dict__)
              