/* libexplain/config.h.  Generated from config.h.in by configure.  */
/* libexplain/config.h.in.  Generated from etc/configure.ac by autoheader.  */

/*
 * libexplain - Explain errno values returned by libc functions
 * Copyright (C) 2008-2014 Peter Miller
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBEXPLAIN_CONFIG_H
#define LIBEXPLAIN_CONFIG_H


/* Define this symbol if your system has <sys/types.h> and <linux/types.h> AND
   they can both be included in the same compilation unit in that order. */
#define CAN_INLUDE_BOTH_sys_types_h_AND_linux_types_h 1

/* Define this symbol to the value of pathconf("/", _PC_NAME_MAX) if your
   system does not have a native NAME_MAX symbol defined in the <limits.h> or
   <sys/param.h> system include files. */
#define CONF_NAME_MAX 255

/* Set this to be the absolute path of a Bourne shell which understands
   functions. */
#define CONF_SHELL "/bin/sh"

/* Define this symbol to be the number of arguments required by the getmntent
   function. */
#define GETMNTENT_NARGS 1

/* Define this symbol to be the number of arguments required by the getpgrp
   function. */
#define GETPGRP_NARGS 0

/* Define to 1 if you have the `accept4' function. */
#define HAVE_ACCEPT4 1

/* Define to 1 if you have the `acl_entries' function. */
#define HAVE_ACL_ENTRIES 1

/* Define to 1 if you have the `acl_from_text' function. */
#define HAVE_ACL_FROM_TEXT 1

/* Define to 1 if you have the `acl_get_fd' function. */
#define HAVE_ACL_GET_FD 1

/* Define to 1 if you have the `acl_get_file' function. */
#define HAVE_ACL_GET_FILE 1

/* Define to 1 if you have the <acl/libacl.h> header file. */
#define HAVE_ACL_LIBACL_H 1

/* Define to 1 if you have the `acl_set_fd' function. */
#define HAVE_ACL_SET_FD 1

/* Define to 1 if you have the `acl_set_file' function. */
#define HAVE_ACL_SET_FILE 1

/* Define to 1 if you have the `acl_to_any_text' function. */
#define HAVE_ACL_TO_ANY_TEXT 1

/* Define to 1 if you have the `acl_to_text' function. */
#define HAVE_ACL_TO_TEXT 1

/* Define to 1 if you have the `adjtimex' function. */
#define HAVE_ADJTIMEX 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if you have the `atexit' function. */
#define HAVE_ATEXIT 1

/* Define to 1 if you have the <bluetooth/bluetooth.h> header file. */
#define HAVE_BLUETOOTH_BLUETOOTH_H 1

/* Define to 1 if you have the <bluetooth/bnep.h> header file. */
#define HAVE_BLUETOOTH_BNEP_H 1

/* Define to 1 if you have the <bluetooth/cmtp.h> header file. */
/* #undef HAVE_BLUETOOTH_CMTP_H */

/* Define to 1 if you have the <bluetooth/hci.h> header file. */
/* #undef HAVE_BLUETOOTH_HCI_H */

/* Define to 1 if you have the <bluetooth/hidp.h> header file. */
/* #undef HAVE_BLUETOOTH_HIDP_H */

/* Define to 1 if you have the <bluetooth/rfcomm.h> header file. */
/* #undef HAVE_BLUETOOTH_RFCOMM_H */

/* Define to 1 if you have the `capget' function. */
#define HAVE_CAPGET 1

/* Define to 1 if you have the `cap_get_proc' function. */
#define HAVE_CAP_GET_PROC 1

/* Define to 1 if you have the `cfmakeraw' function. */
#define HAVE_CFMAKERAW 1

/* Define to 1 if you have the `chmod' function. */
#define HAVE_CHMOD 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the declaration of `strsignal', and to 0 if you
   don't. */
#define HAVE_DECL_STRSIGNAL 1

/* Define to 1 if you have the declaration of `strverscmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRVERSCMP 1

/* Define to 1 if you have the declaration of `ustat', and to 0 if you don't.
   */
#define HAVE_DECL_USTAT 0

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function. */
#define HAVE_DIRFD 1

/* Define to 1 if you have the `dladdr' function. */
#define HAVE_DLADDR 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `dlsym' function. */
#define HAVE_DLSYM 1

/* Define to 1 if you have the `endgrent' function. */
#define HAVE_ENDGRENT 1

/* Define to 1 if you have the `endmntent' function. */
#define HAVE_ENDMNTENT 1

/* Define to 1 if you have the `eventfd' function. */
#define HAVE_EVENTFD 1

/* Define to 1 if you have the `fchmod' function. */
#define HAVE_FCHMOD 1

/* Define to 1 if you have the `fchmodat' function. */
#define HAVE_FCHMODAT 1

/* Define to 1 if you have the `fchown' function. */
#define HAVE_FCHOWN 1

/* Define to 1 if you have the `fchownat' function. */
#define HAVE_FCHOWNAT 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `fdopendir' function. */
#define HAVE_FDOPENDIR 1

