from collections import Counter
N = int(input())
l = [int(x) for x in input().split(' ')]
shoes = Counter(l)
N_p = int(input())
money = 0
for i in range(N_p):
    size,price = (int(x) for x in input().split(' '))
    if shoes[size] > 0:
        money+=price
        shoes[size] -= 1
print(money)