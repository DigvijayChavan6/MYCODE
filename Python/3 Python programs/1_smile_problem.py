print('Type "yes" if person is smiling, if not smiling type "no" ')
x=input('x person is smiling?=')
y=input('y person is smiling?=')
if x==y:
    if x=='no' and y=='no':
        print('We are in problem')
    elif x=='yes' and y=='yes':
        print('We are in problem')
    else:
        print('Enter valid input')
else:
    if (x=='yes'and y=='no') or (x=='no' and y=='yes'):
        print('We are NOT in problem')
    else:
       print('Enter valid input') 
    