/* Define to 1 if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* Define to 1 if you have the `flock' function. */
#define HAVE_FLOCK 1

/* Define to 1 if you have the `fseeko' function. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `fstatat' function. */
#define HAVE_FSTATAT 1

/* Define to 1 if you have the `fstatfs' function. */
#define HAVE_FSTATFS 1

/* Define to 1 if you have the `ftello' function. */
#define HAVE_FTELLO 1

/* Define to 1 if you have the `ftime' function. */
#define HAVE_FTIME 1

/* Define to 1 if you have the <ftw.h> header file. */
#define HAVE_FTW_H 1

/* Define to 1 if you have the `futimens' function. */
#define HAVE_FUTIMENS 1

/* Define to 1 if you have the `futimes' function. */
#define HAVE_FUTIMES 1

/* Define to 1 if you have the `futimesat' function. */
#define HAVE_FUTIMESAT 1

/* Define to 1 if you have the `getdomainname' function. */
#define HAVE_GETDOMAINNAME 1

/* Define to 1 if you have the `getgrent' function. */
#define HAVE_GETGRENT 1

/* Define to 1 if you have the `getgrouplist' function. */
#define HAVE_GETGROUPLIST 1

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define to 1 if you have the `gethostid' function. */
#define HAVE_GETHOSTID 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the `getmntent' function. */
#define HAVE_GETMNTENT 1

/* Define to 1 if you have the `getmntinfo' function. */
/* #undef HAVE_GETMNTINFO */

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getpriority' function. */
#define HAVE_GETPRIORITY 1

/* Define to 1 if you have the `getregid' function. */
/* #undef HAVE_GETREGID */

/* Define to 1 if you have the `getresgid' function. */
#define HAVE_GETRESGID 1

/* Define to 1 if you have the `getresuid' function. */
#define HAVE_GETRESUID 1

/* Define to 1 if you have the `getreuid' function. */
/* #undef HAVE_GETREUID */

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `gettext' function. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `hasmntopt' function. */
#define HAVE_HASMNTOPT 1

/* Define to 1 if you have the `iconv_close' function. */
#define HAVE_ICONV_CLOSE 1

/* Define to 1 if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

/* Define to 1 if you have the `iconv_open' function. */
#define HAVE_ICONV_OPEN 1

/* Define this symbol if your C compiler has the inline keyword */
#define HAVE_INLINE 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `lchmod' function. */
/* #undef HAVE_LCHMOD */

/* Define to 1 if you have the `lchown' function. */
#define HAVE_LCHOWN 1

/* Define to 1 if you have the `lchownat' function. */
/* #undef HAVE_LCHOWNAT */

/* Define to 1 if you have the `gettext' library (-lgettext). */
/* #undef HAVE_LIBGETTEXT */

/* Define to 1 if you have the `iconv' library (-liconv). */
/* #undef HAVE_LIBICONV */

/* Define to 1 if you have the `intl' library (-lintl). */
/* #undef HAVE_LIBINTL */

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the <libio.h> header file. */
/* #undef HAVE_LIBIO_H */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the <libv4l1-videodev.h> header file. */
#define HAVE_LIBV4L1_VIDEODEV_H 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the `linkat' function. */
#define HAVE_LINKAT 1

/* Define to 1 if you have the <linux/apm_bios.h> header file. */
#define HAVE_LINUX_APM_BIOS_H 1

/* Define to 1 if you have the <linux/arcfb.h> header file. */
#define HAVE_LINUX_ARCFB_H 1

/* Define to 1 if you have the <linux/atalk.h> header file. */
#define HAVE_LINUX_ATALK_H 1

/* Define to 1 if you have the <linux/ata.h> header file. */
/* #undef HAVE_LINUX_ATA_H */

/* Define to 1 if you have the <linux/atmarp.h> header file. */
#define HAVE_LINUX_ATMARP_H 1

/* Define to 1 if you have the <linux/atmbr2684.h> header file. */
#define HAVE_LINUX_ATMBR2684_H 1

/* Define to 1 if you have the <linux/atmclip.h> header file. */
#define HAVE_LINUX_ATMCLIP_H 1

/* Define to 1 if you have the <linux/atmdev.h> header file. */
#define HAVE_LINUX_ATMDEV_H 1

/* Define to 1 if you have the <linux/atmlec.h> header file. */
#define HAVE_LINUX_ATMLEC_H 1

/* Define to 1 if you have the <linux/atmmpc.h> header file. */
#define HAVE_LINUX_ATMMPC_H 1

/* Define to 1 if you have the <linux/atmsvc.h> header file. */
#define HAVE_LINUX_ATMSVC_H 1

/* Define to 1 if you have the <linux/atm_eni.h> header file. */
#define HAVE_LINUX_ATM_ENI_H 1

/* Define to 1 if you have the <linux/atm.h> header file. */
#define HAVE_LINUX_ATM_H 1

/* Define to 1 if you have the <linux/atm_he.h> header file. */
#define HAVE_LINUX_ATM_HE_H 1

