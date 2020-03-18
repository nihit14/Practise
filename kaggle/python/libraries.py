import math 
# math variables and functions 
print(dir(math))

def print_pi(digits):
	for i in range(digits):
		print("Pi upto {} decimal places: {:.{}}".format(i,math.pi,i))

print_pi(5)
# getting help 
#help(math.log)

# Other syntax to use import 
import math as mt
print(dir(mt))

# Importing all variables to avoid using each time library name
from math import * # though not recommended practise as can lead to clashing definitions of a same varible/function name
#before
#print(math.pi)
print(pi)

