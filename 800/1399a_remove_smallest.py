if __name__ == "__main__":
    cases = int(input())

    for i in range(cases):
        length = int(input())
        elements = list(map(int, input().split(" ")))
        elements.sort()

        while len(elements) > 1:
            if abs(elements[0] - elements[1]) > 1:
                break

            if elements[1] < elements[0]:
                elements.remove(elements[1])
            else:
                elements.remove(elements[0])

        if len(elements) == 1:
            print("YES")
        else:
            print("NO")