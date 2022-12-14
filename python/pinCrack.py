from random import randint

pin = input("Enter pin: ")
string_pin = str(pin)
value = ''
crack = []
new_pin = ''
for i in range(len(string_pin)):
    while value != string_pin[i]:
        value = str(randint(0, 9))
        if value == string_pin[i]:
            crack.append(value)
            new_pin = ''.join(crack)
            break