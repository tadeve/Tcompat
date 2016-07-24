from itertools import groupby
s = input()
v = [str((len(list(i[1])),int(i[0]))) for i in groupby(s)]
print(' '.join(v))
