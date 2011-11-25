def test_var_args(farg,*args):
	print "Formal Args:",farg
	for arg in args:
		print "another_arg:",arg
test_var_args(1,'Two',3)
