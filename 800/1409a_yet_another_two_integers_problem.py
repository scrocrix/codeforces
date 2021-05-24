if __name__ == "__main__":
    cases = int(input())
    for i in range(cases):
        values = list(map(int, input().split(" ")))
        diff = abs(values[0] - values[1])
        if diff % 10 == 0:
            print(round(diff / 10))
        else:
            print(int(round(diff / 10, 2) + 1))