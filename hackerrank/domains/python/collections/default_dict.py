from collections import defaultdict
n,m = tuple([int(x) for x in raw_input().strip().split()])
d = defaultdict(list)
li=[]
lo=[]
for i in range(n):
    li.append(raw_input())
for j in range(m):
    lo.append(raw_input())
for let in lo:
    if let in li :
        for k in range(len(li)):
            if  li[k] == let :
                d[let].append(k+1)
    else:
        d[let].append(-1)
for mm in lo:
    li=(list({int(x) for x in d[mm]}))
    li.sort()
    li=[str(x) for x in li]
    print (' '.join(li))