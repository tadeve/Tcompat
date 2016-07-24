def is_pali(x):
    return str(x) == str(x)[::-1]
input()
li = [int(x) for x in input().split(' ')]
allint =all([(x > 0) for x in li])
if allint :
    print(any([is_pali(x) for x in li]))
else:
    print(allint)