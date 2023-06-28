num=int(input('Enter any no.='))
n=num
s=0
while num!=0:
    r=num%10
    s=s*10+r
    num=int(num/10)
if s==n:
    print('Entered no. is palindrome')
else:
    print('Entered no. is NOT palindrome')