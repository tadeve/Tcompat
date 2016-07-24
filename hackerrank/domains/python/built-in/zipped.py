N,X=(int(x) for x in input().split(' '))
subject_scores = []
for i in range(X):
    subject_scores.append([float(x) for x in input().split(' ')])
students = zip(*subject_scores)
for i in students:
    print(sum(i)/X)
    