/* Define to 1 if you have the <linux/atm_idt77105.h> header file. */
#define HAVE_LINUX_ATM_IDT77105_H 1

/* Define to 1 if you have the <linux/atm_nicstar.h> header file. */
#define HAVE_LINUX_ATM_NICSTAR_H 1

/* Define to 1 if you have the <linux/atm_tcp.h> header file. */
#define HAVE_LINUX_ATM_TCP_H 1

/* Define to 1 if you have the <linux/atm_zatm.h> header file. */
#define HAVE_LINUX_ATM_ZATM_H 1

/* Define to 1 if you have the <linux/auto_fs4.h> header file. */
#define HAVE_LINUX_AUTO_FS4_H 1

/* Define to 1 if you have the <linux/auto_fs.h> header file. */
#define HAVE_LINUX_AUTO_FS_H 1

/* Define to 1 if you have the <linux/blkpg.h> header file. */
#define HAVE_LINUX_BLKPG_H 1

/* Define to 1 if you have the <linux/blktrace_api.h> header file. */
#define HAVE_LINUX_BLKTRACE_API_H 1

/* Define to 1 if you have the <linux/capi.h> header file. */
#define HAVE_LINUX_CAPI_H 1

/* Define to 1 if you have the <linux/cciss_ioctl.h> header file. */
#define HAVE_LINUX_CCISS_IOCTL_H 1

/* Define to 1 if you have the <linux/cdk.h> header file. */
/* #undef HAVE_LINUX_CDK_H */

/* Define to 1 if you have the <linux/cdrom.h> header file. */
#define HAVE_LINUX_CDROM_H 1

/* Define to 1 if you have the <linux/chio.h> header file. */
#define HAVE_LINUX_CHIO_H 1

/* Define to 1 if you have the <linux/cm206.h> header file. */
/* #undef HAVE_LINUX_CM206_H */

/* Define to 1 if you have the <linux/cm4000_cs.h> header file. */
#define HAVE_LINUX_CM4000_CS_H 1

/* Define to 1 if you have the <linux/comstats.h> header file. */
/* #undef HAVE_LINUX_COMSTATS_H */

/* Define to 1 if you have the <linux/cyclades.h> header file. */
#define HAVE_LINUX_CYCLADES_H 1

/* Define to 1 if you have the <linux/dn.h> header file. */
#define HAVE_LINUX_DN_H 1

/* Define to 1 if you have the <linux/dvb/audio.h> header file. */
#define HAVE_LINUX_DVB_AUDIO_H 1

/* Define to 1 if you have the <linux/dvb/ca.h> header file. */
#define HAVE_LINUX_DVB_CA_H 1

/* Define to 1 if you have the <linux/dvb/dmx.h> header file. */
#define HAVE_LINUX_DVB_DMX_H 1

/* Define to 1 if you have the <linux/dvb/frontend.h> header file. */
#define HAVE_LINUX_DVB_FRONTEND_H 1

/* Define to 1 if you have the <linux/dvb/net.h> header file. */
#define HAVE_LINUX_DVB_NET_H 1

/* Define to 1 if you have the <linux/dvb/osd.h> header file. */
#define HAVE_LINUX_DVB_OSD_H 1

/* Define to 1 if you have the <linux/dvb/video.h> header file. */
#define HAVE_LINUX_DVB_VIDEO_H 1

/* Define to 1 if you have the <linux/ethtool.h> header file. */
#define HAVE_LINUX_ETHTOOL_H 1

/* Define to 1 if you have the <linux/ext2_fs.h> header file. */
/* #undef HAVE_LINUX_EXT2_FS_H */

/* Define to 1 if you have the <linux/fb.h> header file. */
#define HAVE_LINUX_FB_H 1

/* Define to 1 if you have the <linux/fcntl.h> header file. */
#define HAVE_LINUX_FCNTL_H 1

/* Define to 1 if you have the <linux/fd.h> header file. */
#define HAVE_LINUX_FD_H 1

/* Define to 1 if you have the <linux/fiemap.h> header file. */
#define HAVE_LINUX_FIEMAP_H 1

/* Define to 1 if you have the <linux/filter.h> header file. */
#define HAVE_LINUX_FILTER_H 1

/* Define to 1 if you have the <linux/firewire-cdev.h> header file. */
#define HAVE_LINUX_FIREWIRE_CDEV_H 1

/* Define to 1 if you have the <linux/fs.h> header file. */
#define HAVE_LINUX_FS_H 1

/* Define to 1 if you have the <linux/hayesesp.h> header file. */
/* #undef HAVE_LINUX_HAYESESP_H */

/* Define to 1 if you have the <linux/hdreg.h> header file. */
#define HAVE_LINUX_HDREG_H 1

/* Define to 1 if you have the <linux/hiddev.h> header file. */
#define HAVE_LINUX_HIDDEV_H 1

/* Define to 1 if you have the <linux/hidraw.h> header file. */
#define HAVE_LINUX_HIDRAW_H 1

