input()
s=set([int(x) for x in input().split()])
for i in range(int(input())):
    lis=[x for x in input().split()]
    nums=set([int(x) for x in input().split()])
    if(lis[0]=='update'):
        s|=nums
    elif(lis[0]=='intersection_update'):
        s&=nums
    elif(lis[0]=='symmetric_difference_update'):
        s^=nums
    elif(lis[0]=='difference_update'):
        s-=nums
print(sum(s))