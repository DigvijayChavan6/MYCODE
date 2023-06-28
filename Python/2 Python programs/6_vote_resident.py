age=int(input('Enter her/his age:'))
if age>=18:
    res=int(input('If she/he is resident of india then enter 1, if not enter 0:'))
    if res==1:
        print('She/He is eligible for vote')
    else:
        print('She/He is NOT eligible for vote')
else:
    print('She/He is NOT eligible for vote')