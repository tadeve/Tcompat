# Enter your code here. Read input from STDIN. Print output to STDOUT
n,m=tuple([int(x) for x in raw_input().strip().split(" ")])
n_arr=tuple([int(x) for x in raw_input().strip().split(" ")])
A=set([int(x) for x in raw_input().strip().split(" ")])
B=set([int(x) for x in raw_input().strip().split(" ")])
happiness=0
for i in n_arr:
    if i in A:
        happiness+=1
    if i in B:
        happiness-=1
    else:
        pass
print happiness