/* Define to 1 if you have the <linux/hpet.h> header file. */
#define HAVE_LINUX_HPET_H 1

/* Define to 1 if you have the <linux/i2o-dev.h> header file. */
#define HAVE_LINUX_I2O_DEV_H 1

/* Define to 1 if you have the <linux/if_bonding.h> header file. */
#define HAVE_LINUX_IF_BONDING_H 1

/* Define to 1 if you have the <linux/if_bridge.h> header file. */
#define HAVE_LINUX_IF_BRIDGE_H 1

/* Define to 1 if you have the <linux/if_eql.h> header file. */
#define HAVE_LINUX_IF_EQL_H 1

/* Define to 1 if you have the <linux/if_frad.h> header file. */
#define HAVE_LINUX_IF_FRAD_H 1

/* Define to 1 if you have the <linux/if.h> header file. */
#define HAVE_LINUX_IF_H 1

/* Define to 1 if you have the <linux/if_pppox.h> header file. */
#define HAVE_LINUX_IF_PPPOX_H 1

/* Define to 1 if you have the <linux/if_ppp.h> header file. */
#define HAVE_LINUX_IF_PPP_H 1

/* Define to 1 if you have the <linux/if_tun.h> header file. */
#define HAVE_LINUX_IF_TUN_H 1

/* Define to 1 if you have the <linux/if_vlan.h> header file. */
#define HAVE_LINUX_IF_VLAN_H 1

/* Define to 1 if you have the <linux/input.h> header file. */
#define HAVE_LINUX_INPUT_H 1

/* Define to 1 if you have the <linux/ipmi.h> header file. */
#define HAVE_LINUX_IPMI_H 1

/* Define to 1 if you have the <linux/ipv6.h> header file. */
#define HAVE_LINUX_IPV6_H 1

/* Define to 1 if you have the <linux/irda.h> header file. */
/* #undef HAVE_LINUX_IRDA_H */

/* Define to 1 if you have the <linux/isdn.h> header file. */
/* #undef HAVE_LINUX_ISDN_H */

/* Define to 1 if you have the <linux/isdn_ppp.h> header file. */
/* #undef HAVE_LINUX_ISDN_PPP_H */

/* Define to 1 if you have the <linux/ivtvfb.h> header file. */
#define HAVE_LINUX_IVTVFB_H 1

/* Define to 1 if you have the <linux/joystick.h> header file. */
#define HAVE_LINUX_JOYSTICK_H 1

/* Define to 1 if you have the <linux/kdev_t.h> header file. */
#define HAVE_LINUX_KDEV_T_H 1

/* Define to 1 if you have the <linux/kd.h> header file. */
#define HAVE_LINUX_KD_H 1

/* Define to 1 if you have the <linux/kvm.h> header file. */
#define HAVE_LINUX_KVM_H 1

/* Define to 1 if you have the <linux/lp.h> header file. */
#define HAVE_LINUX_LP_H 1

/* Define to 1 if you have the <linux/major.h> header file. */
#define HAVE_LINUX_MAJOR_H 1

/* Define to 1 if you have the <linux/matroxfb.h> header file. */
#define HAVE_LINUX_MATROXFB_H 1

/* Define to 1 if you have the <linux/mii.h> header file. */
#define HAVE_LINUX_MII_H 1

/* Define to 1 if you have the <linux/mmtimer.h> header file. */
#define HAVE_LINUX_MMTIMER_H 1

/* Define to 1 if you have the <linux/msdos_fs.h> header file. */
#define HAVE_LINUX_MSDOS_FS_H 1

/* Define to 1 if you have the <linux/mtio.h> header file. */
#define HAVE_LINUX_MTIO_H 1

/* Define to 1 if you have the <linux/nbd.h> header file. */
#define HAVE_LINUX_NBD_H 1

/* Define to 1 if you have the <linux/ncp_fs.h> header file. */
/* #undef HAVE_LINUX_NCP_FS_H */

/* Define to 1 if you have the <linux/netlink.h> header file. */
#define HAVE_LINUX_NETLINK_H 1

/* Define to 1 if you have the <linux/net_tstamp.h> header file. */
#define HAVE_LINUX_NET_TSTAMP_H 1

/* Define to 1 if you have the <linux/nvram.h> header file. */
#define HAVE_LINUX_NVRAM_H 1

/* Define to 1 if you have the <linux/phantom.h> header file. */
#define HAVE_LINUX_PHANTOM_H 1

/* Define to 1 if you have the <linux/pmu.h> header file. */
#define HAVE_LINUX_PMU_H 1

/* Define to 1 if you have the <linux/ppdev.h> header file. */
#define HAVE_LINUX_PPDEV_H 1

/* Define to 1 if you have the <linux/ppp-comp.h> header file. */
#define HAVE_LINUX_PPP_COMP_H 1

/* Define to 1 if you have the <linux/ppp_defs.h> header file. */
#define HAVE_LINUX_PPP_DEFS_H 1

