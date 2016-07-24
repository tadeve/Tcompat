# Enter your code here. Read input from STDIN. Print output to STDOUT
lis=[]
for i in range(int(input())):
    name =raw_input()
    number =float(input())
    lis.append([number,name])
lis.sort()
#print lis
mini=lis[0][0]
#print mini
for i in range(1,len(lis)):
    if lis[i][0]!=mini:
        mini=lis[i][0]
        #print mini
        print lis[i][1]
        for j in range(i+1,len(lis)):
            if lis[j][0] == mini :
                print lis[j][1]
                #print lis[j][1]
            else:
                break
        break
    