# Green Efficiency Analysis

### Measurement Methodology

This task required us to run a multi-phase program and add timing instrumentation where necessary.
This code printed the times in which the processes were completed, in seconds.
The results were printed into four separate lines, which were: TOTAL, BUILD\_DATA, PROCESS and REDUCE.
The functions "clock\_t", "clock()" and "CLOCKS\_PER\_SEC" were used to start a timer when the process starts, end it once completed, and then give the result of the time in which the processes took to run.
This was run three times and provided very similar results across the board.
The averages were then calculated to combine the varied results.


### Observed Performance Differences

The averages of the three executions were:

TOTAL: 0.000769

BUILD\_DATA: 0.000306

PROCESS: 0.000313

REDUCE: 0.000144

The REDUCE process was the quickest part to execute with an average time that was just over twice the speed of BUILD\_DATA and PROCESS, both of which sat around 0.0003 seconds.
The average TOTAL never reached above 0.000777 seconds or below 0.000761 seconds. PROCESS has to calculate using / (division) and % (modulo). These both go through more cycles compared to adding, subtracting and multiplying. Because of this, it may be a potential reason as to why it took the longest to execute.


### Relation Between Runtime and Energy Consumption

A fast runtime does not necessarily always equate to efficient energy consumption. However, in this case, as the clock() function is only called 8 times in total, is not wrapped in a loop and is used for macro-timing, the CPU is using very little energy on it.


### Limitations of the Experiment

With the program only running three separate times, we might be missing out on some unexpected results.
However for this experiment, with each of the executions producing such similar results we can assume that it would continue to be the same speed across more executions.

The executions were also all run on one laptop. Using another terminal may change the results of the program's runtimes.
On modern systems, programs such as this run very quickly, which is also why we might not see much variation or longer times.


### Practical Engineering Takeaway

Using the clock() function to benchmark the program's runtimes provided three similar results. Having code that executes quickly is good for performance.
However, having good, clean and energy efficient code is not only good for performance but, but for the environment as well.
Having well optimised code reduces energy consumption and in turn reduces carbon footprint.
