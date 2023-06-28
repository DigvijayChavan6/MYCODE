ch=0
while(ch!=3):
    print('\n1:Area of circle')
    print('2:Area of tringle')
    print('3:Exit')
    ch=int(input('Enter your choise='))
    if ch==1:
        rad=int(input('Enter radius='))
        print('Area of circle=',(float(rad*rad*3.14)))
    elif ch==2:
        b=int(input('Enter Base='))
        h=int(input('Enter height='))
        print('Area of triangle=',(float(b*h*0.5)))
    elif ch==3:
        exit()
    else:
        print('\nEnter valid choise.')