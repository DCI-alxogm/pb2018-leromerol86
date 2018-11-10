#Se importaron las paqueterias necesarias(todas tuvieron que ser descargada e instaladas)
import matplotlib.pyplot as plt
import numpy as np
import math
pnt = 50
d2 = 10
#Se estrablecen los puntos aleatorios en dos diferentes arreglos
x = np.random.rand(pnt)
y = np.random.rand(pnt)
#Se imprimento todos los puntos usando estos dos arreglos
plt.scatter(x,y,color='b')
#A continuación se realiza el ciclo para colocar los circulos
#Se realizaon dos nuevos arreglos para colocar los puntos de los circulos
cirx = np.random.rand(36*pnt/d2)
ciry = np.random.rand(36*pnt/d2)
n =0
#Los ciclos  distribuyen la diferente cantidad de puntos en las diferentesdimenciones
for t in range(0,5):#Este ciclo establece la cantidad de circulos
    for r in range(0,360,10):
#Se convirtio las coordenadas de cartesianas a polares y se almacenanlos datos en el arreglos multidimencional
        cirx[n]= x[t]+np.cos(r)*0.1
        ciry[n]= y[t]+np.sin(r)*0.1
        n=n+1
#Se imprimen los puntos alrededor de cada punto
plt.scatter(cirx,ciry,color='r')
