def test_var_args(farg,*args,**kwargs):
	print "Formal Args:",farg
	for arg in args:
		print "another_arg:",arg
	print kwargs
test_var_args(1,'Two',3)
