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
            print(value)
            new_pin = ''.join(crack)
            break

print(new_pin)

if new_pin == pin:
    print("CRACKED!")
    print(int(new_pin))