/**********************************************/
/* Author  			: Mahmoud Sayed 	      */
/* Date    			: 28 DES 2023             */
/* Version 			: V02                     */
/* Microcontroller  : STM32F446xx             */
/**********************************************/

#ifndef STM32F446xx_H
#define STM32F446xx_H

/********************                              ***********/
#define SET_BIT(REG, BIT_POSN)      (REG |= (1 << BIT_POSN))
#define CLR_BIT(REG, BIT_POSN)   	(REG &= ~(1 << BIT_POSN))
#define TOGGLE_BIT(REG, BIT_POSN)  	(REG ^= (1 << BIT_POSN))
#define GET_BIT(REG, BIT_POSN)    	((REG >> BIT_POSN) & 1)

/********************varios memories base addresses***********/
#define FLASH_BASE_ADDRESS 	0x08000000UL
#define SRAM_BASE_ADDRESS 	0x20000000UL
#define ROM_BASE_ADDRESS 	0x1FFF0000UL

/********************AHB1 peripgheral base addresses***********/
#define GPIOA_BASE_ADDRESS	 0x40020000U
#define GPIOB_BASE_ADDRESS   0x40020400U
#define GPIOC_BASE_ADDRESS   0x40020800U
#define GPIOD_BASE_ADDRESS   0x40020C00U
#define GPIOE_BASE_ADDRESS   0x40021000U
#define GPIOF_BASE_ADDRESS   0x40021400U
#define GPIOG_BASE_ADDRESS   0x40021800U
#define GPIOH_BASE_ADDRESS   0x40021C00U

#define RCC_BASE_ADDRESS	 0x40023800U

#define STK_BASE_ADDRESS	 0xE000E010U

#define NVIC_BASE_ADDRESS	 0xE000E100U

#define EXTI_BASE_ADDRESS	 0x40013C00U

#define SYSCFG_BASE_ADDRESS	 0x40013800U


/********************AHB2 peripgheral base addresses***********/

/********************AHB3 peripgheral base addresses***********/

/********************APb1 peripgheral base addresses***********/

/********************Apb2 peripgheral base addresses***********/

/********************GPIO Register Definition Structure***********/
typedef struct
{
	volatile uint32_t MODER  	;		     /*GPIO Port mode Regisrer*/
	volatile uint32_t OTYPER 	;            /*GPIO Port output type Regisrer*/
	volatile uint32_t OSPEEDER  ;            /*GPIO Port output speed Regisrer*/
	volatile uint32_t PUPDR		;            /*GPIO Port pull-up/pull-down Regisrer*/
	volatile uint32_t IDR		;            /*GPIO Port input data Regisrer*/
	volatile uint32_t ODR		;            /*GPIO Port output data Regisrer*/
	volatile uint32_t BSRR		;            /*GPIO Port bit set/reset Regisrer*/
	volatile uint32_t LCKR		;            /*GPIO Port configuration lock Regisrer*/
	volatile uint32_t AFR[2]	;            /*GPIO Port alternate function Regisrer*/
}GPIO_RegDif;

/********************RCC Register Definition Structure***********/
typedef struct
{
	volatile uint32_t CR		;
	volatile uint32_t PLLCFGR   ;
	volatile uint32_t CFGR      ;
	volatile uint32_t CIR       ;
	volatile uint32_t AHB1RSTR  ;
	volatile uint32_t AHB2RSTR  ;
	volatile uint32_t Reserved  ;
	volatile uint32_t Reserved1  ;
	volatile uint32_t APB1RSTR  ;
	volatile uint32_t APB2RSTR  ;
	volatile uint32_t Reserved2  ;
	volatile uint32_t Reserved3  ;
	volatile uint32_t AHB1ENR   ;
	volatile uint32_t AHB2ENR   ;
	volatile uint32_t Reserved4  ;
	volatile uint32_t Reserved5  ;
	volatile uint32_t APB1ENR   ;
	volatile uint32_t APB2ENR   ;
	volatile uint32_t Reserved6  ;
	volatile uint32_t Reserved7  ;
	volatile uint32_t AHB1LPENR ;
	volatile uint32_t AHB2LPENR ;
	volatile uint32_t Reserved8  ;
	volatile uint32_t Reserved9  ;
	volatile uint32_t APB1LPENR ;
	volatile uint32_t APB2LPENR ;
	volatile uint32_t Reserved10  ;
	volatile uint32_t Reserved11  ;
	volatile uint32_t BDCR      ;
	volatile uint32_t CSR       ;
	volatile uint32_t Reserved12  ;
	volatile uint32_t Reserved13  ;
	volatile uint32_t SSCGR     ;
	volatile uint32_t PLLI2S    ;
	volatile uint32_t RCC_PLLSAICFGR;
	volatile uint32_t RCC_DCKCFGR      ;
	volatile uint32_t RCC_CKGATENR  ;
	volatile uint32_t DCKCFGR	;
}RCC_RegDif;

