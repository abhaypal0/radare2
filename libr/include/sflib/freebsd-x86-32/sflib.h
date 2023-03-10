/*
 * sflib.h --- SFLib syscall library for FreeBSD/i386
 * see http://www.secdev.org/projects/shellforge.html for more informations
 *
 * Copyright (C) 2004  Philippe Biondi <phil@secdev.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 */


/*
 * Automatically generated by gensflib.py
 * Wed Mar 31 17:50:12 2021
 */

#ifndef SFLIB_H
#define SFLIB_H


#include "sfsysnr.h"
#include "sfsyscall.h"
#include "../common/sftypes.h"

// syscall
static inline _sfsyscall1(int, exit, int, status)
static inline _sfsyscall0( pid_t, fork )
static inline _sfsyscall3( ssize_t, read, int, fd, void *, buf, size_t, count )
static inline _sfsyscall3( ssize_t, write, int, fd, const void *, buf, size_t, count )
static inline _sfsyscall3( int, open, const char *, pathname, int, flags, mode_t, mode )
static inline _sfsyscall1( int, close, int, fd )
static inline _sfsyscall4(pid_t, wait4, pid_t, pid, int *, status, int, options, struct rusage *, rusage)
static inline _sfsyscall2( int, link, const char *, oldpath, const char *, newpath )
static inline _sfsyscall1( int, unlink, const char *, pathname )
static inline _sfsyscall1( int, chdir, const char *, path )
// fchdir
static inline _sfsyscall3( int, mknod, const char *, pathname, mode_t, mode, dev_t, dev )
static inline _sfsyscall2( int, chmod, const char *, path, mode_t, mode )
static inline _sfsyscall3( int, chown, const char *, path, uid_t, owner, gid_t, group )
// break
// getfsstat
static inline _sfsyscall0( pid_t, getpid )
// mount
// unmount
// setuid
static inline _sfsyscall0( uid_t, getuid )
static inline _sfsyscall0( uid_t, geteuid )
static inline _sfsyscall4(long, ptrace, int, request, pid_t, pid, void *,addr, void *,data)
// recvmsg
// sendmsg
static inline _sfsyscall6(ssize_t, recvfrom, int, s, void * , buf, size_t, len, int, flags, struct sockaddr * , from, socklen_t *, fromlen)
static inline _sfsyscall3(int, accept, int,s, struct sockaddr *,addr, socklen_t,addrlen);
// getpeername
// getsockname
static inline _sfsyscall2( int, access, const char *, pathname, int, mode )
// chflags
// fchflags
static inline _sfsyscall0( int, sync )
static inline _sfsyscall2( int, kill, pid_t, pid, int, sig )
static inline _sfsyscall0( pid_t, getppid )
static inline _sfsyscall1( int, dup, int, oldfd )
static inline _sfsyscall1( int, pipe, unsigned long *, filedes)
static inline _sfsyscall0( gid_t, getegid )
// profil
// ktrace
static inline _sfsyscall0( gid_t, getgid )
// getlogin
// setlogin
static inline _sfsyscall1( int, acct, const char *, filename )
// sigaltstack
static inline _sfsyscall4(int, ioctl, int,d, int,request, char *,argp, int,len)
// reboot
// revoke
static inline _sfsyscall2( int, symlink, const char *, oldpath, const char *, newpath )
static inline _sfsyscall3( int, readlink, const char *, path, char *, buf, size_t, bufsiz )
static inline _sfsyscall3(int, execve, char *, s, char **, argv, char **,envp)
static inline _sfsyscall1( mode_t, umask, mode_t, mask )
static inline _sfsyscall1( int, chroot, const char *, path )
static inline _sfsyscall3( int, msync, const void *, start, size_t, length, int, flags )
static inline _sfsyscall0( pid_t, vfork )
// sbrk
// sstk
// vadvise
static inline _sfsyscall2( int, munmap, void *, start, size_t, length )
static inline _sfsyscall3( int, mprotect, const void *, addr, size_t, len, int, prot )
// madvise
// mincore
// getgroups
static inline _sfsyscall2( int, setgroups, size_t, size, const gid_t *, list )
static inline _sfsyscall0( pid_t, getpgrp )
static inline _sfsyscall2( int, setpgid, pid_t, pid, pid_t, pgid )
// setitimer
static inline _sfsyscall2( int, swapon, const char *, path, int, swapflags )
// getitimer
// getdtablesize
static inline _sfsyscall2( int, dup2, int, oldfd, int, newfd )
static inline _sfsyscall3( int, fcntl, int, fd, int, cmd, long, arg )
static inline _sfsyscall5( int, select, int,  n, fd_set *, readfds, fd_set *, writefds, fd_set *, exceptfds, struct timeval *, timeout)
static inline _sfsyscall1( int, fsync, int, fd )
static inline _sfsyscall3( int, setpriority, int, which, int, who, int, prio )
static inline _sfsyscall3(int, socket, int,domain, int,type, int,protocol)
static inline _sfsyscall3(int,connect, int,sockfd, const struct sockaddr *,serv_addr, socklen_t,addrlen)
static inline _sfsyscall2( int, getpriority, int, which, int, who )
static inline _sfsyscall3(int, bind, int,sockfd, struct sockaddr *,my_addr, socklen_t,addrlen)
static inline _sfsyscall5(int, setsockopt, int, s, int, level, int, optname, void *, optval, socklen_t, optlen)
static inline _sfsyscall2(int,listen,int,s, int,backlog)
static inline _sfsyscall2( int, gettimeofday, struct timeval *, tv, struct timezone *, tz )
// getrusage
// getsockopt
static inline _sfsyscall3( int, readv, int, fd, const struct iovec *, vector, int, count )
static inline _sfsyscall3( int, writev, int, fd, const struct iovec *, vector, int, count )
// settimeofday
static inline _sfsyscall3( int, fchown, int, fd, uid_t, owner, gid_t, group )
static inline _sfsyscall2( int, fchmod, int, fildes, mode_t, mode )
static inline _sfsyscall2( int, setreuid, uid_t, ruid, uid_t, euid )
static inline _sfsyscall2( int, setregid, gid_t, rgid, gid_t, egid )
static inline _sfsyscall2( int, rename, const char *, oldpath, const char *, newpath )
// flock
// mkfifo
static inline _sfsyscall6(ssize_t, sendto, int, s, const void *, msg, size_t, len, int, flags, const struct sockaddr *, to, socklen_t, tolen)
// shutdown
// socketpair
static inline _sfsyscall2( int, mkdir, const char *, pathname, mode_t, mode )
static inline _sfsyscall1( int, rmdir, const char *, pathname )
// utimes
// adjtime
static inline _sfsyscall0( pid_t, setsid )
// quotactl
// nfssvc
static inline _sfsyscall2( int, statfs, const char *, path, struct statfs *, buf )
static inline _sfsyscall2( int, fstatfs, int, fd, struct statfs *, buf )
// getfh
// getdomainname
static inline _sfsyscall2( int, setdomainname, const char *, name, size_t, len )
static inline _sfsyscall1( int, uname, struct utsname *, buf )
// sysarch
// rtprio
// semsys
// msgsys
// shmsys
static inline _sfsyscall4( ssize_t, pread, int, fd, void *, buf, size_t, count, off_t, offset )
// pwrite
// ntp_adjtime
// setgid
// setegid
// seteuid
static inline _sfsyscall2( int, stat, const char *, file_name, struct stat *, buf )
static inline _sfsyscall2( int, fstat, int, filedes, struct stat *, buf )
static inline _sfsyscall2( int, lstat, const char *, file_name, struct stat *, buf )
// pathconf
// fpathconf
// getrlimit
// setrlimit
static inline _sfsyscall4( int,getdirentries, int,fd, void *,buf, int,nbytes, long *,basep)
static inline _sfsyscall6(void *,mmap, void *,start, size_t,length, int,prot , int,flags, int,fd, off_t,offset)
static inline _sfsyscall3( off_t, lseek, int, fildes, off_t, offset, int, whence )
static inline _sfsyscall2( int, truncate, const char *, path, off_t, length )
static inline _sfsyscall2( int, ftruncate, int, fd, off_t, length )
static inline _sfsyscall2( int, mlock, const void *, addr, size_t, len )
static inline _sfsyscall2( int, munlock, const void *, addr, size_t, len )
// undelete
// futimes
static inline _sfsyscall1( pid_t, getpgid, pid_t, pid )
static inline _sfsyscall3( int, poll, struct pollfd *, ufds, unsigned int, nfds, int, timeout )
static inline _sfsyscall3(int, semget, long, key, int, nsems, int, semflg)
static inline _sfsyscall3(int, semop, int, semid, struct sembuf *, sops, unsigned, nsops)
// msgctl
// msgget
// msgsnd
// msgrcv
static inline _sfsyscall3(void *, shmat, int, shmid, const void *, shmaddr, int, shmflg )
// shmctl
// shmdt
static inline _sfsyscall3(int, shmget, long, key, int, size, int, flags )
// clock_gettime
// clock_settime
// clock_getres
static inline _sfsyscall2( int, nanosleep, const struct timespec *, req, struct timespec *, rem )
// minherit
// rfork
// openbsd_poll
// issetugid
static inline _sfsyscall3( int, lchown, const char *, path, uid_t, owner, gid_t, group )
static inline _sfsyscall3( int, getdents, unsigned int, fd, struct dirent *, dirp, unsigned int, count )
// lchmod
// netbsd_lchown
// lutimes
// netbsd_msync
// nstat
// nfstat
// nlstat
// fhstatfs
// fhopen
// fhstat
// modnext
// modstat
// modfnext
// modfind
// kldload
// kldunload
// kldfind
// kldnext
// kldstat
// kldfirstmod
static inline _sfsyscall1( pid_t, getsid, pid_t, pid )
static inline _sfsyscall3( int, setresuid, uid_t, ruid, uid_t, euid, uid_t, suid )
// setresgid
// aio_return
// aio_suspend
// aio_cancel
// aio_error
// aio_read
// aio_write
// lio_listio
// yield
static inline _sfsyscall1( int, mlockall, int, flags )
static inline _sfsyscall0( int, munlockall )
static inline _sfsyscall2( int, sched_setparam, pid_t, pid, const struct sched_param *, p )
static inline _sfsyscall2( int, sched_getparam, pid_t, pid, struct sched_param *, p )
// sched_setscheduler
static inline _sfsyscall1( int, sched_getscheduler, pid_t, pid )
static inline _sfsyscall0( int, sched_yield )
static inline _sfsyscall1( int, sched_get_priority_max, int, policy )
static inline _sfsyscall1( int, sched_get_priority_min, int, policy )
static inline _sfsyscall2( int, sched_rr_get_interval, pid_t, pid, struct timespec *, tp )
// utrace
// kldsym
// jail
// sigprocmask
static inline _sfsyscall1( int, sigsuspend, const sigset_t *, mask )
static inline _sfsyscall1( int, sigpending, sigset_t *, set )
// sigtimedwait
// sigwaitinfo
// extattrctl
// extattr_set_file
// extattr_get_file
// extattr_delete_file
// aio_waitcomplete
static inline _sfsyscall3( int, getresuid, uid_t *, ruid, uid_t *, euid, uid_t *, suid )
// getresgid
// kqueue
// kevent
// extattr_set_fd
// extattr_get_fd
// extattr_delete_fd
// nfsclnt
// eaccess
// nmount
// kse_exit
// kse_wakeup
// kse_create
// kse_thr_interrupt
// kse_release
// kenv
// lchflags
// uuidgen
// sendfile
// mac_syscall
// ksem_close
// ksem_post
// ksem_wait
// ksem_trywait
// ksem_init
// ksem_open
// ksem_unlink
// ksem_getvalue
// ksem_destroy
// extattr_set_link
// extattr_get_link
// extattr_delete_link
// sigaction
static inline _sfsyscall1( int, sigreturn, unsigned long, __unused )
// getcontext
// setcontext
// swapcontext
static inline _sfsyscall1( int, swapoff, const char *, path )
// sigwait
// thr_create
// thr_exit
// thr_self
// thr_kill
// jail_attach

#endif /* SFLIB_H */
