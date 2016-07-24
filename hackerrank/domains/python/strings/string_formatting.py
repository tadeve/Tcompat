n = int(input())
pad = len(bin(n)[2:])
for i in range(1,n+1):
    h1 = hex(i)[2:]
    h =''
    for j in h1:
        if j.isalpha():
            h += j.upper()
        else:
            h += j
    print(str(i).rjust(pad) +' '+oct(i)[2:].rjust(pad) +' '+h.rjust(pad) +' '+bin(i)[2:].rjust(pad))