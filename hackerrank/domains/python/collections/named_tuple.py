N = int(input())
marks = [x for x in input().split()].index('MARKS')
average = sum([int([x for x in input().split()][marks]) for i in range(N)])/N
print(average)