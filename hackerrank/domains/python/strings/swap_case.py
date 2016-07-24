text = input()
out = ''
for i in text:
    if i.isupper():
        out+=i.lower()
    else:
        out += i.upper()
print(out)