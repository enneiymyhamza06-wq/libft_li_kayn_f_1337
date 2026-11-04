%.o: %.c
	$(cc) $(fLAGS) -C $< -O $@
