import math
class circulo:
    def __init__(self,radio):
        self.radio=radio
    def calcula_area(self):
        area=math.pi * self.radio**2
        print(f"el areea es {area}")
    def calcular_perimetro(self):
        perimetro=(2*math.pi)*self.radio
        print(f"el perimetro es {perimetro}")
    def modifica_radio(self):
        nuevo_radio=int(input("inserte un nuevo radio: "))
        self.radio = nuevo_radio
circulotest=circulo(6)
ciclo=True
circulotest=circulo(6)
while ciclo==True:
    circulotest.calcula_area()
    circulotest.calcular_perimetro()
    circulotest.modifica_radio()