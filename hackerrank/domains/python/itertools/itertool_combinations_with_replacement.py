from itertools import combinations_with_replacement
st, r = input().split(' ')
r = int(r)
st = ''.join(sorted(list(st)))
for i in list(combinations_with_replacement(st,r)):
    print(''.join(i))
