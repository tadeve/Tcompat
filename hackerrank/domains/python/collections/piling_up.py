for tc in range(int(input())):
    n=int(input())
    arr_h=[int(x) for x in input().strip().split(" ")]
    arr_v=[]
    mx,ix=0,0
    if arr_h[0] > arr_h[-1]:
        mx=arr_h[0]
       # print mx
        ix=0
    else:
        mx=arr_h[-1]
       # print mx
        ix=-1
    arr_v.append(mx)
    arr_h.pop(ix)
    complete=True
    while arr_h:
        if arr_h[0] > arr_v[-1] and arr_h[-1] > arr_v[-1]:
            print('No')
            complete=False
            break
        if arr_h[0] > arr_h[-1] and arr_h[0] <= arr_v[-1] :
            mx=arr_h[0]
            #print mx , arr_v[-1]
            ix=0
        elif arr_h[-1] <= arr_v[-1] :
            mx=arr_h[-1]
            #print mx
            ix=-1
        else:
            print('No')
            complete=False
            break
        arr_v.append(mx)
        arr_h.pop(ix)#
    if complete :
        print('Yes')
        
        
        
        
        
        
        
        