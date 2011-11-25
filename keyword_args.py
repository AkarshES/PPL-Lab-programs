def test_var_kwargs(farg,**kwarg):
	print "Formal arg:",farg
	for key in kwarg:
		print key,':',kwarg[key]
test_var_kwargs(1,arg1 = "Two",arg3 = "Three")
