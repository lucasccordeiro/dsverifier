function [y] = realization_transposed_direct_form_2(system)
% 
% [y]= realization_transposed_direct_form_2(system)
% 
% System is a transfer function system including not only numerator or
% denominator, but implementation about the system.
% system is the input of TDFII realization and should be implemented as a
% struct in MATLAB Worksapace as:
% system.a = denominator of transfer function
% system.b = numerator of transfer function
% system.impl.int_bits = integer bits
% system.impl.frac_bits = fractionary bits
% system.inputs with the inputs to realization
% system.initial_states with the initial states
% system.x_size with the bound of the realization
%
% Lennon Chaves
% September 18, 2016
% Manaus

%% Definitions
a_fxp = system.a;
b_fxp = system.b;

impl_int = system.impl.int_bits;
impl_frac = system.impl.frac_bits;

x_size = system.x_size;

Na = length(a_fxp);
Nb = length(b_fxp);

if (Na > Nb)
    Nw = Na;
else
    Nw = Nb;
end

w_aux = system.initial_states;

x =  system.inputs;
y =  zeros(1,x_size);

%% DFII Realization
for i=1:x_size
    
    yout = 0;
	a_ptr = a_fxp;
	b_ptr = b_fxp;
    w = w_aux;
  
	yout = fxp_add(fxp_mult(b_ptr(1), x(i),impl_int, impl_frac), w(1),impl_int, impl_frac);
	yout = fxp_div(yout, a_fxp(1),impl_int, impl_frac);
    
    for j=1:(Nw-1)
		w(j) = w(j + 1);
        if (j < Na-1)
			w(j) = fxp_sub(w(j), fxp_mult(a_ptr(j+1), yout, impl_int, impl_frac), impl_int, impl_frac);
        end
        
        if (j < Nb-1)
			w(j) = fxp_add(w(j), fxp_mult(b_ptr(j+1), x(i), impl_int, impl_frac), impl_int, impl_frac);
        end
    end

    w_aux = w;
    y(i) = fxp_quantize(yout, impl_int, impl_frac);
    
end

end