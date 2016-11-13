
#pragma once

/************************************************************************/

//#define __SIMULATOR__ 1

/************************************************************************/

#include <avr/io.h>
#include <H28_AVR/H28_AVR.h>
#include <H28_NEW_MAIN/H28_NEW_MAIN.h>

/************************************************************************/

#define __NUM_MDC__	1
#define __NUM_MD__	4

#define __MD0_TIMING__ 2
#define __MD1_TIMING__ 2
#define __MD2_TIMING__ 2
#define __MD3_TIMING__ 2

#define __MD0_SIG0__ PD6
#define __MD0_SIG1__ PD7
#define __MD0_PWM0__ PD1
#define __MD0_PWM1__ PD2
#define __MD0_PWM2__ PD3
#define __MD0_PWM3__ PD4
#define __MD0_PWM4__ PD5

#define __MD1_SIG0__ PB3
#define __MD1_SIG1__ PB4
#define __MD1_PWM0__ PA1
#define __MD1_PWM1__ PA0
#define __MD1_PWM2__ PB0
#define __MD1_PWM3__ PB1
#define __MD1_PWM4__ PB2

#define __MD2_SIG0__ PA3
#define __MD2_SIG1__ PA2
#define __MD2_PWM0__ PC7
#define __MD2_PWM1__ PA7
#define __MD2_PWM2__ PA6
#define __MD2_PWM3__ PA5
#define __MD2_PWM4__ PA4

#define __MD3_SIG0__ PC5
#define __MD3_SIG1__ PC6
#define __MD3_PWM0__ PC0
#define __MD3_PWM1__ PC1
#define __MD3_PWM2__ PC2
#define __MD3_PWM3__ PC3
#define __MD3_PWM4__ PC4

#define __BIT_MD0_SIG0__ (1 << __MD0_SIG0__)
#define __BIT_MD0_SIG1__ (1 << __MD0_SIG1__)
#define __BIT_MD0_PWM0__ (1 << __MD0_PWM0__)
#define __BIT_MD0_PWM1__ (1 << __MD0_PWM1__)
#define __BIT_MD0_PWM2__ (1 << __MD0_PWM2__)
#define __BIT_MD0_PWM3__ (1 << __MD0_PWM3__)
#define __BIT_MD0_PWM4__ (1 << __MD0_PWM4__)

#define __BIT_MD1_SIG0__ (1 << __MD1_SIG0__)
#define __BIT_MD1_SIG1__ (1 << __MD1_SIG1__)
#define __BIT_MD1_PWM0__ (1 << __MD1_PWM0__)
#define __BIT_MD1_PWM1__ (1 << __MD1_PWM1__)
#define __BIT_MD1_PWM2__ (1 << __MD1_PWM2__)
#define __BIT_MD1_PWM3__ (1 << __MD1_PWM3__)
#define __BIT_MD1_PWM4__ (1 << __MD1_PWM4__)

#define __BIT_MD2_SIG0__ (1 << __MD2_SIG0__)
#define __BIT_MD2_SIG1__ (1 << __MD2_SIG1__)
#define __BIT_MD2_PWM0__ (1 << __MD2_PWM0__)
#define __BIT_MD2_PWM1__ (1 << __MD2_PWM1__)
#define __BIT_MD2_PWM2__ (1 << __MD2_PWM2__)
#define __BIT_MD2_PWM3__ (1 << __MD2_PWM3__)
#define __BIT_MD2_PWM4__ (1 << __MD2_PWM4__)

#define __BIT_MD3_SIG0__ (1 << __MD3_SIG0__)
#define __BIT_MD3_SIG1__ (1 << __MD3_SIG1__)
#define __BIT_MD3_PWM0__ (1 << __MD3_PWM0__)
#define __BIT_MD3_PWM1__ (1 << __MD3_PWM1__)
#define __BIT_MD3_PWM2__ (1 << __MD3_PWM2__)
#define __BIT_MD3_PWM3__ (1 << __MD3_PWM3__)
#define __BIT_MD3_PWM4__ (1 << __MD3_PWM4__)

