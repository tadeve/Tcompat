# Enter your code here. Read input from STDIN. Print output to STDOUT
from collections import defaultdict
d=defaultdict(int)
li=[]
for i in range(int(input())):
    word=input().strip()
    if d[word] == 0:
        li.append(word)
    d[word]+=1
print(len(li))
print(' '.join([str(d[x]) for x in li]))

    