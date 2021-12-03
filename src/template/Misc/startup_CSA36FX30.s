;/*---------------------------------------------------------------------------------------------------------*/
;/*                                                                                                         */
;/* Copyright(c) 2016 SHENZHEN CHIPSEA TECHNOLOGIES CO.,LTD. All rights reserved.                           */
;/*                                                                                                         */
;/*---------------------------------------------------------------------------------------------------------*/

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

                 GBLL    SEMIHOSTED
SEMIHOSTED       SETL    {FALSE}

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

Stack_Size      EQU     0x00000600

                AREA    STACK, NOINIT, READWRITE, ALIGN=3
Stack_Mem       SPACE   Stack_Size
__initial_sp


; <h> Heap Configuration
;   <o>  Heap Size (in Bytes) <0x0-0xFFFFFFFF:8>
; </h>

Heap_Size       EQU     0x00000000

                AREA    HEAP, NOINIT, READWRITE, ALIGN=3
__heap_base
Heap_Mem        SPACE   Heap_Size
__heap_limit


                PRESERVE8
                THUMB

; Vector Table Mapped to Address 0 at Reset
                AREA    RESET, DATA, READONLY
                EXPORT  __Vectors

__Vectors       DCD     __initial_sp              ; Top of Stack        0
                DCD     Reset_Handler             ; Reset Handler       4
                DCD     NMI_Handler               ; NMI Handler         8
                DCD     HardFault_Handler         ; Hard Fault Handler  C
                DCD     0                         ; Reserved            10
                DCD     0                         ; Reserved            14
                DCD     0                         ; Reserved            18
                DCD     0                         ; Reserved            1C
                DCD     0                         ; Reserved            20
                DCD     0                         ; Reserved            24
                DCD     0                         ; Reserved            28
                DCD     SVC_Handler               ; SVCall Handler      2C
                DCD     0                         ; Reserved            30
                DCD     0                         ; Reserved            34
                DCD     PendSV_Handler            ; PendSV Handler      38
                DCD     SysTick_Handler           ; SysTick Handler     3C

                ; External Interrupts : maximum of 32 External Interrupts are possible
                DCD     BOD_IRQHandler            ; 40 , IRQ0		
                DCD     WDT_IRQHandler            ; 44 , IRQ1			
                DCD     EINT0_IRQHandler          ; 48 , IRQ2
                DCD     EINT1_IRQHandler          ; 4C , IRQ3
                DCD     EINT2_IRQHandler          ; 50 , IRQ4				
                DCD     GPAB_IRQHandler           ; 54 , IRQ5
                DCD     TMR0_IRQHandler           ; 58 , IRQ6
                DCD     TMR1_IRQHandler           ; 5C , IRQ7
                DCD     TMR2_IRQHandler           ; 60 , IRQ8
                DCD     UART0_IRQHandler          ; 64 , IRQ9			
                DCD     SPI0_IRQHandler 		  ; 68 , IRQ10		
                DCD     I2C0_IRQHandler           ; 6C , IRQ11
                DCD     UPD0_IRQHandler 		  ; 70 , IRQ12  	
                DCD     UPD1_IRQHandler 		  ; 74 , IRQ13					
                DCD     ADC_IRQHandler            ; 78 , IRQ14
                DCD     DAC_IRQHandler            ; 7C , IRQ15
                DCD     ACMP0_IRQHandler 		  ; 80 , IRQ16 		
                DCD     ACMP1_IRQHandler 		  ; 84 , IRQ17	
                DCD     PD_WU_IRQHandler 		  ; 88 , IRQ18					
                DCD     TYPEC_IRQHandler 		  ; 8c , IRQ19	
                DCD     Default_IRQHandler 
                DCD     Default_IRQHandler 
                DCD     Default_IRQHandler 
                DCD     Default_IRQHandler 
                DCD     Default_IRQHandler 
                DCD     Default_IRQHandler
                DCD     Default_IRQHandler 
                DCD     Default_IRQHandler  
                DCD     Default_IRQHandler  
                DCD     Default_IRQHandler 
                DCD     Default_IRQHandler
                DCD     Default_IRQHandler  
                 
    
                AREA    |.text|, CODE, READONLY
          
