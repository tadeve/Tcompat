# Enter your code here. Read input from STDIN. Print output to STDOUT
def fibo(limit):
    fibos=[0,1]
    for i in range(1,limit-1):
        fibos.append(fibos[i]+fibos[i-1])
    return fibos
cube = lambda a : a**3
n=int(input())
print list(map(cube ,fibo(n+10)))[:n]
        
    