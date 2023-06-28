u=int(input('Enter any no.:'))
for i in range(1,u):
    for j in range(1,i):
        print('\t*',end='')
        i-=1
    print()