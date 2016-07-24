# Enter your code here. Read input from STDIN. Print output to STDOUT
input()
set1=set([int(x) for x in raw_input().strip().split()])
input()
set2=set([int(x) for x in raw_input().strip().split()])
set3=set1.union(set2)
set4=set1.intersection(set2)
set5=set3.difference(set4)
l=sorted(list(set5))

for i in l:
    print i