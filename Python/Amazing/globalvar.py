
def my():
    global p
    print(p)
    
p=0
my():
p=9
print(p)
my()