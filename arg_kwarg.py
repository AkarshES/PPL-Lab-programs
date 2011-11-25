def test_arg_kwarg(farg,*args,**kwargs):
	print 'Formal Arg:',farg
	for arg in args:
		print 'Arg:',arg
		
	for kwarg in kwargs:
		print kwarg,'=',kwargs[kwarg]
		
test_arg_kwarg(1,'Two',three = 'Three')
