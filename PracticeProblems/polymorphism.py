class India():
    def capital(self):
        print("ND is the capital of India.")

class USA():
    def capital(self):
        print("Washington D.C. is the capital of the USA.")
        
class car():
    # init method or constructor
    def __init__(self, model, color):
        self.model = model
        self.color = color
    
    def show(self):
        print("Model is", self.model)
        print("Color is", self.color)
        
obj_ind = India()
obj_usa = USA()
obj_car = car("Toyota", "Jeep")

for val in (obj_ind, obj_usa, obj_car):
    if(hasattr(val, 'capital')):
        val.capital()
    if(hasattr(val, 'show')):
        val.show()