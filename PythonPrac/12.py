import matplotlib.pyplot as plt

lis=[]
x=int(input("Enter a List of Integers :"))
for i in range(0 , x+1):
    lis.append(i)

plt.hist(lis, lis , histtype='bar' ,rwidth = 0.9)
plt.xlabel("X-Axix")
plt.ylabel("Y-Axix")
plt.title("User Entered Data")
plt.show()