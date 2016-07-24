from itertools import product
K,M = [int(x) for x in input().split(' ')]
lists = []
for i in range(K):
    inp = [int(x) for x in input().split(' ')]
    head,tail = inp[0],inp[1:]
    lists.append(sorted([x*x for x in tail],reverse = True))
l = sorted(lists,reverse=True)
sums = [sum(x)%M for x in product(*l)]
print(max(sums))