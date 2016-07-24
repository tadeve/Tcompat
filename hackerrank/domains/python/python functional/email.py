import re
ptrn = re.compile("^[a-zA-Z][\w-]*@[a-zA-Z0-9]+\.[a-zA-Z]{1,3}$")    
lis_e=[]
for tc in range(int(input())):
    email=raw_input()
    em= re.search(ptrn, email)
    if em :
        lis_e.append(email)        
lis_e.sort()
print lis_e