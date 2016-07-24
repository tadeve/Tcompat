from collections import OrderedDict
cost = OrderedDict()
for i in range(int(input())):
    l = input().split(' ')
    if len(l) > 2:
        l = [' '.join(l[:-1]),int(l[-1].rstrip())]
    else:
        l[-1] = int(l[-1])
    if l[0] in cost:
        cost[l[0]]+=l[1]
    else:
        cost[l[0]]=l[1]
for i in cost:
    print(i,cost[i])