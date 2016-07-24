in_str = sorted(list(input()))
freq = sorted(sorted([(x,in_str.count(x)) for x in set(in_str)], key = lambda x : x[0]),key = lambda x : x[1],reverse=True)
for i in freq[:3]:
    print(i[0],i[1])