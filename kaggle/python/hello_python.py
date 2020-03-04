# Printing on the screen
spam_amount = 'Hello world'
print(spam_amount)
spam_amount = 0
spam_amount = spam_amount + 4

if spam_amount > 0:
    print("I don't want any spam")

viking_song = 'spam' * spam_amount

print(viking_song)


#1. We dont declare variables as in R
#2. We dont specify the type as in R


#3. Function calling
#print("I am calling the function print with this string as argument")
print("I am calling the function print with this string as argument")

# Airthematic 
print(8 - 3 + 5)


hat_height_cm = 25
my_height_cm = 190

total_height_meters = hat_height_cm + my_height_cm / 100

print('Height in meters =', total_height_meters, '?')

total_height_meters = (hat_height_cm + my_height_cm) / 100

print('Height in meters =', total_height_meters)

# mix and max function as it is in R

print(min(1,4,56))
print(max(1,4,56))


# abs returns the absolute value

print(abs(45))

print(abs(-45))

# float, int and string conversion to int
print(float(10))
print(int(3.33))
print(int('45') + 7)


