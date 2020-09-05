/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v7.0
processor: MIMXRT1062xxxxA
package_id: MIMXRT1062DVL6A
mcu_data: ksdk2_0
processor_version: 7.0.1
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: f97233eb-8e44-45df-9ba5-345de1b5ecb6
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'msg'
- type_id: 'msg_6e2baaf3b97dbeef01c0043275f9a0e7'
- global_messages: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * DMA0 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'DMA0'
- type: 'edma'
- mode: 'basic'
- custom_name_enabled: 'false'
- type_id: 'edma_6d0dd4e17e2f179c7d42d98767129ede'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'DMA0'
- config_sets:
  - fsl_edma:
    - common_settings:
      - enableContinuousLinkMode: 'false'
      - enableHaltOnError: 'true'
      - enableRoundRobinArbitration: 'false'
      - enableDebugMode: 'false'
    - dma_table:
      - 0: []
    - edma_channels: []
    - errInterruptConfig:
      - enableErrInterrupt: 'false'
      - errorInterrupt:
        - IRQn: 'DMA_ERROR_IRQn'
        - enable_priority: 'false'
        - priority: '0'
        - enable_custom_name: 'false'
    - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const edma_config_t DMA0_config = {
  .enableContinuousLinkMode = false,
  .enableHaltOnError = true,
  .enableRoundRobinArbitration = false,
  .enableDebugMode = false
};

void DMA0_init(void) {
}

/***********************************************************************************************************************
 * ADC2 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'ADC2'
- type: 'adc_12b1msps_sar'
- mode: 'ADC_GENERAL'
- custom_name_enabled: 'false'
- type_id: 'adc_12b1msps_sar_6a490e886349a7b2b07bed10ce7b299b'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'ADC2'
- config_sets:
  - fsl_adc:
    - clockConfig:
      - clockSource: 'kADC_ClockSourceAD'
      - clockSourceFreq: 'custom:10 MHz'
      - clockDriver: 'kADC_ClockDriver2'
      - samplePeriodMode: 'kADC_SamplePeriodShort2Clocks'
      - enableAsynchronousClockOutput: 'true'
    - conversionConfig:
      - resolution: 'kADC_Resolution12Bit'
      - hardwareAverageMode: 'kADC_HardwareAverageCount16'
      - enableHardwareTrigger: 'software'
      - enableHighSpeed: 'false'
      - enableLowPower: 'false'
      - enableContinuousConversion: 'false'
      - enableOverWrite: 'false'
      - enableDma: 'false'
    - resultingTime: []
    - resultCorrection:
      - doAutoCalibration: 'false'
      - offset: '0'
    - hardwareCompareConfiguration:
      - hardwareCompareMode: 'disabled'
      - value1: '0'
      - value2: '0'
    - enableInterrupt: 'false'
    - adc_interrupt:
      - IRQn: 'ADC2_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - adc_channels_config:
      - 0:
        - channelNumber: 'IN.3'
        - channelName: ''
        - channelGroup: '0'
        - initializeChannel: 'false'
        - enableInterruptOnConversionCompleted: 'false'
      - 1:
        - channelNumber: 'IN.2'
        - channelName: ''
        - channelGroup: '0'
        - initializeChannel: 'false'
        - enableInterruptOnConversionCompleted: 'false'
      - 2:
        - channelNumber: 'IN.4'
        - channelName: ''
        - channelGroup: '0'
        - initializeChannel: 'false'
        - enableInterruptOnConversionCompleted: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const adc_config_t ADC2_config = {
  .enableOverWrite = false,
  .enableContinuousConversion = false,
  .enableHighSpeed = false,
  .enableLowPower = false,
  .enableLongSample = false,
  .enableAsynchronousClockOutput = true,
  .referenceVoltageSource = kADC_ReferenceVoltageSourceAlt0,
  .samplePeriodMode = kADC_SamplePeriodShort2Clocks,
  .clockSource = kADC_ClockSourceAD,
  .clockDriver = kADC_ClockDriver2,
  .resolution = kADC_Resolution12Bit
};
const adc_channel_config_t ADC2_channels_config[3] = {
  {
    .channelNumber = 3U,
    .enableInterruptOnConversionCompleted = false
  },
  {
    .channelNumber = 2U,
    .enableInterruptOnConversionCompleted = false
  },
  {
    .channelNumber = 4U,
    .enableInterruptOnConversionCompleted = false
  }
};
void ADC2_init(void) {
  /* Initialize ADC2 peripheral. */
  ADC_Init(ADC2_PERIPHERAL, &ADC2_config);
  /* Configure ADC2 peripheral to average 16 conversions in one measurement. */
  ADC_SetHardwareAverageConfig(ADC2_PERIPHERAL, kADC_HardwareAverageCount16);
}

