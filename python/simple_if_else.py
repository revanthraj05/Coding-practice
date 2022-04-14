# 10kms - perkm - 15rupees
# after 10kms - perkm - 20rupees

# input kms 
#input baserate
#input extrarate 
#output total cost
# 31.5 rupees

dist = input("Enter distance in kms: ")
dist = float(dist)

br = input("Enter base rate: ")
br = float(br)

er = input("Enter extra rate: ")
er = float(er)

'''
logic

if dist <= 10 then cost = br*dist 
else cost = 10*br + (dist - 10)*er

'''

if dist<=10:
    cost = br*dist 
else:
    cost = 10*br + (dist - 10)*er 
print(cost)
