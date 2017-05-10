//lp4ESTC(9)

#include <dsverifier.h>

digital_system ds = {
    .b =  { 9.974778237079184e-05, -3.988544286088529e-04, 5.982133158981099e-04, -3.988544286088529e-04, 9.974778237079184e-05},
    .b_size = 5,
    .a ={ 1, -3.9942639565041902, 5.9828083149676674, -3.9828247327710993, 0.99428037433104444},
    .a_size = 5
};

filter_parameters filter = {
    .Ap =  0.8, 
    .Ac =  0.707945784384138, 
    .Ar = 0.5,
    .wp = 0, 
    .wc = 0.0041, 
    .wr = 0.1041,
    .type = 1
};

implementation impl = {
    .int_bits = 4,
    .frac_bits = 10,
    .min = -1.6,
    .max = 1.6,
};