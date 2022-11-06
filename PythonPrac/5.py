from factorial import factorial

def seriesSum(x, n):
    assert n > 0, 'invalid number'
    e = 2
    s = 1
    sign = 1
    for i in range(n - 1):
        sign *= -1
        s += sign * (x ** e) / factorial(e)
        e += 2
        return s

def main():
    x = float(input('Enter x: '))
    n = int(input('Enter n: '))
    print(f'Sum of {n} Terms of the Series:', seriesSum(x, n))


if __name__ == "__main__":
    main()

def factorial(n):
    assert n >= 0, 'invalid number'
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)
