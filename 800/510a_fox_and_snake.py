if __name__ == "__main__":
    m, n = input().split(" ")
    m = int(m)
    n = int(n)
    position = 0
    for i in range(m):
        line = ""

        for j in range(n):
            if i % 2 != 0:
                line += "."
            else:
                line += "#"

        if i % 2 != 0:
            if position == 0:
                position = position + 1
            else:
                position = position - 1

        if position == 0 and i % 2 != 0:
            line = list(line)
            line[0] = "#"
            line = "".join(line)

        if position == 1 and i % 2 != 0:
            line = list(line)
            line[len(line) - 1] = "#"
            line = "".join(line)

        print(line)