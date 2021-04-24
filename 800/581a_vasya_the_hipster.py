if __name__ == "__main__":
    a, b = input().split(" ")
    a = int(a)
    b = int(b)

    days = 0
    while a >= 1 and b >= 1:
        days = days + 1
        a = a - 1
        b = b - 1

    remaining_socks = a + b
    available = 0
    while remaining_socks >= 2:
        available = available + 1
        remaining_socks = remaining_socks - 2

    days = str(days)
    available = str(available)
    print(days + " " + available)