# help(abs)

# help(print)

# Common pitfall

# help(abs(-2.01))

def voter_id(x,y):
	"""This functions states if the given voter id with age is elgible to vote or not."""
	age=x
	vid=y
	if age >=18:
		print(vid," has age ",age, " and is an eligible voter.")
	else:
		print(vid," has age ",age, "and is not an elgible voter.")
		
# help(voter_id) # Prints help/the content provided in the commas directly followed bs def function 
voter_id(13,1233)
voter_id(21,1234)

print(1,2,3,sep='_')

# Providing default arguments

def greet(who='a'):
    print('Hello ',who)
greet('b')
greet('c')
greet()

# calling function within a function

def a(x):
    '''Multiply the input by three'''
    return x*3

def call(fn,arg1):
    '''Call the function fn with argument arg1'''
    return fn(arg1)
def square_a(fn,arg1):
    '''Calls the fn function twice with arg1 as argument'''
    return fn(fn(arg1))

print('',call(a,1),square_a(a,1),'',sep='\n')

# Using higher order functions

def mod_4(x):
    return x%4
print('Biggest number is', max(4,15,31), 'Biggest number based on remainder when dividing by 4:', max(4,15,31,key=mod_4),sep='\n')

