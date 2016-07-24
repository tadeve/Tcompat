input()
lis=sorted([int(x) for x in raw_input().strip().split(" ")])
for i in range(len(lis)-2 , -1 ,-1):
    if lis[i] != lis[-1]:
        print lis[i]
        break