# protoPlayground
fun

# compile:
g++ -std=c++20 -I /home/jarek/local/include -L /home/jarek/local/lib main.cpp proto/Person.pb.cc -lprotobuf -pthread  -o my_program