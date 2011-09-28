def counter(start=0,step=1):
		x = [start]
		def _inc():
			x[0]+=step
			return x[0]
		return _inc
c = counter()
print c()
print c()
print c()
