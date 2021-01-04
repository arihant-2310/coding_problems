#test code
def adjacentSum(a):
    if len(a) % 2 == 0:
        for i in range(0, len(a), 2):
            s = a[i] + a[i + 1]
            a.remove(a[i])
            a.remove(a[i + 1])
            a.insert(i, s)
    print(a)
    return s
a = [int(n) for n in input().split()]
print(adjacentSum(a))