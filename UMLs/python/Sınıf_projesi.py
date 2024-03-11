class Person(object):
    def __init__(self,sınıf,ad,yaş):
        
        self.sınıf = sınıf
        self.ad = ad
        self.yaş = yaş

    
class Student(Person):
    def __init__(self,sınıf,ad,yaş,ögr_no):
        super().__init__(sınıf,ad,yaş)

        self.ögr_no = ögr_no
        
    def ögr_bilgi_getir(self):
        return f"Öğrenci Adı:{self.ad}\nSınıf:{self.sınıf}\nYaş:{self.yaş}\nÖğrenci No:{self.ögr_no}\n "
    
   
class Teacher(Person):
    def __init__(self,sınıf,ad,yaş,ders):
        super().__init__(sınıf,ad,yaş)

        self.ders = ders
        
    def hoca_bilgi_getir(self):
        return f"Öğretmen Adı:{self.ad}\nDers:{self.ders}\n "
    




öğretmenler = [
    Teacher("8/A","Fatma",25,"Matematik"),
    Teacher("3/C","Mustafa",32,"Türkçe"),
    Teacher("3/C","Emre",32,"Matematik"),
    Teacher("8/C","Kamil",27,"İngilizce"),
    Teacher("1/A","Burak",30,"Hayat Bilgisi")  
]

öğrenciler = [
    Student("5/A","Esra",9,2121169475),
    Student("6/C","Apo",17,2127699475),
    Student("2/A","Şeyda",32,12976179246),
    Student("7/B","İrem",15,2247169475),
    Student("11/C","Emine",40,557746358)  
]


print("*********Öğretmenler*********\n")
for i in öğretmenler:
    print(i.hoca_bilgi_getir())

print("*********Öğrenciler*********\n")
for i in öğrenciler:
    print(i.ögr_bilgi_getir())