#define __PORT_MD0_SIG0__ PORTD
#define __PORT_MD0_SIG1__ PORTD
#define __PORT_MD0_PWM0__ PORTD
#define __PORT_MD0_PWM1__ PORTD
#define __PORT_MD0_PWM2__ PORTD
#define __PORT_MD0_PWM3__ PORTD
#define __PORT_MD0_PWM4__ PORTD

#define __PORT_MD1_SIG0__ PORTB
#define __PORT_MD1_SIG1__ PORTB
#define __PORT_MD1_PWM0__ PORTA
#define __PORT_MD1_PWM1__ PORTA
#define __PORT_MD1_PWM2__ PORTB
#define __PORT_MD1_PWM3__ PORTB
#define __PORT_MD1_PWM4__ PORTB

#define __PORT_MD2_SIG0__ PORTA
#define __PORT_MD2_SIG1__ PORTA
#define __PORT_MD2_PWM0__ PORTC
#define __PORT_MD2_PWM1__ PORTA
#define __PORT_MD2_PWM2__ PORTA
#define __PORT_MD2_PWM3__ PORTA
#define __PORT_MD2_PWM4__ PORTA

#define __PORT_MD3_SIG0__ PORTC
#define __PORT_MD3_SIG1__ PORTC
#define __PORT_MD3_PWM0__ PORTC
#define __PORT_MD3_PWM1__ PORTC
#define __PORT_MD3_PWM2__ PORTC
#define __PORT_MD3_PWM3__ PORTC
#define __PORT_MD3_PWM4__ PORTC

#define __HIGH_MD0_SIG0__ (__PORT_MD0_SIG0__ |= __BIT_MD0_SIG0__)
#define __HIGH_MD0_SIG1__ (__PORT_MD0_SIG1__ |= __BIT_MD0_SIG1__)
#define __HIGH_MD0_PWM0__ (__PORT_MD0_PWM0__ |= __BIT_MD0_PWM0__)
#define __HIGH_MD0_PWM1__ (__PORT_MD0_PWM1__ |= __BIT_MD0_PWM1__)
#define __HIGH_MD0_PWM2__ (__PORT_MD0_PWM2__ |= __BIT_MD0_PWM2__)
#define __HIGH_MD0_PWM3__ (__PORT_MD0_PWM3__ |= __BIT_MD0_PWM3__)
#define __HIGH_MD0_PWM4__ (__PORT_MD0_PWM4__ |= __BIT_MD0_PWM4__)

#define __HIGH_MD1_SIG0__ (__PORT_MD1_SIG0__ |= __BIT_MD1_SIG0__)
#define __HIGH_MD1_SIG1__ (__PORT_MD1_SIG1__ |= __BIT_MD1_SIG1__)
#define __HIGH_MD1_PWM0__ (__PORT_MD1_PWM0__ |= __BIT_MD1_PWM0__)
#define __HIGH_MD1_PWM1__ (__PORT_MD1_PWM1__ |= __BIT_MD1_PWM1__)
#define __HIGH_MD1_PWM2__ (__PORT_MD1_PWM2__ |= __BIT_MD1_PWM2__)
#define __HIGH_MD1_PWM3__ (__PORT_MD1_PWM3__ |= __BIT_MD1_PWM3__)
#define __HIGH_MD1_PWM4__ (__PORT_MD1_PWM4__ |= __BIT_MD1_PWM4__)

