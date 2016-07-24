A = set([int(a) for a in input().split()])
state = True
for i in range(int(input())):
    S = set([int(a) for a in input().split()])
    state = state and A.issuperset(S) and A != S;
print(state)