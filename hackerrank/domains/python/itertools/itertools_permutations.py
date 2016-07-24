from itertools import permutations
st, r = input().split(' ')
r = int(r)
for i in sorted(list(permutations(st,r))):
    print(''.join(i))
