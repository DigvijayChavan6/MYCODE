want=int(input('From 1 to where you want armstrong numbers:'))
for num in range(1,want+1):
    n=num
    sum=0
    r=0
    while num!=0:
        r=num%10
        sum=sum+r*r*r
        num=int(num/10)
    if n==sum:
         print(sum)