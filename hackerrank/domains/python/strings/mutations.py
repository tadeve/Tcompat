# Enter your code here. Read input from STDIN. Print output to STDOUT
string = list(raw_input())
i,let= tuple(raw_input().rstrip().split(" "))
string[int(i)]=let
print "".join(string)
