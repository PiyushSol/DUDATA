def setOfDigits(n):
  assert n >= 10
  s = set()
  while n != 0:
      s.add(n % 10)
      n //= 10
      return s
def main():
    n = int(input('Enter a Number: '))
    print('Set of Digits:', setOfDigits(n))

if __name__ == '__main__': main()
