import datetime
for i in range(int(input())):
    t1 = datetime.datetime.strptime(input(), "%a %d %b %Y %H:%M:%S %z")
    t2 = datetime.datetime.strptime(input(), "%a %d %b %Y %H:%M:%S %z")
    print(int(abs((t2-t1).total_seconds())))