TARGET = rinside
SRCS = rinside.cpp libRinside.a
CPPFLAGS = -I ./include -I ./Rcpp/inst/include -I /Library/Frameworks/R.framework/Headers -L ./ 
LDFLAGS = -lR 
CC = g++

All: $(SRCS)
	$(CC) -o $(TARGET) $(CPPFLAGS) $(LDFLAGS) $(SRCS)