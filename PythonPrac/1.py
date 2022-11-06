import math
def areaTriangle():
    ''' Calculates the Area of a Triangle using Heron's Formula '''
    side1 = int(input('Enter Side 1: '))
    side2 = int(input('Enter Side 2: '))
    side3 = int(input('Enter Side 3: '))
    assert side1 + side2 > side3 and side1 + \
           side3 > side2 and side2 + side3 > side1, 'invalid sides'
    semiPerimeter = (side1 + side2 + side3) / 2
    return math.sqrt(semiPerimeter *
                    (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3))
def main():
    area = areaTriangle()
    if area: print('Area of Triangle:', area, 'sq units')

if __name__ == '__main__': main()
