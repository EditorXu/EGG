//--------------------------------------------------------------------------------
// Auto-generated by LiteX (4368d5a9e) on 2024-11-11 20:25:39
//--------------------------------------------------------------------------------
#ifndef __GENERATED_SOC_H
#define __GENERATED_SOC_H
#define CONFIG_PLATFORM_NAME "sipeed_tang_mega_138k_pro"
#define CONFIG_CLOCK_FREQUENCY 50000000
#define CONFIG_CPU_HAS_INTERRUPT
#define CONFIG_CPU_RESET_ADDR 0
#define CONFIG_CPU_HAS_DCACHE
#define CONFIG_CPU_HAS_ICACHE
#define CONFIG_CPU_TYPE_VEXRISCV
#define CONFIG_CPU_VARIANT_FULL
#define CONFIG_CPU_FAMILY "riscv"
#define CONFIG_CPU_NAME "vexriscv"
#define CONFIG_CPU_HUMAN_NAME "VexRiscv_Full"
#define CONFIG_CPU_NOP "nop"
#define CONFIG_IDENTIFIER "LiteX SoC on Tang Mega 138K Pro 2024-11-11 20:25:38"
#define CONFIG_CPU_CLK_FREQ 50000000
#define CONFIG_L2_SIZE 8192
#define VIDEO_FRAMEBUFFER_BASE 1086324736
#define VIDEO_FRAMEBUFFER_HRES 800
#define VIDEO_FRAMEBUFFER_VRES 480
#define VIDEO_FRAMEBUFFER_DEPTH 32
#define CONFIG_CSR_DATA_WIDTH 32
#define CONFIG_CSR_ALIGNMENT 32
#define CONFIG_BUS_STANDARD "axi"
#define CONFIG_BUS_DATA_WIDTH 32
#define CONFIG_BUS_ADDRESS_WIDTH 32
#define CONFIG_BUS_BURSTING 0
#define CONFIG_CPU_INTERRUPTS 3
#define TIMER0_INTERRUPT 1
#define UART_INTERRUPT 0
#define WATCHDOG0_INTERRUPT 2

#ifndef __ASSEMBLER__
static inline const char * config_platform_name_read(void) {
	return "sipeed_tang_mega_138k_pro";
}
static inline int config_clock_frequency_read(void) {
	return 50000000;
}
static inline int config_cpu_reset_addr_read(void) {
	return 0;
}
static inline const char * config_cpu_family_read(void) {
	return "riscv";
}
static inline const char * config_cpu_name_read(void) {
	return "vexriscv";
}
static inline const char * config_cpu_human_name_read(void) {
	return "VexRiscv_Full";
}
static inline const char * config_cpu_nop_read(void) {
	return "nop";
}
static inline const char * config_identifier_read(void) {
	return "LiteX SoC on Tang Mega 138K Pro 2024-11-11 20:25:38";
}
static inline int config_cpu_clk_freq_read(void) {
	return 50000000;
}
static inline int config_l2_size_read(void) {
	return 8192;
}
static inline int video_framebuffer_base_read(void) {
	return 1086324736;
}
static inline int video_framebuffer_hres_read(void) {
	return 800;
}
static inline int video_framebuffer_vres_read(void) {
	return 480;
}
static inline int video_framebuffer_depth_read(void) {
	return 32;
}
static inline int config_csr_data_width_read(void) {
	return 32;
}
static inline int config_csr_alignment_read(void) {
	return 32;
}
static inline const char * config_bus_standard_read(void) {
	return "axi";
}
static inline int config_bus_data_width_read(void) {
	return 32;
}
static inline int config_bus_address_width_read(void) {
	return 32;
}
static inline int config_bus_bursting_read(void) {
	return 0;
}
static inline int config_cpu_interrupts_read(void) {
	return 3;
}
static inline int timer0_interrupt_read(void) {
	return 1;
}
static inline int uart_interrupt_read(void) {
	return 0;
}
static inline int watchdog0_interrupt_read(void) {
	return 2;
}
#endif // !__ASSEMBLER__

#endif