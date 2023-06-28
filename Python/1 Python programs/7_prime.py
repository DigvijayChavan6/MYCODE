num=int(input('Enter any number='))
t=num
cnt=0
while t!=0:
    if num%t==0:
        cnt+=1
    t-=1
if cnt==2:
    print('Number is prime')
else:
    print('Number is NOT prime')
    