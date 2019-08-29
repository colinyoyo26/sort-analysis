insertion: insertion.c
	gcc -o insertion insertion.c

qsort: qsort.c
	gcc -o qsort qsort.c

test: insertion qsort
	./script/test.sh

plot: clean test
	gnuplot ./script/plot.gp

clean:
	rm -f qsort insertion *.txt *.png

.PHONY: test clean