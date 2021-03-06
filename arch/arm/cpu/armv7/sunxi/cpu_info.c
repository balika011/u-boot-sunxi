/*
 * (C) Copyright 2007-2011
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * Tom Cubie <tangliang@allwinnertech.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <asm/io.h>
#include <asm/arch/cpu.h>

#ifdef CONFIG_DISPLAY_CPUINFO
int print_cpuinfo(void)
{
#ifdef CONFIG_SUN4I
	puts("CPU:   Allwinner A10 (SUN4I)\n");
#elif defined CONFIG_SUN5I
	/* TODO: Distinguish A13/A10s */
	puts("CPU:   Allwinner A13/A10s (SUN5I)\n");
#elif defined CONFIG_SUN6I
	puts("CPU:   Allwinner A31 (SUN6I)\n");
#elif defined CONFIG_SUN7I
	puts("CPU:   Allwinner A20 (SUN7I)\n");
#elif defined CONFIG_SUN8I
	puts("CPU:   Allwinner A23 (SUN8I)\n");
#else
#warning Please update cpu_info.c with correct CPU information
	puts("CPU:   SUNXI Family\n");
#endif
	return 0;
}
#endif
