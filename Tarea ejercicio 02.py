class rectangulo:
    def __init__(self,ancho,longitud):
        self.ancho=ancho
        self.longitud=longitud
    def calcula_area(self):
        area=self.ancho * self.longitud
        print(f"el area es de {area}")
    def calcula_perimetro(self):
        perimetro=2*(self.ancho + self.longitud)
        print(f"el perimetro es {perimetro}")
    def modifica_ancho(self):
        nuevo_ancho=int(input("inserte un nuevo ancho: "))
        self.ancho=nuevo_ancho
    def modifica_largo(self):
        nueva_longitud=int(input("inserte una nueva longitud: "))
        self.longitud=nueva_longitud
rectangulo_test=rectangulo(4 , 5)
ciclo=True
while ciclo==True:
    rectangulo_test.calcula_area()
    rectangulo_test.calcula_perimetro()
    rectangulo_test.modifica_ancho()
    rectangulo_test.modifica_largo()