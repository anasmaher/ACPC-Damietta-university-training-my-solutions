# Solution by OmarMoBadr
def solve():
    z = int(input())
    a, b, c = map(int, input().split())

    x = a * 1 + b * 2 + c * 5

    if (x >= 90 and x < 100) or (x >= 100 and int(x * 0.9) == int((x+1)*0.9)):
        print("YES")
    else:
        print("NO")

for _ in range(int(input())):
    solve()
