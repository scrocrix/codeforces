def is_prime(num):
    if num > 1:
        for i in range(2, int(num / 2) + 1):
            if (num % i) == 0:
                return False
        else:
            return True
    else:
        return False

if __name__ == "__main__":
    n = int(input())

    needle = 4
    value = n - needle

    while is_prime(value) or is_prime(needle):
        needle = needle + 1
        value = n - needle

    print(str(needle) + " " + str(value))