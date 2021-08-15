import math

n, s, k = list(map(int, input().split()))
if n < k:
    print(0)
else:
    res = 0
    for i in range(k, n + 1):
        p = 1
        for j in range(i):
            p *= (s - j)
        res += p * (math.factorial(n) / (math.factorial(i) * math.factorial(n - i)))
        print(res)
    print("%.7f" % (res / (s ** n)))