# Enter your code here. Read input from STDIN. Print output to STDOUT
d={}
for tc in range(int(input())):
    line=[x for x in raw_input().split(" ")]
    d[line[0]]=[float(i) for i in line[1:]]
name=raw_input()
print "{0:.2f}".format(float(sum(d[name])/len(d[name])))