/***********************************************************************************************************************
 * FLEXIO3 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'FLEXIO3'
- type: 'flexio_mculcd'
- mode: 'polling'
- custom_name_enabled: 'false'
- type_id: 'flexio_mculcd_71c03477918e9bdca54eff5edc785168'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'FLEXIO3'
- config_sets:
  - fsl_flexio_mculcd:
    - clockSource: 'FlexIoClock'
    - clockSourceFreq: 'BOARD_BootClockRUN'
    - peripheralConfig:
      - busType: 'kFLEXIO_MCULCD_8080'
      - dataFlexIOMcuLcdBusWidth: '8'
      - dataPinStartIndex: '0'
      - ENWRPinIndex: '8'
      - RDPinIndex_sel: '12'
      - setCSPinStruct:
        - function_type: 'functionDN'
        - gpio_peripherals: 'GPIO2'
        - gpio_signals: 'gpio_io.01'
        - disableGPIOCheck: 'false'
      - setRSPinStruct:
        - function_type: 'functionDN'
        - gpio_peripherals: 'GPIO2'
        - gpio_signals: 'gpio_io.00'
        - disableGPIOCheck: 'false'
      - txShifterEndIndex: '3'
      - rxShifterStartIndex: '3'
    - config:
      - enable: 'true'
      - enableInDoze: 'false'
      - enableInDebug: 'false'
      - enableFastAccess: 'false'
      - baudRate_Bps: '320000000'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* FlexIO peripheral configuration */
FLEXIO_MCULCD_Type FLEXIO3_peripheralConfig = {
  .flexioBase = FLEXIO3_PERIPHERAL,
  .busType = kFLEXIO_MCULCD_8080,
  .dataPinStartIndex = 0,
  .ENWRPinIndex = 8,
  .RDPinIndex = 12,
  .setRDWRPin = NULL,
  .setCSPin = FLEXIO3_setCSPin,
  .setRSPin = FLEXIO3_setRSPin,
  .txShifterStartIndex = 0,
  .txShifterEndIndex = 3,
  .rxShifterStartIndex = 3,
  .rxShifterEndIndex = 3,
  .timerIndex = 0
};
/* FlexIO MCULCD configuration */
flexio_mculcd_config_t FLEXIO3_config = {
  .enable = true,
  .enableInDoze = false,
  .enableInDebug = false,
  .enableFastAccess = false,
  .baudRate_Bps = 320000000
};

/* GPIO CS pin set function */
void FLEXIO3_setCSPin(bool set){
  GPIO_PinWrite(FLEXIO3_GPIO_PERIPHERAL_CSPIN, FLEXIO3_GPIO_CSPIN, (uint8_t)set);
}

/* GPIO RS pin set function */
void FLEXIO3_setRSPin(bool set){
  GPIO_PinWrite(FLEXIO3_GPIO_PERIPHERAL_RSPIN, FLEXIO3_GPIO_RSPIN, (uint8_t)set);
}

void FLEXIO3_init(void) {
  /* Master initialization */
  FLEXIO_MCULCD_Init(&FLEXIO3_peripheralConfig, &FLEXIO3_config, FLEXIO3_CLK_FREQ);
}

