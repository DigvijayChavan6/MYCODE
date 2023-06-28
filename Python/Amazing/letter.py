letter='''Congratulation!  :name:
You are selected for next round.
Date: :date:
Regards,
Google team'''
name=input('Enter your name=')
date=input('Enter todays date=')
letter=letter.replace(':name:',name)
letter=letter.replace(':date:',date)
print(letter)