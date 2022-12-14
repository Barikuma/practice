from string import ascii_lowercase, ascii_uppercase

def encrypt(message, key):
    encrypted_message = []
    for c in message:
        if ((c in ascii_lowercase) == False and (c in ascii_uppercase) == False):
            encrypted_message.append(c)
            continue
        
        if (c in ascii_lowercase):
            index = ascii_lowercase.index(c)
            i = index + key
            if (i < 26):
                encrypted_message.append(ascii_lowercase[i])
            else:
                i = i - 26
                encrypted_message.append(ascii_lowercase[i])
        
        elif (c in ascii_uppercase):
            index = ascii_uppercase.index(c)
            i = index + key
            if (i < 26):
                encrypted_message.append(ascii_uppercase[i])
            else:
                i = i - 26
                encrypted_message.append(ascii_uppercase[i])

    encrypted_message = ''.join(map(str, encrypted_message))
    return encrypted_message
