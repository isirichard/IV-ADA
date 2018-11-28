data2analyze <- read.csv('data.csv',TRUE)
library(ggplot2)
ggplot()  + 
  geom_point(aes(x = data2analyze$iter, y = data2analyze$iter_converged),colour = 'red') +
  geom_line(aes(x = data2analyze$iter, y = data2analyze$iter_converged),colour = 'green') +
  ggtitle('iter vs time_1') +
  xlab('iter') +
  ylab('time_1(ms)')
mean(data2analyze$iter_converged)