class Student:
    def __init__(self,name,age,grade):
        self.name = name
        self.age = age
        self.grade = grade
    def get_grade(self):
        return self.grade 
class Cours:
    def __init__(self,name,max_student,student=[]):
        self.name = name
        self.max_student = max_student
        self.student = student
    def  add_student(self,student):
        if len(self.student) < self.max_student:
            self.student.append(student)
        else:
            print("Nomber maximal d'etudiant atteint.")
    def get_average_grade(self):
        value = 0
        for student in self.student:
            value += student.get_grade()
        return value /len(self.student)
s1 = Student('nnnn',1,2)
s2 = Student('aaa',9,4)
s3 = Student('aaaxxx',3,5)
s4 = Student('zzzddd',2,7)

Cours = Cours("science",2)
Cours.add_student(s1)
Cours.add_student(s2)
Cours.add_student(s3)
print(Cours.get_average_grade())
