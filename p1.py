import numpy as np
import matplotlib.pyplot as plt
import os

os.system("g++ c1.cpp -o pas.x")
os.system("./pas.x > datos1.txt")
datos1 = np.loadtxt("datos1.txt")

os.system("g++ c2.cpp -o pas.x")
os.system("./pas.x > datos2.txt")
datos2 = np.loadtxt("datos2.txt")
plt.figure()
plt.plot(datos1[:,0],datos1[:,1])
plt.plot(datos2[:,0],datos2[:,1])
plt.savefig("Solucion")