#define __HIGH_MD2_SIG0__ (__PORT_MD2_SIG0__ |= __BIT_MD2_SIG0__)
#define __HIGH_MD2_SIG1__ (__PORT_MD2_SIG1__ |= __BIT_MD2_SIG1__)
#define __HIGH_MD2_PWM0__ (__PORT_MD2_PWM0__ |= __BIT_MD2_PWM0__)
#define __HIGH_MD2_PWM1__ (__PORT_MD2_PWM1__ |= __BIT_MD2_PWM1__)
#define __HIGH_MD2_PWM2__ (__PORT_MD2_PWM2__ |= __BIT_MD2_PWM2__)
#define __HIGH_MD2_PWM3__ (__PORT_MD2_PWM3__ |= __BIT_MD2_PWM3__)
#define __HIGH_MD2_PWM4__ (__PORT_MD2_PWM4__ |= __BIT_MD2_PWM4__)

#define __HIGH_MD3_SIG0__ (__PORT_MD3_SIG0__ |= __BIT_MD3_SIG0__)
#define __HIGH_MD3_SIG1__ (__PORT_MD3_SIG1__ |= __BIT_MD3_SIG1__)
#define __HIGH_MD3_PWM0__ (__PORT_MD3_PWM0__ |= __BIT_MD3_PWM0__)
#define __HIGH_MD3_PWM1__ (__PORT_MD3_PWM1__ |= __BIT_MD3_PWM1__)
#define __HIGH_MD3_PWM2__ (__PORT_MD3_PWM2__ |= __BIT_MD3_PWM2__)
#define __HIGH_MD3_PWM3__ (__PORT_MD3_PWM3__ |= __BIT_MD3_PWM3__)
#define __HIGH_MD3_PWM4__ (__PORT_MD3_PWM4__ |= __BIT_MD3_PWM4__)

#define __LOW_MD0_SIG0__ (__PORT_MD0_SIG0__ &= ~__BIT_MD0_SIG0__)
#define __LOW_MD0_SIG1__ (__PORT_MD0_SIG1__ &= ~__BIT_MD0_SIG1__)
#define __LOW_MD0_PWM0__ (__PORT_MD0_PWM0__ &= ~__BIT_MD0_PWM0__)
#define __LOW_MD0_PWM1__ (__PORT_MD0_PWM1__ &= ~__BIT_MD0_PWM1__)
#define __LOW_MD0_PWM2__ (__PORT_MD0_PWM2__ &= ~__BIT_MD0_PWM2__)
#define __LOW_MD0_PWM3__ (__PORT_MD0_PWM3__ &= ~__BIT_MD0_PWM3__)
#define __LOW_MD0_PWM4__ (__PORT_MD0_PWM4__ &= ~__BIT_MD0_PWM4__)

#define __LOW_MD1_SIG0__ (__PORT_MD1_SIG0__ &= ~__BIT_MD1_SIG0__)
#define __LOW_MD1_SIG1__ (__PORT_MD1_SIG1__ &= ~__BIT_MD1_SIG1__)
#define __LOW_MD1_PWM0__ (__PORT_MD1_PWM0__ &= ~__BIT_MD1_PWM0__)
#define __LOW_MD1_PWM1__ (__PORT_MD1_PWM1__ &= ~__BIT_MD1_PWM1__)
#define __LOW_MD1_PWM2__ (__PORT_MD1_PWM2__ &= ~__BIT_MD1_PWM2__)
#define __LOW_MD1_PWM3__ (__PORT_MD1_PWM3__ &= ~__BIT_MD1_PWM3__)
#define __LOW_MD1_PWM4__ (__PORT_MD1_PWM4__ &= ~__BIT_MD1_PWM4__)

#define __LOW_MD2_SIG0__ (__PORT_MD2_SIG0__ &= ~__BIT_MD2_SIG0__)
#define __LOW_MD2_SIG1__ (__PORT_MD2_SIG1__ &= ~__BIT_MD2_SIG1__)
#define __LOW_MD2_PWM0__ (__PORT_MD2_PWM0__ &= ~__BIT_MD2_PWM0__)
#define __LOW_MD2_PWM1__ (__PORT_MD2_PWM1__ &= ~__BIT_MD2_PWM1__)
#define __LOW_MD2_PWM2__ (__PORT_MD2_PWM2__ &= ~__BIT_MD2_PWM2__)
#define __LOW_MD2_PWM3__ (__PORT_MD2_PWM3__ &= ~__BIT_MD2_PWM3__)
#define __LOW_MD2_PWM4__ (__PORT_MD2_PWM4__ &= ~__BIT_MD2_PWM4__)