/* Define to 1 if you have the <linux/radeonfb.h> header file. */
#define HAVE_LINUX_RADEONFB_H 1

/* Define to 1 if you have the <linux/random.h> header file. */
#define HAVE_LINUX_RANDOM_H 1

/* Define to 1 if you have the <linux/raw.h> header file. */
#define HAVE_LINUX_RAW_H 1

/* Define to 1 if you have the <linux/reiserfs_fs.h> header file. */
#define HAVE_LINUX_REISERFS_FS_H 1

/* Define to 1 if you have the <linux/rtc.h> header file. */
#define HAVE_LINUX_RTC_H 1

/* Define to 1 if you have the <linux/scc.h> header file. */
#define HAVE_LINUX_SCC_H 1

/* Define to 1 if you have the <linux/serial.h> header file. */
#define HAVE_LINUX_SERIAL_H 1

/* Define to 1 if you have the <linux/serio.h> header file. */
#define HAVE_LINUX_SERIO_H 1

/* Define to 1 if you have the <linux/smb_fs.h> header file. */
/* #undef HAVE_LINUX_SMB_FS_H */

/* Define to 1 if you have the <linux/socket.h> header file. */
#define HAVE_LINUX_SOCKET_H 1

/* Define to 1 if you have the <linux/sockios.h> header file. */
#define HAVE_LINUX_SOCKIOS_H 1

/* Define to 1 if you have the <linux/sonet.h> header file. */
#define HAVE_LINUX_SONET_H 1

/* Define to 1 if you have the <linux/sonypi.h> header file. */
#define HAVE_LINUX_SONYPI_H 1

/* Define to 1 if you have the <linux/spi/spidev.h> header file. */
#define HAVE_LINUX_SPI_SPIDEV_H 1

/* Define to 1 if you have the <linux/suspend_ioctls.h> header file. */
#define HAVE_LINUX_SUSPEND_IOCTLS_H 1

/* Define to 1 if you have the <linux/synclink.h> header file. */
#define HAVE_LINUX_SYNCLINK_H 1

/* Define to 1 if you have the <linux/termios.h> header file. */
#define HAVE_LINUX_TERMIOS_H 1

/* Define to 1 if you have the <linux/tiocl.h> header file. */
#define HAVE_LINUX_TIOCL_H 1

/* Define to 1 if you have the <linux/types.h> header file. */
#define HAVE_LINUX_TYPES_H 1

/* Define to 1 if you have the <linux/udf_fs_i.h> header file. */
#define HAVE_LINUX_UDF_FS_I_H 1

/* Define to 1 if you have the <linux/uinput.h> header file. */
#define HAVE_LINUX_UINPUT_H 1

/* Define to 1 if you have the <linux/usbdevice_fs.h> header file. */
#define HAVE_LINUX_USBDEVICE_FS_H 1

/* Define to 1 if you have the <linux/usb/gadgetfs.h> header file. */
#define HAVE_LINUX_USB_GADGETFS_H 1

/* Define to 1 if you have the <linux/usb/g_printer.h> header file. */
#define HAVE_LINUX_USB_G_PRINTER_H 1

/* Define to 1 if you have the <linux/videodev2.h> header file. */
#define HAVE_LINUX_VIDEODEV2_H 1

/* Define to 1 if you have the <linux/videodev.h> header file. */
/* #undef HAVE_LINUX_VIDEODEV_H */

/* Define to 1 if you have the <linux/video_decoder.h> header file. */
/* #undef HAVE_LINUX_VIDEO_DECODER_H */

/* Define to 1 if you have the <linux/video_encoder.h> header file. */
/* #undef HAVE_LINUX_VIDEO_ENCODER_H */

/* Define to 1 if you have the <linux/vt.h> header file. */
#define HAVE_LINUX_VT_H 1

/* Define to 1 if you have the <linux/watchdog.h> header file. */
#define HAVE_LINUX_WATCHDOG_H 1

/* Define to 1 if you have the <linux/x25.h> header file. */
#define HAVE_LINUX_X25_H 1

/* Define this symbol if your system has the locale-gen(8) program. */
#define HAVE_LOCALE_GEN_PROG 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define this symbol if your system has the locale(1) program. */
#define HAVE_LOCALE_PROG 1

/* Define to 1 if the system has the type `loff_t'. */
#define HAVE_LOFF_T 1

/* Define to 1 if you support file names longer than 14 characters. */
#define HAVE_LONG_FILE_NAMES 1

/* Define to 1 if you have the `lutime' function. */
/* #undef HAVE_LUTIME */

/* Define to 1 if you have the `lutimeat' function. */
/* #undef HAVE_LUTIMEAT */

/* Define to 1 if you have the `lutimens' function. */
/* #undef HAVE_LUTIMENS */

/* Define to 1 if you have the `lutimensat' function. */
/* #undef HAVE_LUTIMENSAT */

/* Define to 1 if you have the `lutimes' function. */
#define HAVE_LUTIMES 1

