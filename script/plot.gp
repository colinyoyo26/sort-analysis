set title "Sort perf"
set xlabel "time"
set ylabel "size"
set terminal png font " Times_New_Roman,12 "
set key left
set output "result.png"

plot \
"out1.txt" using 1:2 with linespoints linewidth 2 title "insertion", \
"out2.txt" using 1:2 with linespoints linewidth 2 title "qsort" \