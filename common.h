/*************************************************************************
	> File Name: common.h
	> Author: 
	> Mail: 
	> Created Time: 2018年07月07日 星期六 11时42分35秒
 ************************************************************************/

#ifndef _COMMON_H
#define _COMMON_H
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <assert.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/epoll.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>


int setnonblocking( int fd );

void addsig( int sig, void(*handler)(int), bool restart = true );

#endif
