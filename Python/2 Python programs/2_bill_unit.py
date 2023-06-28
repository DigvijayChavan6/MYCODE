u=int(input('Enter no. of units consumed:'))
if u>=1 and u<=100:
    bill=10*u
elif u>=101 and u<=200:
    u=u-100
    bill=u*15+100*10
elif u>=201 and u<=300:
    u=u-200
    bill=u*20+200*15
else:
    u=u-300
    bill=u*25+300*20
print('Total electric bill Rs.',bill)
    