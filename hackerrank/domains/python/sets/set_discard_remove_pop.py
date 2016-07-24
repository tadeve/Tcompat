n = int(input())
s = set(map(int, input().split()))
for i in range(int(input())):
    k=[x for x in input().split()]
    if(k[0]=="remove"):
        s.remove(int(k[1]))
    elif(k[0]=="discard"):
        s.discard(int(k[1]))
    elif(k[0]=="pop"):
        s.pop()
print(sum(s))
