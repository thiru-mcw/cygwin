#ifndef CPU_RELAX_H
#define CPU_RELAX_H

#if defined(__x86_64__) || defined(__i386__)  // Check for x86 architectures
   #define CPU_RELAX() __asm__ volatile ("pause" :::)
#elif defined(__aarch64__) || defined(__arm__)  // Check for ARM architectures
   #define CPU_RELAX() __asm__ volatile ("yield" :::)
#else
   #define CPU_RELAX()  // Fallback
#endif

#endif
