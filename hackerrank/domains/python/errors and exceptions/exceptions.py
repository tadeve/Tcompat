for i in range(int(input())):
    n1,n2 = input().split()
    n1ok,n2ok=True,True
    try:
        n1 = int(n1)
    except ValueError as ve:
        print("Error Code:",ve)
        n1ok=False
    try:
        n2 = int(n2)
    except ValueError as ve:
        print("Error Code:",ve)
        n2ok=False
    if n1ok and n2ok:
        try:
            print(n1//n2)
        except ZeroDivisionError as zde:
            print("Error Code:",zde)