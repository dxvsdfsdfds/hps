#ifndef __UTIL_H__
#define __UTIL_H__
#include <sys/types.h>
#include <stdint.h>
#include <sys/syscall.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
namespace sylar{
	pid_t GetThreadId();
	uint32_t GetFiberId();
}



#endif
