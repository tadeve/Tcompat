from collections import deque
d = deque()
for i in range(int(input())):
    nxt = input().strip().split(' ')
    if len(nxt) == 2:
        command = nxt[0]
        value = int(nxt[1])
    else:
        command = nxt[0]
    if command == 'append':
        d.append(value)
    elif command == 'appendleft':
        d.appendleft(value)
    elif command == 'pop':
        d.pop()
    elif command == 'popleft':
        d.popleft()
print(' '.join([str(x) for x in list(d)]))