; Reset Handler 
;ENTRY
Reset_Handler   PROC
                EXPORT  Reset_Handler             [WEAK]
                IMPORT  SystemInit
                IMPORT  __main
                LDR     R0, =SystemInit
                BLX     R0
                LDR     R0, =__main
                BX      R0
                ENDP
                
                
; Dummy Exception Handlers (infinite loops which can be modified)                
                
NMI_Handler     PROC
                EXPORT  NMI_Handler               [WEAK]
                B       .
                ENDP
HardFault_Handler\
                PROC
                EXPORT  HardFault_Handler         [WEAK]
                B       .
                ENDP
SVC_Handler     PROC
                EXPORT  SVC_Handler               [WEAK]
                B       .
                ENDP
PendSV_Handler  PROC
                EXPORT  PendSV_Handler            [WEAK]
                B       .
                ENDP
SysTick_Handler PROC
                EXPORT  SysTick_Handler           [WEAK]
                B       .
                ENDP

Default_Handler PROC			
                EXPORT  BOD_IRQHandler           [WEAK]
                EXPORT  WDT_IRQHandler           [WEAK]
                EXPORT  EINT0_IRQHandler            [WEAK]
                EXPORT  EINT1_IRQHandler            [WEAK]
                EXPORT  EINT2_IRQHandler            [WEAK]
                EXPORT  GPAB_IRQHandler         [WEAK]
                EXPORT  TMR0_IRQHandler         [WEAK]
                EXPORT  TMR1_IRQHandler            [WEAK]
                EXPORT  TMR2_IRQHandler            [WEAK]
                EXPORT  UART0_IRQHandler            [WEAK]
                EXPORT  SPI0_IRQHandler         [WEAK]
                EXPORT  I2C0_IRQHandler            [WEAK]
                EXPORT  UPD0_IRQHandler            [WEAK]
                EXPORT  UPD1_IRQHandler          [WEAK]
                EXPORT  ADC_IRQHandler          [WEAK]
                EXPORT  DAC_IRQHandler        [WEAK]
                EXPORT  ACMP0_IRQHandler        [WEAK]
                EXPORT  ACMP1_IRQHandler        [WEAK]
                EXPORT  PD_WU_IRQHandler        [WEAK]
                EXPORT  TYPEC_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
				EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]
                EXPORT  Default_IRQHandler        [WEAK]

BOD_IRQHandler           
WDT_IRQHandler           
EINT0_IRQHandler            
EINT1_IRQHandler            
EINT2_IRQHandler            
GPAB_IRQHandler         
TMR0_IRQHandler         
TMR1_IRQHandler            
TMR2_IRQHandler            
UART0_IRQHandler            
SPI0_IRQHandler         
I2C0_IRQHandler            
UPD0_IRQHandler            
UPD1_IRQHandler          
ADC_IRQHandler          
DAC_IRQHandler        
ACMP0_IRQHandler        
ACMP1_IRQHandler        
PD_WU_IRQHandler  
TYPEC_IRQHandler
Default_IRQHandler        

                B       .
                ENDP


                ALIGN


; User Initial Stack & Heap

                IF      :DEF:__MICROLIB
                
                EXPORT  __initial_sp
                EXPORT  __heap_base
                EXPORT  __heap_limit
                
                ELSE
                
                IMPORT  __use_two_region_memory
                EXPORT  __user_initial_stackheap
__user_initial_stackheap

                LDR     R0, =  Heap_Mem
                LDR     R1, = (Stack_Mem + Stack_Size)
                LDR     R2, = (Heap_Mem +  Heap_Size)
                LDR     R3, = Stack_Mem
                BX      LR

                ALIGN

                ENDIF

    
                END
