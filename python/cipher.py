from string import ascii_lowercase, ascii_uppercase
'''

This program encrypts a message inputted by the user.
It works with the same principle as the cipher wheel where a user selects 
a key to encrypt their messages with.

'''
def rearrange_low_character(lower, key):
    # length of the lower case characters
    low_length = len(lower)

    # updates the list of characters to match the key
    for i in range(key):
        # inserts the first character at the end of the list
        lower.insert(low_length, lower[0])
        # removes the first character
        lower.remove(lower[0])
    
    # coverts the lists back to string
    lower = ''.join(map(str, lower))
    return lower

def rearrange_upper_character(upper, key):
    # length of uppercase characters
    upp_length = len(upper)

    # updates the list of characters to match the key
    for i in range(key):
        # inserts the first character at the end of the list
        upper.insert(upp_length, upper[0])
        # removes the first character
        upper.remove(upper[0])
    
    # coverts the lists back to string
    upper = ''.join(map(str, upper))
    return upper

def encrypt(message, upper, upper_cpy, lower, lower_cpy):
    # length of the message
    message_length = len(message)

    for i in range(message_length):
        message = list(message)     # casts the message to a list and overwrite in the message variable

        # checks if the current character is not an alphabet
        if ((message[i] in lower) == False and (message[i] in upper) == False):
            continue
        
        # checks if current character is an uppercase character
        elif (message[i].isupper()):
            index = upper_cpy.index(message[i])     # stores the index of the current message character in the lowercase copied list
            message[i] = upper[index]       # replaces the current message character with the character at the same index at the keyed list

        # runs if the current character is a lowercase character
        else:
            index = lower_cpy.index(message[i])     # stores the index of the current message character in the lowercase copied list
            message[i] = lower[index]       # replaces the current message character with the character at the same index at the keyed list

        i += 1      # increments i
        
    message = ''.join(map(str, message))        # converts the message back to a string
    return message

def cipher(message, key):
    i = 0

    # stores the characters in an array
    lower = list(ascii_lowercase)
    upper = list(ascii_uppercase)

    # stores a copy of the list
    lower_cpy = list(lower)
    upper_cpy = list(upper)

    lower = rearrange_low_character(lower, key)
    upper = rearrange_upper_character(upper, key)

    return encrypt(message, upper, upper_cpy, lower, lower_cpy)
    