text = input()
valid = [False]*5
for i in text:
    if i.isalnum():
        valid[0] = True
    if i.isalpha():
        valid[1] = True
    if i.isdigit():
        valid[2] = True
    if i.islower():
        valid[3] = True
    if i.isupper():
        valid[4] = True
for i in valid:
    print(i)
    