from itertools import combinations
        
size = int(input())
st = input().split(' ')
subsize = int(input())
a_indecies = set([i for i in range(size) if st[i] == 'a'])
n_combs = 0
n_as = 0
for i in combinations([i for i in range(size)],subsize):
    n_combs+=1
    if any([k in a_indecies for k in i]):
        n_as+=1
print(n_as/n_combs)
