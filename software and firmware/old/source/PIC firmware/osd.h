#ifndef OSD_H_INCLUDED
#define	OSD_H_INCLUDED

/*constants*/
#define	OSDCTRLUP		0x01		/*OSD up control*/
#define	OSDCTRLDOWN		0x02		/*OSD down control*/
#define	OSDCTRLSELECT	0x04		/*OSD select control*/
#define	OSDCTRLMENU		0x08		/*OSD menu control*/

/*functions*/
void OsdWrite(unsigned char n,const unsigned char *s, char inver);
void OsdClear(void);
void OsdEnable(void);
void OsdDisable(void);
void OsdReset(unsigned char boot);
void OsdFilter(unsigned char lr_filter, unsigned char hr_filter);
void OsdMemoryConfig(unsigned char memcfg);
unsigned char OsdGetCtrl(void);

#endif
