S1=input()
S=S1.split(' ')
out=[]
for i in S:
    if i:
        out.append(i[0].upper() + i[1:])
    else:
        out.append(i)
print(' '.join(out))