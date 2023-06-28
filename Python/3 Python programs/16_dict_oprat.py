dict={'Name':'Digvijay','Age':20,'Roll_no':3213}
x={'Age':21}
print('Dictionary before:',dict)
dict.update(x)
print('Dictionary after updation:',dict)
dict.pop('Age')
print('Dictionary after pop():',dict)
dict.popitem()
print('Dictionary after popitem():',dict)
dict.clear()
print('Dictionary after clear():',dict)