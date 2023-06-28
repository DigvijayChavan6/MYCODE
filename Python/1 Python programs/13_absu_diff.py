n=int(input('Enter any no.='))
if n>=10:
    print('Double of Absolute difference:',(2*(n-10)))
elif n<10:
    if n<0:
        n=0-n
        nn=10-n
        if nn<0:
            nn=0-nn
        print('Absolute difference:',nn)
    else:
        print('Absolute difference:',(10-n))
         