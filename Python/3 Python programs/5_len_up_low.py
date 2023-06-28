ch=0
while ch!=5:
    print('\n1:Input string')
    print('2:Calculate length')
    print('3:Convert into uppercase')
    print('4:Convert into lowercase')
    print('5:Exit')
    ch=int(input('Enter your choise from above:'))
    if ch==1:
        str=input('Enter any string:')
    elif ch==2:
        print('Length of given string is:',len(str))
    elif ch==3:
        print('Desired uppercase string is:',str.upper())
    elif ch==4:
         print('Desired lowercase string is:',str.lower())
    elif ch==5:
         exit()
    else:
         print('Enter valid choise')
   