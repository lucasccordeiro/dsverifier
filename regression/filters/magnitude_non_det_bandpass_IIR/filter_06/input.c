//lp12EST(6)

#include <dsverifier.h>

digital_system ds = {
            .b =  { 9.957105374921948e-05  ,  -6.940166147616031e-04  ,   2.612177539485989e-03 ,   -6.588234947701996e-03  ,   1.226601333284209e-02  ,  -1.755345211679480e-02   ,  1.975004884659646e-02  ,  -1.755345211679480e-02  ,   1.226601333284209e-02  ,  -6.588234947701996e-03  ,   2.612177539485988e-03  ,  -6.940166147616031e-04  ,   9.957105374921948e-05},
            .b_size = 13,
            .a =  {1.000000000000000e+00  ,  -6.968503955681505e+00   ,  2.621857911887403e+01  , -6.608952627679561e+01  ,   1.229546330398630e+02  ,  -1.757925282275807e+02 ,    1.975701754474358e+02 ,   -1.753675143785737e+02  ,   1.223608162752055e+02  ,  -6.561132942883955e+01  ,   2.596594187148245e+01  ,  -6.884671260159223e+00   ,  9.855811770725564e-01},
            .a_size = 13
         };

implementation impl = {
         .int_bits = 5,
         .frac_bits = 10,
         .min = -1.6,
         .max = 1.6,
};


filter_parameters filter = {
        .Ap = 0.891250938133746, 
        .Ar = 0.891250938133746,

         .w1p = 0.3, 
         .w2p = 0.305,

         .w1r = 0.29,
         .w2r = 0.31,

        // .1st_wr = 0.29,
        // .2nd_wr = 0.71,

         .type = 3
};