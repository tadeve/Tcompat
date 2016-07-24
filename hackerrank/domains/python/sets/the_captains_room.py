K=int(input())
rooms=[int(x) for x in input().split()]
roms = [0]*(max(rooms)+1)

for i in rooms:
    roms[i]+=1;
for i in range(len(roms)):
    if roms[i] == 1:
        print(i)