/* Define to 1 if you have the `lutimesat' function. */
/* #undef HAVE_LUTIMESAT */

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if mincore exists and also works for non-mmap memory. */
/* #undef HAVE_MINCORE */

/* Define to 1 if you have the `mkdtemp' function. */
#define HAVE_MKDTEMP 1

/* Define to 1 if you have the `mkostemp' function. */
#define HAVE_MKOSTEMP 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <mntent.h> header file. */
#define HAVE_MNTENT_H 1

/* Define to 1 if you have the `mount' function. */
#define HAVE_MOUNT 1

/* Define to 1 if you have the `munmap' function. */
#define HAVE_MUNMAP 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netash/ash.h> header file. */
#define HAVE_NETASH_ASH_H 1

/* Define to 1 if you have the <netax25/ax25.h> header file. */
#define HAVE_NETAX25_AX25_H 1

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <neteconet/ec.h> header file. */
#define HAVE_NETECONET_EC_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <netinet/in_var.h> header file. */
/* #undef HAVE_NETINET_IN_VAR_H */

/* Define to 1 if you have the <netipx/ipx.h> header file. */
#define HAVE_NETIPX_IPX_H 1

/* Define to 1 if you have the <netiucv/iucv.h> header file. */
#define HAVE_NETIUCV_IUCV_H 1

/* Define to 1 if you have the <netpacket/packet.h> header file. */
#define HAVE_NETPACKET_PACKET_H 1

/* Define to 1 if you have the <netrom/netrom.h> header file. */
#define HAVE_NETROM_NETROM_H 1

/* Define to 1 if you have the <netrose/rose.h> header file. */
#define HAVE_NETROSE_ROSE_H 1

/* Define to 1 if you have the <net/ethernet.h> header file. */
#define HAVE_NET_ETHERNET_H 1

/* Define to 1 if you have the <net/if_arp.h> header file. */
#define HAVE_NET_IF_ARP_H 1

/* Define to 1 if you have the <net/if.h> header file. */
#define HAVE_NET_IF_H 1

/* Define to 1 if you have the <net/if_ppp.h> header file. */
#define HAVE_NET_IF_PPP_H 1

/* Define to 1 if you have the <net/if_var.h> header file. */
/* #undef HAVE_NET_IF_VAR_H */

/* Define to 1 if you have the <net/ppp-comp.h> header file. */
#define HAVE_NET_PPP_COMP_H 1

/* Define to 1 if you have the <net/ppp_defs.h> header file. */
#define HAVE_NET_PPP_DEFS_H 1

/* Define to 1 if you have the <net/route.h> header file. */
#define HAVE_NET_ROUTE_H 1

/* Define to 1 if the system has the type `off_t'. */
#define HAVE_OFF_T 1

/* Define to 1 if you have the `on_exit' function. */
#define HAVE_ON_EXIT 1

/* Define to 1 if you have the `openat' function. */
#define HAVE_OPENAT 1

/* Define to 1 if you have the `pipe2' function. */
#define HAVE_PIPE2 1

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define to 1 if you have the <poll.h> header file. */
#define HAVE_POLL_H 1

/* Define to 1 if you have the `ptrace' function. */
#define HAVE_PTRACE 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the <pwd.h> header file. */
#define HAVE_PWD_H 1

/* Define to 1 if you have the `readv' function. */
#define HAVE_READV 1

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the `remove' function. */
#define HAVE_REMOVE 1

/* Define to 1 if you have the `setdomainname' function. */
#define HAVE_SETDOMAINNAME 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `setgrent' function. */
#define HAVE_SETGRENT 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the `setmntent' function. */
#define HAVE_SETMNTENT 1

/* Define to 1 if you have the `setpriority' function. */
#define HAVE_SETPRIORITY 1

/* Define to 1 if you have the `setregid' function. */
#define HAVE_SETREGID 1

/* Define to 1 if you have the `setresgid' function. */
#define HAVE_SETRESGID 1

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define to 1 if you have the `setreuid' function. */
#define HAVE_SETREUID 1

/* Define to 1 if you have the `setsid' function. */
#define HAVE_SETSID 1

/* Define to 1 if you have the `settimeofday' function. */
#define HAVE_SETTIMEOFDAY 1

/* Define to 1 if you have the `shmat' function. */
#define HAVE_SHMAT 1

/* Define to 1 if you have the `shmctl' function. */
#define HAVE_SHMCTL 1

/* Define to 1 if you have the `signalfd' function. */
#define HAVE_SIGNALFD 1

/* Define to 1 if the system has the type `sigset_t'. */
#define HAVE_SIGSET_T 1

/* Define to 1 if you have the `sleep' function. */
#define HAVE_SLEEP 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the `statfs' function. */
#define HAVE_STATFS 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio_ext.h> header file. */
#define HAVE_STDIO_EXT_H 1

/* Define this symbol if your system <stdio.h> defines the off_t type. */
#define HAVE_STDIO_OFF_T 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stime' function. */
#define HAVE_STIME 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strcoll' function. */
#define HAVE_STRCOLL 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strnstr' function. */
/* #undef HAVE_STRNSTR */

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if you have the `strtof' function. */
#define HAVE_STRTOF 1

/* Define to 1 if you have the `strtold' function. */
#define HAVE_STRTOLD 1

