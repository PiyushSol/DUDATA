import matplotlib.pyplot as plt
import numpy as np


def sine(t):
    return np.sin(2*np.pi*t)

def cosine(t):
    return np.cos(2*np.pi*t)

def exponential(t):
    return np.exp(t)

t1 = np.arange(0,3.14,0.05)
plt.subplot(212)
plt.plot(t1,exponential(t1))
plt.show()