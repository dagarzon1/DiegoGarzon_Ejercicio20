import numpy as np
import matplotlib.pyplot as plt

data=np.loadtxt("datos.txt")

plt.plot(data[:20,0], data[:20,1], label="initial")
plt.plot(data[20:,0], data[20:,1], label="t=0.5s")
plt.legend()
plt.savefig("grafica.pdf")