/***********************************************************************************************************************
 * PWM1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'PWM1'
- type: 'pwm'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'pwm_8b65bb514bad0e7add761f3ca35a604d'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'PWM1'
- config_sets:
  - fsl_pwm:
    - clockSource: 'SystemClock'
    - clockSourceFreq: 'BOARD_BootClockRUN'
    - submodules:
      - 0:
        - sm: 'kPWM_Module_3'
        - sm_id: 'SM0'
        - config:
          - clockSource: 'kPWM_BusClock'
          - prescale: 'kPWM_Prescale_Divide_1'
          - pwmFreq: '50 kHz'
          - pairOperation: 'kPWM_Independent'
          - operationMode: 'kPWM_EdgeAligned'
          - initializationControl: 'kPWM_Initialize_LocalSync'
          - reloadLogic: 'kPWM_ReloadImmediate'
          - reloadSelect: 'kPWM_LocalReload'
          - reloadFrequency: 'kPWM_LoadEveryOportunity'
          - forceTrigger: 'kPWM_Force_Local'
          - enableDebugMode: 'false'
          - enableWait: 'false'
          - outputTrigger_sel: ''
          - loadOK: 'false'
          - startCounter: 'false'
          - interrupt_sel: ''
        - channels:
          - 0:
            - channel_id: 'A'
            - functionSel: 'pwmOutput'
            - pwm:
              - dutyCyclePercent: '0'
              - level: 'kPWM_HighTrue'
              - deadtime_input_by_force: 'kPWM_UsePwm'
              - clockSource: 'kPWM_BusClock'
              - deadtimeValue: '0'
              - interrupt_sel: ''
          - 1:
            - channel_id: 'B'
            - functionSel: 'notUsed'
          - 2:
            - channel_id: 'X'
            - functionSel: 'notUsed'
        - common_interruptEn: 'false'
        - common_interrupt:
          - IRQn: 'PWM1_0_IRQn'
          - enable_priority: 'false'
          - priority: '0'
          - enable_custom_name: 'false'
    - faultChannels:
      - 0:
        - commonFaultSetting:
          - clockSource: 'kPWM_BusClock'
          - faultFilterPeriod: '1'
          - faultFilterCount: '3'
          - faultGlitchStretch: 'false'
        - faults:
          - 0:
            - fault_id: 'Fault0'
            - faultClearingMode: 'kPWM_Automatic'
            - faultLevelR: 'low'
            - enableCombinationalPathR: 'nonFiltered'
            - recoverMode: 'kPWM_NoRecovery'
            - fault_int_source: 'false'
          - 1:
            - fault_id: 'Fault1'
            - faultClearingMode: 'kPWM_Automatic'
            - faultLevelR: 'low'
            - enableCombinationalPathR: 'nonFiltered'
            - recoverMode: 'kPWM_NoRecovery'
            - fault_int_source: 'false'
          - 2:
            - fault_id: 'Fault2'
            - faultClearingMode: 'kPWM_Automatic'
            - faultLevelR: 'low'
            - enableCombinationalPathR: 'nonFiltered'
            - recoverMode: 'kPWM_NoRecovery'
            - fault_int_source: 'false'
          - 3:
            - fault_id: 'Fault3'
            - faultClearingMode: 'kPWM_Automatic'
            - faultLevelR: 'low'
            - enableCombinationalPathR: 'nonFiltered'
            - recoverMode: 'kPWM_NoRecovery'
            - fault_int_source: 'false'
    - fault_error_interruptEn: 'false'
    - fault_error_interrupt:
      - IRQn: 'PWM1_FAULT_IRQn'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* PWM main configuration */
pwm_config_t PWM1_SM0_config = {
  .clockSource = kPWM_BusClock,
  .prescale = kPWM_Prescale_Divide_1,
  .pairOperation = kPWM_Independent,
  .initializationControl = kPWM_Initialize_LocalSync,
  .reloadLogic = kPWM_ReloadImmediate,
  .reloadSelect = kPWM_LocalReload,
  .reloadFrequency = kPWM_LoadEveryOportunity,
  .forceTrigger = kPWM_Force_Local,
  .enableDebugMode = false,
  .enableWait = false
};

pwm_signal_param_t PWM1_SM0_pwm_function_config[1]= {
  {
    .pwmChannel = kPWM_PwmA,
    .dutyCyclePercent = 0,
    .level = kPWM_HighTrue,
    .deadtimeValue = 0
  },
};

const pwm_fault_input_filter_param_t PWM1_faultInputFilter_config = {
  .faultFilterPeriod = 1,
  .faultFilterCount = 3,
  .faultGlitchStretch = false
};
const pwm_fault_param_t PWM1_Fault0_fault_config = {
  .faultClearingMode = kPWM_Automatic,
  .faultLevel = false,
  .enableCombinationalPath = false,
  .recoverMode = kPWM_NoRecovery
};
const pwm_fault_param_t PWM1_Fault1_fault_config = {
  .faultClearingMode = kPWM_Automatic,
  .faultLevel = false,
  .enableCombinationalPath = false,
  .recoverMode = kPWM_NoRecovery
};
const pwm_fault_param_t PWM1_Fault2_fault_config = {
  .faultClearingMode = kPWM_Automatic,
  .faultLevel = false,
  .enableCombinationalPath = false,
  .recoverMode = kPWM_NoRecovery
};
const pwm_fault_param_t PWM1_Fault3_fault_config = {
  .faultClearingMode = kPWM_Automatic,
  .faultLevel = false,
  .enableCombinationalPath = false,
  .recoverMode = kPWM_NoRecovery
};

