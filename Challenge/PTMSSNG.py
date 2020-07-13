def solve(test):
    final = []
    n = int(input())
    x_c = {}
    y_c = {}
    n=4*n-1
    while(n>0):
        (x, y) = map(int, input().split())
        if x in x_c:
            x_c[x] += 1
        else:
            x_c[x] = 1
        if y in y_c:
            y_c[y] += 1
        else:
            y_c[y] = 1
        n=n-1
            
    for x in x_c:
        if x_c[x] % 2!=0:
            final.append(x)
            break
    for y in y_c:
        if y_c[y] % 2!=0:
            final.append(y)
            break

    print(final[0], final[1])


def main():
    t = int(input())
    for test in range(t):
        solve(t+1)
        

if __name__ == "__main__":
    main()
