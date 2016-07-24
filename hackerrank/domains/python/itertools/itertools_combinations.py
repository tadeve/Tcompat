from itertools import combinations
st, r = input().split(' ')
r = int(r)
st = ''.join(sorted(list(st)))
for i in range(1,r+1):
    for j in sorted(list(combinations(st,i))):
        print(''.join(j))