/* Define this symbol if your system has <linux/serial.h> AND it defines
   struct serial_rs485. */
#define HAVE_STRUCT_SERIAL_RS485 1

/* Define this symbol if your system has <linux/serial.h> AND it defines
   struct serial_rs485. */
#define HAVE_STRUCT_SERIAL_RS485_delay_rts_after_send 1

/* Define to 1 if you have the `strverscmp' function. */
#define HAVE_STRVERSCMP 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/acl.h> header file. */
#define HAVE_SYS_ACL_H 1

/* Define to 1 if you have the <sys/capability.h> header file. */
#define HAVE_SYS_CAPABILITY_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/eventfd.h> header file. */
#define HAVE_SYS_EVENTFD_H 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioccom.h> header file. */
/* #undef HAVE_SYS_IOCCOM_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/mntent.h> header file. */
/* #undef HAVE_SYS_MNTENT_H */

/* Define to 1 if you have the <sys/mnttab.h> header file. */
/* #undef HAVE_SYS_MNTTAB_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define this symbol if your system <sys/mount.h> defines MS_MOVE. */
#define HAVE_SYS_MOUNT_MS_MOVE 1

/* Define to 1 if you have the <sys/mtio.h> header file. */
#define HAVE_SYS_MTIO_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/ptrace.h> header file. */
#define HAVE_SYS_PTRACE_H 1

/* Define to 1 if you have the <sys/raw.h> header file. */
#define HAVE_SYS_RAW_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/signalfd.h> header file. */
#define HAVE_SYS_SIGNALFD_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/sockio.h> header file. */
/* #undef HAVE_SYS_SOCKIO_H */

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/statvfs.h> header file. */
#define HAVE_SYS_STATVFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysmacros.h> header file. */
#define HAVE_SYS_SYSMACROS_H 1

/* Define to 1 if you have the <sys/termios.h> header file. */
#define HAVE_SYS_TERMIOS_H 1

/* Define to 1 if you have the <sys/termio.h> header file. */
/* #undef HAVE_SYS_TERMIO_H */

/* Define to 1 if you have the <sys/timeb.h> header file. */
#define HAVE_SYS_TIMEB_H 1

/* Define to 1 if you have the <sys/timerfd.h> header file. */
#define HAVE_SYS_TIMERFD_H 1

/* Define to 1 if you have the <sys/timex.h> header file. */
#define HAVE_SYS_TIMEX_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/ttycom.h> header file. */
/* #undef HAVE_SYS_TTYCOM_H */

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define this symbol if your system <sys/types.h> defines the off_t type. */
#define HAVE_SYS_TYPES_OFF_T 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
#define HAVE_SYS_UN_H 1

/* Define to 1 if you have the <sys/user.h> header file. */
#define HAVE_SYS_USER_H 1

/* Define to 1 if you have the <sys/ustat.h> header file. */
/* #undef HAVE_SYS_USTAT_H */

/* Define to 1 if you have the <sys/utsname.h> header file. */
#define HAVE_SYS_UTSNAME_H 1

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `tcdrain' function. */
#define HAVE_TCDRAIN 1

/* Define to 1 if you have the `tcflow' function. */
#define HAVE_TCFLOW 1

/* Define to 1 if you have the `tcflush' function. */
#define HAVE_TCFLUSH 1

/* Define to 1 if you have the `tcgetattr' function. */
#define HAVE_TCGETATTR 1

/* Define to 1 if you have the `tcsendbreak' function. */
#define HAVE_TCSENDBREAK 1

/* Define to 1 if you have the `tcsetattr' function. */
#define HAVE_TCSETATTR 1

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the <termio.h> header file. */
#define HAVE_TERMIO_H 1

/* Define to 1 if you have the `timerfd_create' function. */
#define HAVE_TIMERFD_CREATE 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the `uname' function. */
#define HAVE_UNAME 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the `ustat' function. */
/* #undef HAVE_USTAT */

/* Define to 1 if you have the <ustat.h> header file. */
/* #undef HAVE_USTAT_H */

/* Define to 1 if you have the `utimens' function. */
/* #undef HAVE_UTIMENS */

/* Define to 1 if you have the `utimensat' function. */
#define HAVE_UTIMENSAT 1

/* Define to 1 if you have the `utimes' function. */
#define HAVE_UTIMES 1

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define this symbol to indicate the presence of the utsname domainname
   member. */
#define HAVE_UTSNAME_DOMAINNAME 1

/* Define this symbol if your system as <linux/videodev2.h> AND it defines
   enum member V4L2_CTRL_TYPE_BITMASK. */
#define HAVE_V4L2_CTRL_TYPE_BITMASK 1

/* Define this symbol if your system as <linux/videodev2.h> AND it defines
   enum member V4L2_CTRL_TYPE_STRING. */
