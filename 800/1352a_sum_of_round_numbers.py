if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        terms = []

        n = list(input())
        base = (10 ** len(n)) / 10
        for j in n:
            term = int(j) * base
            if term > 0:
                terms.append(str(int(term)))
            base = base / 10

        print(len(terms))
        print(" ".join(terms))
