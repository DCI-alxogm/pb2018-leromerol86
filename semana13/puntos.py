import matplotlib.pyplot as plt
import numpy as np
import math
pnt = 50
esp = 1
esp2 = 10
x = np.random.rand(pnt)
y = np.random.rand(pnt)
z = np.array([x,y])
plt.scatter(x,y,color='b')
b=0
cx = np.random.rand(36*pnt/esp2)
cy = np.random.rand(36*pnt/esp2)
for t in range(0,pnt,esp2):
    for r in range(0,360,10):
        cx[b]= np.cos(r)*0.1+x[t]
        cy[b]= np.sin(r)*0.1+y[t]
        b=b+1
plt.scatter(cx,cy,color='r')
