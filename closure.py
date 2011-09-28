def makeInc(x):
		def inc(y):
			return x+y
		return inc
inc5 = makeInc(5)
inc10 = makeInc(10)
print inc5(5)#return 10
print inc10(5)#return 15