/********************SysTick Register Definition Structure***********/
typedef struct
{
	volatile uint32_t STK_CTRL		;
	volatile uint32_t STK_LOAD		;
	volatile uint32_t STK_VAL		;
	volatile uint32_t STK_CALIB		;
}SysTick_RegDif;

/********************SysTick Register Definition Structure***********/
 typedef struct
{
	volatile uint32_t ISER[8]			;
	volatile uint32_t RESERVED1[24]		;
	volatile uint32_t ICER[8]			;
	volatile uint32_t RESERVED2[24]		;
	volatile uint32_t ISPR[8]			;
	volatile uint32_t RESERVED3[24]		;
	volatile uint32_t ICPR[8]			;
	volatile uint32_t RESERVED4[24]		;
	volatile uint32_t IABR[8]			;
	volatile uint32_t RESERVED5[24]		;
	volatile uint8_t IPR[240]			;
}NVIC_RegDif;

/********************EXTI Register Definition Structure***********/
 typedef struct
{
	volatile uint32_t IMR		;
	volatile uint32_t EMR		;
	volatile uint32_t RTSR		;
	volatile uint32_t FTSR		;
	volatile uint32_t SWIER		;
	volatile uint32_t PR		;
}EXTI_RegDif;

/********************SYSCFG Register Definition Structure***********/
 typedef struct
{
	volatile uint32_t MEMRMP			;
	volatile uint32_t PMC				;
	volatile uint32_t CR[4]	 			;
	volatile uint32_t RESERVED1[2]		;
	volatile uint32_t CMPCR				;
	volatile uint32_t RESERVED2[2]		;
	volatile uint32_t CFGR				;
}SYSCFG_RegDif;

/********************GPIO peripgheral Definitions***********/
#define GPIOA 	((GPIO_RegDif*)GPIOA_BASE_ADDRESS)
#define GPIOB 	((GPIO_RegDif*)GPIOB_BASE_ADDRESS)
#define GPIOC 	((GPIO_RegDif*)GPIOC_BASE_ADDRESS)
#define GPIOD 	((GPIO_RegDif*)GPIOD_BASE_ADDRESS)
#define GPIOE 	((GPIO_RegDif*)GPIOE_BASE_ADDRESS)
#define GPIOF 	((GPIO_RegDif*)GPIOF_BASE_ADDRESS)
#define GPIOG 	((GPIO_RegDif*)GPIOG_BASE_ADDRESS)
#define GPIOH 	((GPIO_RegDif*)GPIOH_BASE_ADDRESS)

/********************RCC peripgheral Definitions***********/
#define RCC 	((RCC_RegDif*)RCC_BASE_ADDRESS)

/********************RCC peripgheral Definitions***********/
#define STK 	((SysTick_RegDif*)STK_BASE_ADDRESS)

/********************NVIC peripgheral Definitions***********/
#define NVIC 	((NVIC_RegDif*)NVIC_BASE_ADDRESS)

/********************EXTI peripgheral Definitions***********/
#define EXTI 	((EXTI_RegDif*)EXTI_BASE_ADDRESS)

/********************EXTI peripgheral Definitions***********/
#define SYSCFG 	((SYSCFG_RegDif*)SYSCFG_BASE_ADDRESS)


#endif 
 