#define __LOW_MD3_SIG0__ (__PORT_MD3_SIG0__ &= ~__BIT_MD3_SIG0__)
#define __LOW_MD3_SIG1__ (__PORT_MD3_SIG1__ &= ~__BIT_MD3_SIG1__)
#define __LOW_MD3_PWM0__ (__PORT_MD3_PWM0__ &= ~__BIT_MD3_PWM0__)
#define __LOW_MD3_PWM1__ (__PORT_MD3_PWM1__ &= ~__BIT_MD3_PWM1__)
#define __LOW_MD3_PWM2__ (__PORT_MD3_PWM2__ &= ~__BIT_MD3_PWM2__)
#define __LOW_MD3_PWM3__ (__PORT_MD3_PWM3__ &= ~__BIT_MD3_PWM3__)
#define __LOW_MD3_PWM4__ (__PORT_MD3_PWM4__ &= ~__BIT_MD3_PWM4__)

/************************************************************************/

union U_MD_MDC
{
private:
	
	struct S_MD_MDC
	{
		E_SIG _sig :2;
		T_PWM _pwm :5;
		BOOL _step :1;
	};
	
	struct S_BIT
	{
		BOOL _bit_sig0 :1;
		BOOL _bit_sig1 :1;
		BOOL _bit_pwm0 :1;
		BOOL _bit_pwm1 :1;
		BOOL _bit_pwm2 :1;
		BOOL _bit_pwm3 :1;
		BOOL _bit_pwm4 :1;
	};
	
public:
	
	S_MD_MDC _data_divi	 ;
	S_BIT	 _data_bit	 ;
	usint	 _data_all :8;	
	
	U_MD_MDC()
	{
		_data_all = 0;
	}
};

/************************************************************************/

/** Made 2016 / 10 / 28 (Fri)
 * \brief 
 *	　dataのセットを行います。ちょっとメインが見づらくなってきたので。
 *	　_arg_md_dataを_arg_re_md_dataに反映させます。
 *
 * \param _arg_md_data		: 受信したデータ
 * \param _arg_re_md_data	: 出力するデータ。兼、前に出力したデータ
 */
void F_Set_md(const U_MD_MDC &_arg_md_data, U_MD_MDC &_arg_re_md_data);

/** Made 2016 / 10 / 27 (Tue)
 * \brief
 *	MD0へデータを出力します。
 *
 * \param _arg_md : 出力するデータ
 */
void F_Do_md0 (U_MD_MDC &_arg_md);

/** Made 2016 / 10 / 27 (Tue)
 * \brief
 *	MD1へデータを出力します。
 *
 * \param _arg_md : 出力するデータ
 */
void F_Do_md1 (U_MD_MDC &_arg_md);

/** Made 2016 / 10 / 27 (Tue)
 * \brief
 *	MD2へデータを出力します。
 *
 * \param _arg_md : 出力するデータ
 */
void F_Do_md2 (U_MD_MDC &_arg_md);

/** Made 2016 / 10 / 27 (Tue)
 * \brief
 *	MD3へデータを出力します。
 *
 * \param _arg_md : 出力するデータ
 */
void F_Do_md3 (U_MD_MDC &_arg_md);

#ifdef __SIMULATOR__

/** Made 2016 / 10 / 28 (Fri)
 * \brief 
 * 
 * 
 * \return T_DATA
 */
T_DATA F_In_main_pseudo();

#endif

/************************************************************************/

#include "Func_mdc.cpp"