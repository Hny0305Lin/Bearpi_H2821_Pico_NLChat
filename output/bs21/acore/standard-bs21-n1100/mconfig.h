/* Copyright (c) @CompanyNameMagicTag 2022-2022. All rights reserved. */
#define CONFIG_SAMPLE_ENABLE 1
#define CONFIG_UART_TXD_PIN 19
#define CONFIG_UART_RXD_PIN 20
#define CONFIG_ENABLE_PRODUCTS_SAMPLE 1
#define CONFIG_SAMPLE_SUPPORT_SLE_UART 1
#define CONFIG_SLE_UART_BUS 0
#define CONFIG_SAMPLE_SUPPORT_SLE_UART_CLIENT 1
#define CONFIG_SAMPLE_SUPPORT_NORMAL_TYPE 1
#define CONFIG_DRIVER_SUPPORT_ADC 1
#define CONFIG_ADC_USING_V153 1
#define CONFIG_ADC_SUPPORT_AFE 1
#define CONFIG_ADC_SUPPORT_DIFFERENTIAL 1
#define CONFIG_ADC_SUPPORT_AMIC 1
#define CONFIG_AFE_SAMPLE_TIMES 4
#define CONFIG_DRIVER_SUPPORT_CAN_FD 1
#define CONFIG_DRIVER_SUPPORT_CPUTRACE 1
#define CONFIG_CPU_TRACE_SUPPORT_LPM 1
#define CONFIG_DRIVER_SUPPORT_DMA 1
#define CONFIG_DMA_SUPPORT_LLI 1
#define CONFIG_DMA_SUPPORT_LPM 1
#define CONFIG_DMA_USING_V100 1
#define CONFIG_DMA_USING_V120 1
#define CONFIG_DRIVER_SUPPORT_EFUSE 1
#define CONFIG_EFUSE_USING_V151 1
#define CONFIG_EFUSE_SWITCH_EN 1
#define CONFIG_EFUSE_REGION_NUM 1
#define CONFIG_DRIVER_SUPPORT_FLASH 1
#define CONFIG_SPI_WAIT_FIFO_LONG_TIMEOUT 0xFFFFFFFF
#define CONFIG_SPI_TRAN_MAX_TIMEOUT 0xFFFFFFFF
#define CONFIG_SPI_WAIT_READ_TIMEOUT 0xFFFFFFFF
#define CONFIG_FLASH_POWER_ON_TIMEOUT 0xFF
#define CONFIG_SPI_RX_FIFO_THRESHOLD 0x8
#define CONFIG_SPI_TX_FIFO_THRESHOLD 0x8
#define CONFIG_FLASH_SUPPORT_SPI_SINGLE_LINE_MODE 1
#define CONFIG_DRIVER_SUPPORT_GPIO 1
#define CONFIG_GPIO_SUPPORT_LPM 1
#define CONFIG_GPIO_USING_V150 1
#define CONFIG_GPIO_BANK_NUM 1
#define CONFIG_GPIO0_WIDTH 32
#define CONFIG_DRIVER_SUPPORT_I2C 1
#define CONFIG_I2C_SUPPORT_MASTER 1
#define CONFIG_I2C_SUPPORT_SLAVE 1
#define CONFIG_I2C_WAIT_CONDITION_TIMEOUT 0x3E8
#define CONFIG_I2C_SUPPORT_LPC 1
#define CONFIG_I2C_SUPPORT_CONCURRENCY 1
#define CONFIG_I2C_USING_V151 1
#define CONFIG_I2C_ADDR_VALID_CHECK 1
#define CONFIG_DRIVER_SUPPORT_I2S 1
#define CONFIG_I2S_BUS_MAX_NUM 1
#define CONFIG_I2S_SUPPORT_LOOPBACK 1
#define CONFIG_I2S_SCLK_PIN 13
#define CONFIG_I2S_WS_PIN 14
#define CONFIG_I2S_DO_PIN 15
#define CONFIG_I2S_DI_PIN 16
#define CONFIG_I2S_SCLK_PIN_MODE 35
#define CONFIG_I2S_WS_PIN_MODE 36
#define CONFIG_I2S_DO_PIN_MODE 37
#define CONFIG_I2S_DI_PIN_MODE 38
#define CONFIG_SIO_USING_V151 1
#define CONFIG_DRIVER_SUPPORT_KEYSCAN 1
#define CONFIG_KEYSCAN_REPORT_MAX_NUMS 6
#define CONFIG_KEYSCAN_SUPPORT_LPM 1
#define CONFIG_KEYSCAN_SUPPORT_SLEEP 1
#define CONFIG_KEYSCAN_IDLE_WAIT_US 60000000
#define CONFIG_KEYSCAN_USE_FULL_KEYS_TYPE 1
#define CONFIG_KEYSCAN_ENABLE_COL 8
#define CONFIG_KEYSCAN_ENABLE_ROW 16
#define CONFIG_DRIVER_SUPPORT_PDM 1
#define CONFIG_PDM_USING_V150 1
#define CONFIG_MIC_CH_NUM 2
#define CONFIG_PDM_AFIFO_AEMPTY_TH 3
#define CONFIG_PDM_AFIFO_AFULL_TH 16
#define CONFIG_PDM_ADC_DC_OFFSET 0
#define CONFIG_PDM_CIC_GAIN 0x14
#define CONFIG_PDM_LP_CIC_GAIN 0x0
#define CONFIG_DRIVER_SUPPORT_PINCTRL 1
#define CONFIG_PINCTRL_SUPPORT_LPM 1
#define CONFIG_PINCTRL_USING_BS2X 1
#define CONFIG_PINCTRL_SUPPORT_IE 1
#define CONFIG_DRIVER_SUPPORT_PM 1
#define CONFIG_PM_SUPPORT_CLOCK_CRG_API 1
#define CONFIG_DRIVER_SUPPORT_PMP 1
#define CONFIG_PMP_USING_RISCV_31 1
#define CONFIG_DRIVER_SUPPORT_PWM 1
#define CONFIG_PWM_USING_V151 1
#define CONFIG_PWM_GROUP_NUM 6
#define CONFIG_PWM_CHANNEL_NUM 12
#define CONFIG_PWM_PRELOAD 1
#define CONFIG_DRIVER_SUPPORT_RTC 1
#define CONFIG_RTC_MAX_RTCS_NUM 16
#define CONFIG_RTC_CLOCK_VALUE 32768
#define CONFIG_RTC_USING_V150 1
#define CONFIG_RTC_MAX_NUM 4
#define CONFIG_RTC_0_WIDTH_64 1
#define CONFIG_RTC_1_WIDTH_64 1
#define CONFIG_RTC_2_WIDTH_64 1
#define CONFIG_RTC_3_WIDTH_64 1
#define CONFIG_RTC_STOP_DELAY_SUPPORT 1
#define CONFIG_RTC_STOP_DELAY_USING_SYSTICK 1
#define CONFIG_RTC_START_DELAY_SUPPORT 1
#define CONFIG_RTC_START_DELAY_USING_SYSTICK 1
#define CONFIG_DRIVER_SUPPORT_SECURITY_UNIFIED 1
#define CONFIG_DRIVER_SUPPORT_SFC 1
#define CONFIG_SFC_SUPPORT_LPM 1
#define CONFIG_SFC_SUPPORT_WRITE_PROTECT 1
#define CONFIG_SFC_USE_CUSTOMIZED_DEVICE_INFO 1
#define CONFIG_DRIVER_SUPPORT_SPI 1
#define CONFIG_SPI_SUPPORT_MASTER 1
#define CONFIG_SPI_SUPPORT_SLAVE 1
#define CONFIG_SPI_MAX_TIMEOUT 0xFFFFFFFF
#define CONFIG_SPI_TXFTLR 0x16
#define CONFIG_SPI_RXFTLR 0x16
#define CONFIG_SPI_SUPPORT_LPC 1
#define CONFIG_SPI_SUPPORT_SINGLE_SPI 1
#define CONFIG_SPI_NOT_SUPPORT_TEXAS_FORMAT 1
#define CONFIG_SPI_USING_V151 1
#define CONFIG_DRIVER_SUPPORT_SYSTICK 1
#define CONFIG_SYSTICK_SUPPORT_LPM 1
#define CONFIG_DRIVER_SUPPORT_TCXO 1
#define CONFIG_TCXO_SUPPORT_LPM 1
#define CONFIG_DRIVER_SUPPORT_UART 1
#define CONFIG_UART_BAUD_RATE_DIV_8 1
#define CONFIG_UART_SUPPORT_TX 1
#define CONFIG_UART_SUPPORT_TX_INT 1
#define CONFIG_UART_SUPPORT_RX 1
#define CONFIG_UART_SUPPORT_LPM 1
#define CONFIG_UART_FIFO_DEPTH 64
#define CONFIG_UART_SUPPORT_LPC 1
#define CONFIG_UART_DLF_SIZE 4
#define CONFIG_UART_USING_V151 1
#define CONFIG_DRIVER_SUPPORT_USB 1
#define CONFIG_DRIVERS_USB 1
#define CONFIG_DRIVERS_USB_DRIVER 1
#define CONFIG_DRIVERS_USB2_DEVICE_CONTROLLER 1
#define CONFIG_DRIVERS_USB2_OTG_DFIFO_DYNAMIC 1
#define CONFIG_DRIVERS_USB2_OUT_EP_MPS 512
#define CONFIG_DRIVERS_USB2_IN_EP_INDEX1_MPS 512
#define CONFIG_DRIVERS_USB2_IN_EP_INDEX2_MPS 512
#define CONFIG_DRIVERS_USB2_IN_EP_INDEX3_MPS 128
#define CONFIG_DRIVERS_USB_DEVICE_SLAVE_CONFIG 1
#define CONFIG_USB_OUT_EP_NUM 3
#define CONFIG_USB_IN_EP_NUM 3
#define CONFIG_USB_DMA_OFFSET 0x0
#define CONFIG_DRIVERS_USB_GADGET 1
#define CONFIG_DRIVERS_USB_UAC_GADGET 1
#define CONFIG_DRIVERS_USB_UAC_GADGET_VER_1_0 1
#define CONFIG_DRIVERS_USB_UAC_GADGET_VER_1_0_SPEAKER 1
#define CONFIG_DRIVERS_USB_HID_GADGET 1
#define CONFIG_DRIVERS_USB_HID_FUNC_INTERFACE 1
#define CONFIG_DRIVERS_USB_HID_REPORT_MAP_NUM 3
#define CONFIG_DRIVERS_USB_HID_POLLING_REPORTS 1
#define CONFIG_DRIVERS_USB_HID_INPUT_REPORT_LEN 64
#define CONFIG_DRIVERS_USB_HID_OUTPUT_REPORT 1
#define CONFIG_DRIVERS_USB_COMPOSITE_GADGET 1
#define CONFIG_BASE_CORE_TICK_PER_SECOND 1000
#define CONFIG_DRIVER_SUPPORT_WDT 1
#define CONFIG_WATCHDOG_SUPPORT_ULP_WDT 1
#define CONFIG_WATCHDOG_SUPPORT_LPM 1
#define CONFIG_WATCHDOG_USING_V151 1
#define CONFIG_WATCHDOG_USING_V151_RST_PL 7
#define CONFIG_DRIVER_SUPPORT_LITEOS 1
#define CONFIG_DRIVER_SUPPORT_LITEOS_208_6_0_B017 1
#define CONFIG_MIDDLEWARE_CHIP_WS53 1
#define CONFIG_MIDDLEWARE_SUPPORT_PM 1
#define CONFIG_PM_POWER_GATING_ENABLE 1
#define CONFIG_PM_LIGHT_SLEEP_THRESHOLD_MS 5
#define CONFIG_PM_DEEP_SLEEP_THRESHOLD_MS 10
#define CONFIG_PM_DEBUG 1
#define CONFIG_PM_FSM_TRACE_NUM 32
#define CONFIG_PM_ENABLE_WAKEUP_INTERRUPT 1
#define CONFIG_PM_SYS_SUPPORT_MSGQUEUE 1
#define CONFIG_MIDDLEWARE_SUPPORT_DFX 1
#define CONFIG_MIDDLEWARE_SUPPORT_AT 1
#define CONFIG_MIDDLEWARE_SUPPORT_CODEC 1
#define CONFIG_CODEC_ENABLE_SBC 1
#define CONFIG_SUPPORT_SLE_BLE_CENTRAL_DEFAULT 1
#define CONFIG_SLE_BLE_RELEASE_SUPPORT 1
#define CONFIG_AT_BLE 1
#define CONFIG_AT_GLE 1
#define CONFIG_FEATURE_GLE_LOW_LATENCY 1
#define CONFIG_TEST_SUPPORT_TESTSUITE 1
#define CONFIG_TEST_SUITE_FUNCTIONS_MAX_FUNCS 300
#define CONFIG_TEST_CONSOLE_HISTORY_LEN 2
#define CONFIG_TEST_SUITE_TASK_STACK_SIZE 0x800
