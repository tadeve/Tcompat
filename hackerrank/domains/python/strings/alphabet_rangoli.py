def line(alpha,n,i):
    l=list('-'*((4*n)-3))
    for let in range(i,n):
        l[2*(let-i+n)-2]=alpha[let]
    for let in range(i,n):
        l[2*(-let+i-n)+1]=alpha[let]
    return ''.join(l)
alpha=list('abcdefghijklmnopqrstuvwxyz')
n=int(input())
for i in range(n-1,-1,-1):
    print(line(alpha,n,i))
for i in range(1,n):
    print(line(alpha,n,i))
    