void PWM1_init(void) {
  /* Initialize PWM submodule SM0 main configuration */
  PWM_Init(PWM1_PERIPHERAL, PWM1_SM0, &PWM1_SM0_config);
  /* Initialize fault input filter configuration */
  PWM_SetupFaultInputFilter(PWM1_PERIPHERAL, &PWM1_faultInputFilter_config);
  /* Initialize fault channel 0 fault Fault0 configuration */
  PWM_SetupFaults(PWM1_PERIPHERAL, PWM1_F0_FAULT0, &PWM1_Fault0_fault_config);
  /* Initialize fault channel 0 fault Fault1 configuration */
  PWM_SetupFaults(PWM1_PERIPHERAL, PWM1_F0_FAULT1, &PWM1_Fault1_fault_config);
  /* Initialize fault channel 0 fault Fault2 configuration */
  PWM_SetupFaults(PWM1_PERIPHERAL, PWM1_F0_FAULT2, &PWM1_Fault2_fault_config);
  /* Initialize fault channel 0 fault Fault3 configuration */
  PWM_SetupFaults(PWM1_PERIPHERAL, PWM1_F0_FAULT3, &PWM1_Fault3_fault_config);
  /* Initialize deadtime logic input for the channel A */
  PWM_SetupForceSignal(PWM1_PERIPHERAL, PWM1_SM0, PWM1_SM0_A, kPWM_UsePwm);
  /* Setup PWM output setting for submodule SM0 */
  PWM_SetupPwm(PWM1_PERIPHERAL, PWM1_SM0, PWM1_SM0_pwm_function_config, 1U, kPWM_EdgeAligned, PWM1_SM0_COUNTER_FREQ_HZ, PWM1_SM0_COUNTER_CLK_SOURCE_FREQ_HZ);
}

