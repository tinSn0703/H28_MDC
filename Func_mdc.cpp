
#pragma once

inline void 
F_Set_md
(
	const U_MD_MDC &_arg_md_data, 
	U_MD_MDC &_arg_re_md_data
)
{
	if (_arg_md_data._data_divi._step)
	{
		switch (_arg_md_data._data_divi._sig)
		{
			case ES_FREE:	case ES_STOP:
			{
				if (CHECK_MOVE(_arg_re_md_data._data_divi._sig))
				{
					if (_arg_re_md_data._data_divi._pwm)	_arg_re_md_data._data_divi._pwm -= 1;
					else							_arg_re_md_data._data_divi._sig = _arg_md_data._data_divi._sig;
				}
				else
				{
					_arg_re_md_data._data_divi._sig = _arg_md_data._data_divi._sig;
					_arg_re_md_data._data_divi._pwm = 0;
				}
				
				break;
			}
			case ES_TRUE:	case ES_FALSE:
			{
				if (_arg_re_md_data._data_divi._sig == _arg_md_data._data_divi._sig)
				{
					if		(_arg_md_data._data_divi._pwm > _arg_re_md_data._data_divi._pwm)	_arg_re_md_data._data_divi._pwm += 1;
					else if (_arg_md_data._data_divi._pwm < _arg_re_md_data._data_divi._pwm)	_arg_re_md_data._data_divi._pwm -= 1;
				}
				else if (_arg_re_md_data._data_divi._sig == TURN_SIG_ROTATE(_arg_md_data._data_divi._sig))
				{
					if (_arg_re_md_data._data_divi._pwm)	_arg_re_md_data._data_divi._pwm -= 1;
					else							_arg_re_md_data._data_divi._sig = ES_FREE;
				}
				else
				{
					_arg_re_md_data._data_divi._sig = _arg_md_data._data_divi._sig;
					_arg_re_md_data._data_divi._pwm = 0;
				}
				
				break;
			}
		}
	}
	else
	{
		_arg_re_md_data._data_all = _arg_md_data._data_all;
	}
}

void 
F_Do_md0 (U_MD_MDC &_arg_md)
{
	__LOW_MD0_SIG0__;
	__LOW_MD0_SIG1__;
	__LOW_MD0_PWM0__;
	__LOW_MD0_PWM1__;
	__LOW_MD0_PWM2__;
	__LOW_MD0_PWM3__;
	__LOW_MD0_PWM4__;
	
	if (_arg_md._data_bit._bit_sig0)	__HIGH_MD0_SIG0__;
	if (_arg_md._data_bit._bit_sig1)	__HIGH_MD0_SIG1__;
	if (_arg_md._data_bit._bit_pwm0)	__HIGH_MD0_PWM0__;
	if (_arg_md._data_bit._bit_pwm1)	__HIGH_MD0_PWM1__;
	if (_arg_md._data_bit._bit_pwm2)	__HIGH_MD0_PWM2__;
	if (_arg_md._data_bit._bit_pwm3)	__HIGH_MD0_PWM3__;
	if (_arg_md._data_bit._bit_pwm4)	__HIGH_MD0_PWM4__;
}

void
F_Do_md1 (U_MD_MDC &_arg_md)
{
	__LOW_MD1_SIG0__;
	__LOW_MD1_SIG1__;
	__LOW_MD1_PWM0__;
	__LOW_MD1_PWM1__;
	__LOW_MD1_PWM2__;
	__LOW_MD1_PWM3__;
	__LOW_MD1_PWM4__;
	
	if (_arg_md._data_bit._bit_sig0)	__HIGH_MD1_SIG0__;
	if (_arg_md._data_bit._bit_sig1)	__HIGH_MD1_SIG1__;
	if (_arg_md._data_bit._bit_pwm0)	__HIGH_MD1_PWM0__;
	if (_arg_md._data_bit._bit_pwm1)	__HIGH_MD1_PWM1__;
	if (_arg_md._data_bit._bit_pwm2)	__HIGH_MD1_PWM2__;
	if (_arg_md._data_bit._bit_pwm3)	__HIGH_MD1_PWM3__;
	if (_arg_md._data_bit._bit_pwm4)	__HIGH_MD1_PWM4__;
}

void
F_Do_md2 (U_MD_MDC &_arg_md)
{
	__LOW_MD2_SIG0__;
	__LOW_MD2_SIG1__;
	__LOW_MD2_PWM0__;
	__LOW_MD2_PWM1__;
	__LOW_MD2_PWM2__;
	__LOW_MD2_PWM3__;
	__LOW_MD2_PWM4__;
	
	if (_arg_md._data_bit._bit_sig0)	__HIGH_MD2_SIG0__;
	if (_arg_md._data_bit._bit_sig1)	__HIGH_MD2_SIG1__;
	if (_arg_md._data_bit._bit_pwm0)	__HIGH_MD2_PWM0__;
	if (_arg_md._data_bit._bit_pwm1)	__HIGH_MD2_PWM1__;
	if (_arg_md._data_bit._bit_pwm2)	__HIGH_MD2_PWM2__;
	if (_arg_md._data_bit._bit_pwm3)	__HIGH_MD2_PWM3__;
	if (_arg_md._data_bit._bit_pwm4)	__HIGH_MD2_PWM4__;
}

void
F_Do_md3 (U_MD_MDC &_arg_md)
{
	__LOW_MD3_SIG0__;
	__LOW_MD3_SIG1__;
	__LOW_MD3_PWM0__;
	__LOW_MD3_PWM1__;
	__LOW_MD3_PWM2__;
	__LOW_MD3_PWM3__;
	__LOW_MD3_PWM4__;
	
	if (_arg_md._data_bit._bit_sig0)	__HIGH_MD3_SIG0__;
	if (_arg_md._data_bit._bit_sig1)	__HIGH_MD3_SIG1__;
	if (_arg_md._data_bit._bit_pwm0)	__HIGH_MD3_PWM0__;
	if (_arg_md._data_bit._bit_pwm1)	__HIGH_MD3_PWM1__;
	if (_arg_md._data_bit._bit_pwm2)	__HIGH_MD3_PWM2__;
	if (_arg_md._data_bit._bit_pwm3)	__HIGH_MD3_PWM3__;
	if (_arg_md._data_bit._bit_pwm4)	__HIGH_MD3_PWM4__;
}

#ifdef __SIMULATOR__

T_DATA 
F_In_main_pseudo ()
{
	static usint _sta_num_md   = 0;
	static usint _sta_num_data = 0;

	U_MD _ret_data;
	
	_ret_data._data_divi_both._num_mdc  = 0;
	_ret_data._data_divi_both._num_md   = _sta_num_md;
	_ret_data._data_divi_both._num_data = _sta_num_data;
	
	if (_sta_num_data == 0)
	{
		_ret_data._data_divi_0._sig = ES_STOP;
		_ret_data._data_divi_0._nf_step = TRUE;
		
		_sta_num_data = 1;
	}
	else if (_sta_num_data == 1)
	{
		_ret_data._data_divi_1._pwm = 0x1f;
		
		_sta_num_data = 0;
		
		_sta_num_md ++;
	}
	
	if (_sta_num_md == 4)	_sta_num_md = 0;
	
	return _ret_data._data_all;
}

#endif
