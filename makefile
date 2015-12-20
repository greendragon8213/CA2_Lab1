all:
		g++ -pg -std=c++11 -o main main.cpp Decoder/Decoder.h Decoder/Decoder.cpp

gprof:
		gprof main gmon.out > report.txt
