import re
for i in range(int(input())):
    case = False
    try:
        re.compile(input())
        case = True
    except:
        case = False
    print(case)
        
