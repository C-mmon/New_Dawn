
def solution(P, S):
    # write your code in Python 3.6
    pass
    n = len(P)
    a = []
    sum = 0
    people = 0
    seats = 0
    c = 0
    for i in range(len(P)):
        people += P[i]
    for i in range(len(S)):
        seats += S[i]
    if seats == people:
        return len(P)
    elif seats > people:
        for i in range(len(P)):
            a.append(S[i] - P[i])
        for i in range(len(P)):
            sum += a[i]
        for i in range(n):
            if P[i] <= sum -(S[i]-P[i]):
                P[i] = 0
                sum -= S[i]
        for i in range(n):
            if P[i] > 0:
                c += 1
        return c
