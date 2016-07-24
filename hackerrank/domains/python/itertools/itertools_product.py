from itertools import product
A = [int(x) for x in input().split(' ')]
B = [int(x) for x in input().split(' ')]
print(' '.join([str(x) for x in list(product(A,B))])) 