#define HAVE_V4L2_CTRL_TYPE_STRING 1

/* Define this symbol if your system as <linux/videodev2.h> AND it defines
   struct v4l2_dbg_register. */
#define HAVE_V4L2_DBG_REGISTER 1

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the `wcwidth' function. */
#define HAVE_WCWIDTH 1

/* Define to 1 if you have the `writev' function. */
#define HAVE_WRITEV 1

/* Define to 1 if you have the <_G_config.h> header file. */
/* #undef HAVE__G_CONFIG_H */

/* Define to 1 if you have the `__fpurge' function. */
#define HAVE___FPURGE 1

/* Define this symbol if your system as <linux/videodev2.h> AND it defines
   struct v4l2_hw_freq_seek to have a member called spacing. */
#define HAVE_v4l2_hw_freq_seek_spacing 1

/* Define this symbol if your system has <linux/types.h> AND it defines struct
   ustat. */
/* #undef LINUX_TYPES_H_STRUCT_USTAT */

/* Define this symbol if your system has <linux/videodev2.h> AND it defines
   struct v4l2_buffer AND it has an 'input' member. */
/* #undef LINUX_VIDEODEV2_H_struct_v4l2_buffer_input */

/* Define this symbol if your system is able to include <net/if.h> and
   <linux/if.h> in the compilation unit. */
#define NET_IF_LINUX_IF_PLAY_NICE 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define this symbol if your system has files containing the command line
   each process in /proc/pid/cmdline */
#define PROC_PID_CMDLINE 1

/* Define this symbol if your system has symbolic links containing the
   absolute path of the current directory of a process in /proc/pid/cwd */
#define PROC_PID_CWD 1

/* Define this symbol if your system has symbolic links containing the
   absolute path of the executable of a process in /proc/pid/exe */
#define PROC_PID_EXE 1

/* Define this symbol if your system has symbolic links containing the
   absolute path of open files in /proc/nnn/fd/nnn */
#define PROC_PID_FD_N 1

/* Define this symbol if your system has symbolic links containing the
   absolute path of the executable of a process in /proc/pid/path/a.out */
/* #undef PROC_PID_PATH_A_OUT */

/* Define this symbol if your system has symbolic links containing the
   absolute path of the current directory of a process in /proc/pid/path/cwd
   */
/* #undef PROC_PID_PATH_CWD */

/* Define this symbol if your system has symbolic links containing the
   absolute path of open files in /proc/nnn/path/nnn */
/* #undef PROC_PID_PATH_N */

/* Define this symbol if your system has symbolic links containing the
   absolute path of the root directory of a process in /proc/pid/path/root */
/* #undef PROC_PID_PATH_ROOT */

/* Define this symbol if your system has symbolic links containing the
   absolute path of the root directory of a process in /proc/pid/root */
#define PROC_PID_ROOT 1

/* Define this symbol if your system has symbolic link at /proc/self */
#define PROC_SELF 1

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define this symbol to be the number of arguments required by the setpgrp
   function. */
#define SETPGRP_NARGS 0

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `ptrdiff_t', as computed by sizeof. */
#define SIZEOF_PTRDIFF_T 8

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* The size of `ssize_t', as computed by sizeof. */
#define SIZEOF_SSIZE_T 8

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to the number of arguments for the statfs function. */
#define STATFS_NARGS 2

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Define this symbol if your system has <sys/ptrace.h> or <sys/user.h> AND
   one of them defines struct user_fpregs_struct. */
#define SYS_PTRACE_USER_FPREGS_STRUCT 1

/* Define this symbol if your system has <sys/ptrace.h> or <sys/user.h> AND
   one of them defines struct user_fpxregs_struct. */
/* #undef SYS_PTRACE_USER_FPXREGS_STRUCT */

/* Define this symbol if your system has <sys/ptrace.h> or <sys/user.h> AND
   one of them defines struct user_regs_struct. */
#define SYS_PTRACE_USER_REGS_STRUCT 1

/* Define this symbol if your system has <sys/shm.h> AND it defines struct
   ipc_perm AND it has a __key member. */
#define SYS_SHM_H_struct_ipc_perm_underscore_key 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define this symbol as itself if your system has <linux/videodev2.h> and it
   defines V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE as an enum member. */
#define V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE

/* Define this symbol as itself if your system has <linux/videodev2.h> and it
   defines V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE as an enum member. */
#define V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE

/* Define this symbol to 1 if va_list type is compatible with const void *. */
#define VA_LIST_VOID_STAR 1

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* File listing canonical interesting mount points. */
#define _PATH_MNTTAB "/etc/fstab"

/* File listing currently active mount points. */
#define _PATH_MOUNTED "/etc/mtab"

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */


/*
 * There is more to do, but we need to insulate it from config.status,
 * because it screws up the #undef lines.  They are all implications of
 * the above information, so there is no need for you to edit the file,
 * if you are configuring libexplain manually.
 */
#include <libexplain/config.messy.h>

#endif /* LIBEXPLAIN_CONFIG_H */
