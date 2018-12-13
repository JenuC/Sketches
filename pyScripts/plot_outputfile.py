
import numpy
data= numpy.loadtxt('output_ns.txt')

import matplotlib.pyplot as plt
ms_delay=numpy.ediff1d(data)/1000000.0 # in nanoseconds-> milliseconds

plt.hist(ms_delay[ms_delay>0],50);
ms_delay= ms_delay[ms_delay>0]
print (ms_delay.mean(),'ms')
plt.show();
