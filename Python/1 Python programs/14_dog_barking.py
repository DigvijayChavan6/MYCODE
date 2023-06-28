hour=int(input('Enter hour between 0 and 23:'))
b=int(input('Enter 1 for dog barking and for not enter 0:'))
if b==1 and (hour<6 or hour>20):
    print('We are in trouble')
elif b==0 and (hour>=6 or hour<=20):
    print('We are NOT in trouble')
else:
    print('Enter valid input')