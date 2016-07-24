input()
li=[int(x) for x in input().split(' ')]
li=set(li)
print(float(sum(li)/len(li)))