from calendar import weekday
month,day,year = (int(x) for x in input().split())
day = weekday(year,month,day)
if day == 0:
    print('MONDAY')
elif day == 1:
    print('TUESDAY')
elif day == 2:
    print('WEDNESDAY')
elif day == 3:
    print('THURSDAY')
elif day == 4:
    print('FRIDAY')
elif day == 5:
    print('SATURDAY')
else:
    print('SUNDAY')