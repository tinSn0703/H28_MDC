/*
 * H28_MDC.cpp
 *
 * Created: 2016/10/27 11:26:21
 * Author : sn
 
 
 
 */ 

#include "Func_mdc.h"

int main(void)
{
	DDRA  = 0xff;
	PORTA = 0x00;
	DDRB  = 0xff;
	PORTB = 0x00;
	DDRC  = 0xff;
	PORTC = 0x00;
	DDRD  = 0xff;
	PORTD = 0x00;
	
	C_TIMER _timer(ET_OVERFLOW, EC_8, 53035); //0.01[s]
	
	C_UART_R _uart_r_main(EU_UART0);
	
	U_MD _temp_md_data;
	
	U_MD_MDC _md_data_rec[__NUM_MD__];
	U_MD_MDC _md_data_do[__NUM_MD__];

	usint _count_timer = 1;
	
	_uart_r_main.Set_bit9_on();
	
	_timer.Start();
	
	while(1)
	{
		_temp_md_data._data_all = _uart_r_main.In(FALSE);
		
//		if (_temp_md_data._md_data_bit._md_num_mdc == __NUM_MDC__)
		{
			const usint _num = _temp_md_data._data_divi_0._num_md;
			
			switch (_temp_md_data._data_divi_both._num_data)
			{
				case 0:
				{
					_md_data_rec[_num]._data_divi._sig  = _temp_md_data._data_divi_0._sig;
					_md_data_rec[_num]._data_divi._step = _temp_md_data._data_divi_0._nf_step;
					
					break;
				}
				case 1:
				{
					_md_data_rec[_num]._data_divi._pwm = _temp_md_data._data_divi_1._pwm;
					
					break;
				}
			}
		}
		
		if (_timer.Flag_timer_overflow(TRUE))
		{
			_count_timer ++;
			
			usint _timing[__NUM_MD__] = {};
			
			_timing[0] = _count_timer % __MD0_TIMING__;
			_timing[1] = _count_timer % __MD1_TIMING__;
			_timing[2] = _count_timer % __MD2_TIMING__;
			_timing[3] = _count_timer % __MD3_TIMING__;
			
			for (usint i = 0; i < __NUM_MD__; i++)
			{
				if (_timing[i] == 0)
				{
					F_Set_md(_md_data_rec[i], _md_data_do[i]);
				}
			}
			
			F_Do_md0(_md_data_do[0]);
			F_Do_md1(_md_data_do[1]);
			F_Do_md2(_md_data_do[2]);
			F_Do_md3(_md_data_do[3]);
			
			if (_count_timer >= 50000)	_count_timer = 0;
		}
	}
}