/***********************************************************************************************************************
 * SAI1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'SAI1'
- type: 'sai'
- mode: 'edma'
- custom_name_enabled: 'false'
- type_id: 'sai_930e9b093093df3f492b3fa05284d81f'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'SAI1'
- config_sets:
  - fsl_sai:
    - usage: 'playback'
    - signal_config:
      - 0:
        - sourceTx: 'Tx'
      - 1:
        - sourceTx: 'Tx'
    - syncSwapI: []
    - bclkTxSetting: []
    - syncTxSetting: []
    - whole:
      - tx_group:
        - sai_transceiver:
          - bitClock:
            - modeM: 'master'
            - bitClockSource: 'kSAI_BclkSourceBusclk'
            - bitClockSourceFreq: 'BOARD_BootClockRUN'
            - bclkPolarityM: 'kSAI_PolarityActiveLow'
            - bclkInputDelayM: 'false'
          - frameSync:
            - modeM: 'master'
            - frameSyncWidthM: '16'
            - frameSyncPolarityM: 'kSAI_PolarityActiveLow'
            - frameSyncEarlyM: 'false'
          - sampleRate_Hz: 'kSAI_SampleRate16KHz'
          - channelMask: 'kSAI_Channel0Mask'
          - serialData:
            - dataMode: 'kSAI_DataPinStateTriState'
            - differentFirstWord: 'false'
            - sameDataWordLengthM: 'kSAI_WordWidth16bits'
            - dataOrder: 'kSAI_DataMSB'
            - dataFirstBitShiftedM: '16'
            - dataWordNumM: '2'
            - dataMasked_config:
              - dataMasked_L:
                - 0: 'true'
                - 1: 'false'
                - 2: 'false'
                - 3: 'false'
                - 4: 'false'
                - 5: 'false'
                - 6: 'false'
                - 7: 'false'
                - 8: 'false'
                - 9: 'false'
                - 10: 'false'
                - 11: 'false'
                - 12: 'false'
                - 13: 'false'
                - 14: 'false'
                - 15: 'false'
              - dataMasked_H:
                - 0: 'false'
                - 1: 'false'
                - 2: 'false'
                - 3: 'false'
                - 4: 'false'
                - 5: 'false'
                - 6: 'false'
                - 7: 'false'
                - 8: 'false'
                - 9: 'false'
                - 10: 'false'
                - 11: 'false'
                - 12: 'false'
                - 13: 'false'
                - 14: 'false'
                - 15: 'false'
          - fifo:
            - fifoWatermarkM: '0'
            - fifoPacking: 'kSAI_FifoPackingDisabled'
            - fifoContinueOneError: 'true'
        - edma_group:
          - enable_edma_channel: 'true'
          - edma_channel:
            - eDMAn: '0'
            - eDMA_source: 'kDmaRequestMuxSai1Tx'
            - enableTriggerPIT: 'false'
            - init_channel_priority: 'false'
            - edma_channel_Preemption:
              - enableChannelPreemption: 'false'
              - enablePreemptAbility: 'false'
              - channelPriority: '0'
            - enable_custom_name: 'false'
          - sai_edma_handle:
            - enable_custom_name: 'false'
            - init_callback: 'true'
            - callback_fcn: 'i2sCallback'
            - user_data: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
/* SAI1 Tx configuration */
sai_transceiver_t SAI1_Tx_config = {
  .masterSlave = kSAI_Master,
  .bitClock = {
    .bclkSrcSwap = false,
    .bclkSource = kSAI_BclkSourceBusclk,
    .bclkPolarity = kSAI_PolarityActiveLow,
    .bclkInputDelay = false
  },
  .frameSync = {
    .frameSyncWidth = 16U,
    .frameSyncPolarity = kSAI_PolarityActiveLow,
    .frameSyncEarly = false,
  },
  .syncMode = kSAI_ModeAsync,
  .channelMask = kSAI_Channel0Mask,
  .startChannel = 0U,
  .endChannel = 0U,
  .channelNums = 1U,
  .serialData = {
    .dataMode = kSAI_DataPinStateTriState,
    .dataWord0Length = (uint8_t)kSAI_WordWidth16bits,
    .dataWordNLength = (uint8_t)kSAI_WordWidth16bits,
    .dataWordLength = (uint8_t)kSAI_WordWidth16bits,
    .dataOrder = kSAI_DataMSB,
    .dataFirstBitShifted = 16U,
    .dataWordNum = 2U,
    .dataMaskedWord = 0x1U
  },
  .fifo = {
    .fifoWatermark = 0U,
    .fifoPacking = kSAI_FifoPackingDisabled,
    .fifoContinueOneError = true
  }
};
edma_handle_t SAI1_TX_Handle;
sai_edma_handle_t SAI1_SAI_Tx_eDMA_Handle;

void SAI1_init(void) {
  /* Set the source kDmaRequestMuxSai1Tx request in the DMAMUX */
  DMAMUX_SetSource(SAI1_TX_DMAMUX_BASEADDR, SAI1_TX_DMA_CHANNEL, SAI1_TX_DMA_REQUEST);
  /* Enable the channel 0 in the DMAMUX */
  DMAMUX_EnableChannel(SAI1_TX_DMAMUX_BASEADDR, SAI1_TX_DMA_CHANNEL);
  /* Create the eDMA SAI1_TX_Handle handle */
  EDMA_CreateHandle(&SAI1_TX_Handle, SAI1_TX_DMA_BASEADDR, SAI1_TX_DMA_CHANNEL);
  /* Initialize SAI clock gate */
  SAI_Init(SAI1_PERIPHERAL);
  /* Create the SAI Tx eDMA handle */
  SAI_TransferTxCreateHandleEDMA(SAI1_PERIPHERAL, &SAI1_SAI_Tx_eDMA_Handle, i2sCallback, NULL, &SAI1_TX_Handle);
  /* Configures SAI Tx sub-module functionality */
  SAI_TransferTxSetConfigEDMA(SAI1_PERIPHERAL, &SAI1_SAI_Tx_eDMA_Handle, &SAI1_Tx_config);
  /* Set up SAI Tx bitclock rate by calculation of divider. */
  SAI_TxSetBitClockRate(SAI1_PERIPHERAL, SAI1_TX_BCLK_SOURCE_CLOCK_HZ, SAI1_TX_SAMPLE_RATE, SAI1_TX_WORD_WIDTH, SAI1_TX_WORDS_PER_FRAME);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Global initialization */
  DMAMUX_Init(DMA0_DMAMUX_BASEADDR);
  EDMA_Init(DMA0_DMA_BASEADDR, &DMA0_config);

  /* Initialize components */
  DMA0_init();
  ADC2_init();
  FLEXIO3_init();
  PWM1_init();
  SAI1_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
