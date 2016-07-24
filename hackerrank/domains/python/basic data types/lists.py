# Enter your code here. Read input from STDIN. Print output to STDOUT
L=[]
for i in range(int(input())):
        li=[x for x in raw_input().split(" ")]
        line=[li[0]]+[int(x) for x in li[1:]]
        if line[0] == "append":
            L.append(line[1])
        elif line[0] == "extend":
            L.extend(line[1:])
        elif line[0] == "insert":
            L.insert(line[1],line[2])
        elif line[0] == "remove":
            L.remove(line[1])
        elif line[0] == "pop":
            L.pop()
        elif line[0] == "index":
            L.index(line[1])
        elif line[0] == "count":
            L.count(line[1])
        elif line[0] == "sort":
            L.sort()
        elif line[0] == "reverse":
            L.reverse()
        elif line[0]=="print":
            print L