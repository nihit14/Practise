def voter_verification(age,right_nationality):
    """Checks if the voter is eligible to vote or not"""

    if age >= 18 and right_nationality:
        return True
    else:
        return False

print ("Is voter an eligible voter? ", voter_verification(25,False))
print ("Is voter an eligible voter? ", voter_verification(17,True))
print ("Is voter an eligible voter? ", voter_verification(18,True))


# Comparison can comapre decimal and fractions and integer or to say float and integer
print("3.00 == 3 :",3.00 == 3)
# Comparison cannot comapre string with float or integers
print("'3' == 3 :",'3' == 3) # Will throw an error


''' So conditions can be used with :
    and 
    or
    and or 
    or not 
    and not
    etc
whereas control flow syntax is as following:
    if condition:
        action 
    elif condition: 
        action 
    else:
        action 

'''
def odd_even(number):
    if number%2 ==0:
        print (number," :Number is even.")
        print ("Checking if due to second action we need parenthesis.")
        return number
    elif number%2==1:
        print(number," :Number is odd")
        print ("Checking if due to second action we need parenthesis.")
        return number
    else:
        print("Invalid Number!!")
        return number

print("odd_even(12):",odd_even(12))
print("odd_even(11):",odd_even(11))
print("odd_even(a):",odd_even(12.344599))


# Single line handy conditional expressions 
def check(grade):
    outcome = 'pass' if grade > 50 else 'fail'
    print('You ',outcome,' the quiz with grade ',grade)

check(45)
check(55)
