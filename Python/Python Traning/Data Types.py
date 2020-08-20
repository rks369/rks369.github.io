class Product:

    def __init__(self, name="Dell XPS 13", description="Updated XPS", price=120000):
        self.name = name
        self.description = description
        self.price = price


p1 = Product("Dell Inspiron")

print(p1.name)
print(p1.description)
print(p1.price)
