N,M = (int(x) for x in input().split(' '))
table = []
for i in range(N):
    table.append([int(x) for x in input().split(' ')])
idx = int(input())
table = sorted(table,key=lambda x: x[idx])
for i in table:
    print(' '.join((str(x) for x in i)))