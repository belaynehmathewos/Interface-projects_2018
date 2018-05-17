
#include <LPC214X.H>
#include "pll.h"
unsigned long c,j;
 //char *all_arr[] ={"HE","HU","HI","HA","HEE","H","HO", "...",};


//he...ho right
unsigned long row_val1he[]={0x0001,0x00fe};//he on right one
unsigned long col_val1he[]={0x4200,0x3c00};
unsigned long row_val1hu[]={0x0001,0x00fe,0x00ef};//hu on right one
unsigned long col_val1hu[]={0x2100,0x1e00,0xc000};
unsigned long row_val1hi[]={0x001f,0x00ef,0x0000,0x00fe};//hi on right one
unsigned long col_val1hi[]={0x0200,0x1c00,0x2000,0xc000};
unsigned long row_val1ha[]={0x001f,0x00ef,0x0000};//ha on right one
unsigned long col_val1ha[]={0x0200,0x1c00,0x2000};
unsigned long row_val1hee[]={0x001f,0x00ef,0x0000,0x00f8,0x00fa};//hee on right one
unsigned long col_val1hee[]={0x0200,0x1c00,0x2000,0x8000,0x4000};
unsigned long row_val1h[]={0x001f,0x00c1,0x00fe,0x0001};//hi on right one
unsigned long col_val1h[]={0x0100,0x0200,0x3c00,0x4000};
unsigned long row_val1ho[]={0x0001,0x00fe,0x001f,0x005f};//he on right one
unsigned long col_val1ho[]={0x2100,0x1e00,0x8000,0x4000};
//he...ho left
unsigned long row_val2he[]={0x00010000,0x00fe0000};//he on 
unsigned long col_val2he[]={0x42000000,0x3c000000};
unsigned long row_val2hu[]={0x00010000,0x00fe0000,0x00ef0000};//hu on 
unsigned long col_val2hu[]={0x21000000,0x1e000000,0xc0000000};
unsigned long row_val2hi[]={0x001f0000,0x00ef0000,0x00000000,0x00fe0000};//hi on 
unsigned long col_val2hi[]={0x02000000,0x1c000000,0x20000000,0xc0000000};
unsigned long row_val2ha[]={0x001f0000,0x00ef0000,0x00000000};//ha on right one
unsigned long col_val2ha[]={0x02000000,0x1c000000,0x20000000};
unsigned long row_val2hee[]={0x001f0000,0x00ef0000,0x00000000,0x00f80000,0x00fa0000};//hee on e
unsigned long col_val2hee[]={0x02000000,0x1c000000,0x20000000,0x80000000,0x40000000};
unsigned long row_val2h[]={0x001f0000,0x00c10000,0x00fe0000,0x00010000};//hi on 
unsigned long col_val2h[]={0x01000000,0x02000000,0x3c000000,0x40000000};
unsigned long row_val2ho[]={0x00010000,0x00fe0000,0x001f0000,0x005f0000};//he on 
unsigned long col_val2ho[]={0x21000000,0x1e000000,0x80000000,0x40000000};

//le...lo right
unsigned long row_val1le[]={0x00f0,0x00ef,0x000f};//le on right one
unsigned long col_val1le[]={0x2100,0x1e00,0x0100};
unsigned long row_val1lu[]={0x00f0,0x00ef,0x000f,0x00fb};//lu on right one
unsigned long col_val1lu[]={0x2100,0x1e00,0x0100,0xc000};
unsigned long row_val1li[]={0x00f0,0x00ef,0x000f,0x00fe};//li on right one
unsigned long col_val1li[]={0x2100,0x1e00,0x0100,0xc000};
unsigned long row_val1la[]={0x00f1,0x00f0,0x00ef,0x000f};//la on right one
unsigned long col_val1la[]={0x0100,0x2000,0x1e00,0x0100};
unsigned long row_val1lee[]={0x00f0,0x00ef,0x000f,0x00f8,0x00fa};//lee on right one
unsigned long col_val1lee[]={0x2100,0x1e00,0x0100,0x8000,0x4000};
//unsigned long row_val1l[]={0x00f0,0x00ef,0x008f,0x00f8,0x00fa,0x007f};//lee on right one
//unsigned long col_val1l[]={0x2100,0x1e00,0x0100,0x0400,0x0200,0x0200};
unsigned long row_val1l[]={0x00f0,0x00ef,0x000f,0x00f8,0x00fa};//lee on right one
unsigned long col_val1l[]={0x2100,0x1e00,0x0100,0x0400,0x0200};
//unsigned long row_val1lo[]={0x00f0,0x00ef,0x000f,0x00f7,0x00fb};//lee on right one
//unsigned long col_val1lo[]={0x1100,0x0e00,0x0100,0xe000,0xc000};
unsigned long row_val1lo[]={0x00f0,0x00ef,0x008f,0x00f7,0x00fd,0x00fb};//lee on right one
unsigned long col_val1lo[]={0x0900,0x0600,0x0100,0xf000,0xe000,0xa000};

//le...lo left
unsigned long row_val2le[]={0x00f00000,0x00ef0000,0x000f0000};//le on 
unsigned long col_val2le[]={0x21000000,0x1e000000,0x01000000};
unsigned long row_val2lu[]={0x00f00000,0x00ef0000,0x000f0000,0x00fb0000};//lu on 
unsigned long col_val2lu[]={0x21000000,0x1e000000,0x01000000,0xc0000000};
unsigned long row_val2li[]={0x00f00000,0x00ef0000,0x000f0000,0x00fe0000};//li on 
unsigned long col_val2li[]={0x21000000,0x1e000000,0x01000000,0xc0000000};
unsigned long row_val2la[]={0x00f10000,0x00f00000,0x00ef0000,0x000f0000};//la on 
unsigned long col_val2la[]={0x01000000,0x20000000,0x1e000000,0x01000000};
unsigned long row_val2lee[]={0x00f00000,0x00ef0000,0x000f0000,0x00f80000,0x00fa0000};//lee on 
unsigned long col_val2lee[]={0x21000000,0x1e000000,0x01000000,0x80000000,0x40000000};
unsigned long row_val2l[]={0x00f00000,0x00ef0000,0x000f0000,0x00f80000,0x00fa0000};//lee on 
unsigned long col_val2l[]={0x21000000,0x1e000000,0x01000000,0x04000000,0x02000000};
unsigned long row_val2lo[]={0x00f00000,0x00ef0000,0x008f0000,0x00f70000,0x00fd0000,0x00fb0000};//lee on 
unsigned long col_val2lo[]={0x09000000,0x06000000,0x01000000,0xf0000000,0xe0000000,0xa0000000};

//me...mo right
unsigned long row_val1me[]={0x0083,0x007d,0x00df,0x00bf};//me on right one
unsigned long col_val1me[]={0xa500,0x4200,0x0800,0x1000};

//me...mo leftt
unsigned long row_val2me[]={0x00830000,0x007d0000,0x00df0000,0x00bf0000};//me on 
unsigned long col_val2me[]={0xa5000000,0x42000000,0x08000000,0x10000000};

//re...ro right
unsigned long row_val1re[]={0x0000,0x00fe};//re on right one
unsigned long col_val1re[]={0x0100,0x7f00};
unsigned long row_val1ru[]={0x0003,0x00fb,0x00fd,0x00fe};//ru on right one
unsigned long col_val1ru[]={0x0200,0x3c00,0x0800,0x0400};
//unsigned long row_val1ri[]={0x0000,0x00fe,0x00f9};//ri on right one
//unsigned long col_val1ri[]={0x0100,0x3e00,0x4000};
unsigned long row_val1ri[]={0x0001,0x00fe,0x00f9};//ri on right one
unsigned long col_val1ri[]={0x0100,0x1e00,0x2000};
unsigned long row_val1ra[]={0x0001,0x00fd,0x00fb};//ra on right one
unsigned long col_val1ra[]={0x0200,0xcc00,0x3000};
//unsigned long row_val1ree[]={0x0001,0x00fd,0x00f8,0x00fa};//ree on right one
//unsigned long col_val1ree[]={0x0100,0x1e00,0xa000,0x4000};
unsigned long row_val1ree[]={0x0003,0x00fd,0x00f8,0x00fa};//ree on right one
unsigned long col_val1ree[]={0x0100,0x0e00,0x5000,0x2000};
unsigned long row_val1r[]={0x0081,0x007e,0x00bd};//r on the right
unsigned long col_val1r[]={0x0200,0x3c00,0x4000};
unsigned long row_val1ro[]={0x00c1,0x00be,0x005f,0x00bf,0x00fd};//ro on the right
unsigned long col_val1ro[]={0x0100,0x3e00,0xe000,0x8000,0x4000};
//unsigned long row_val1ro[]={0x00c3,0x00bd,0x005f,0x00bf,0x00fb};//ro on the right
//unsigned long col_val1ro[]={0x0100,0x1e00,0x6000,0x4000,0x2000};
//re...ro left
unsigned long row_val2re[]={0x00000000,0x00fe0000};//re on 
unsigned long col_val2re[]={0x01000000,0x7f000000};
unsigned long row_val2ru[]={0x00030000,0x00fb0000,0x00fd0000,0x00fe0000};//ru on 
unsigned long col_val2ru[]={0x02000000,0x3c000000,0x08000000,0x04000000};
unsigned long row_val2ri[]={0x00010000,0x00fe0000,0x00f90000};//ri on 
unsigned long col_val2ri[]={0x01000000,0x1e000000,0x20000000};
unsigned long row_val2ra[]={0x00010000,0x00fd0000,0x00fb0000};//ra on 
unsigned long col_val2ra[]={0x02000000,0xcc000000,0x30000000};
unsigned long row_val2ree[]={0x00030000,0x00fd0000,0x00f80000,0x00fa0000};//ree on 
unsigned long col_val2ree[]={0x01000000,0x0e000000,0x50000000,0x20000000};
unsigned long row_val2r[]={0x00810000,0x007e0000,0x00bd0000};//r on the 
unsigned long col_val2r[]={0x02000000,0x3c000000,0x40000000};
unsigned long row_val2ro[]={0x00c10000,0x00be0000,0x005f0000,0x00bf0000,0x00fd0000};//ro on 
unsigned long col_val2ro[]={0x01000000,0x3e000000,0xe0000000,0x80000000,0x40000000};

//se...so right
unsigned long row_val1se[]={0x00e0,0x00df,0x003f};//se on right one
unsigned long col_val1se[]={0x8200,0x7c00,0x1000};
unsigned long row_val1su[]={0x00e0,0x00df,0x003f,0x00fb};//su on right one
unsigned long col_val1su[]={0x2200,0x1c00,0x0800,0xc000};
unsigned long row_val1si[]={0x00e0,0x00df,0x003f,0x00fe};//si on right one
unsigned long col_val1si[]={0x2200,0x1c00,0x0800,0xc000};
unsigned long row_val1sa[]={0x00e1,0x00df,0x003f,0x00e0};//sa on right one
unsigned long col_val1sa[]={0x0200,0x7c00,0x1000,0x8000};
unsigned long row_val1see[]={0x00e0,0x00df,0x003f,0x00fa,0x00fd};//see on right one
unsigned long col_val1see[]={0x2200,0x1c00,0x0800,0xc000,0x8000};
unsigned long row_val1s[]={0x00e0,0x00df,0x00bf,0x007f};//s on right one
unsigned long col_val1s[]={0x2200,0x1c00,0x0800,0x0400};
unsigned long row_val1so[]={0x00e0,0x00df,0x003f,0x00e1};//sa on right one
unsigned long col_val1so[]={0x0200,0x7c00,0x1000,0x8000};
//se...so left
unsigned long row_val2se[]={0x00e00000,0x00df0000,0x003f0000};//se on 
unsigned long col_val2se[]={0x82000000,0x7c000000,0x10000000};
unsigned long row_val2su[]={0x00e00000,0x00df0000,0x003f0000,0x00fb0000};//su on 
unsigned long col_val2su[]={0x22000000,0x1c000000,0x08000000,0xc0000000};
unsigned long row_val2si[]={0x00e00000,0x00df0000,0x003f0000,0x00fe0000};//si on 
unsigned long col_val2si[]={0x22000000,0x1c000000,0x08000000,0xc0000000};
unsigned long row_val2sa[]={0x00e10000,0x00df0000,0x003f0000,0x00e00000};//sa on 
unsigned long col_val2sa[]={0x02000000,0x7c000000,0x10000000,0x80000000};
unsigned long row_val2see[]={0x00e00000,0x00df0000,0x003f0000,0x00fa0000,0x00fd0000};//see on 
unsigned long col_val2see[]={0x22000000,0x1c000000,0x08000000,0xc0000000,0x80000000};
unsigned long row_val2s[]={0x00e00000,0x00df0000,0x00bf0000,0x007f0000};//s on 
unsigned long col_val2s[]={0x22000000,0x1c000000,0x08000000,0x04000000};
unsigned long row_val2so[]={0x00e00000,0x00df0000,0x003f0000,0x00e10000};//sa on 
unsigned long col_val2so[]={0x02000000,0x7c000000,0x10000000,0x80000000};
//she...sho right

//unsigned long row_val1she[]={0x00e0,0x00df,0x003f,0x007f};//she on right one
//unsigned long col_val1she[]={0x8200,0x7c00,0x1000,0x2800};
unsigned long row_val1she[]={0x00000000e0,0x00df,0x003f,0x007f};//she on right one
unsigned long col_val1she[]={0x8200,0x7c00,0x1000,0x2800};
unsigned long row_val1shu[]={0x00e0,0x00df,0x003f,0x007f,0x00fb};//shu on right one
unsigned long col_val1shu[]={0x2200,0x1c00,0x0800,0x1400,0xc000};
unsigned long row_val1shi[]={0x00e0,0x00df,0x003f,0x007f,0x00fe};//shi on right one
unsigned long col_val1shi[]={0x2200,0x1c00,0x0800,0x1400,0xc000};
unsigned long row_val1sha[]={0x00e1,0x00df,0x003f,0x00e0,0x007f};//sha on right one
unsigned long col_val1sha[]={0x0200,0x7c00,0x1000,0x8000,0x2800};
unsigned long row_val1shee[]={0x00e0,0x00df,0x003f,0x00fa,0x00fd,0x007f};//shee on right one
unsigned long col_val1shee[]={0x2200,0x1c00,0x0800,0xc000,0x8000,0x1400};
unsigned long row_val1sh[]={0x00e0,0x00df,0x00bf,0x007f,0x007f};//s on right one
unsigned long col_val1sh[]={0x2200,0x1c00,0x0800,0x0400,0x0a00};
unsigned long row_val1sho[]={0x00e0,0x00df,0x003f,0x00e1,0x007f};//sa on right one
unsigned long col_val1sho[]={0x0200,0x7c00,0x1000,0x8000,0x6c00};

//she...soh left
unsigned long row_val2she[]={0x00e00000,0x00df0000,0x003f0000,0x007f0000};//she on right one
unsigned long col_val2she[]={0x82000000,0x7c000000,0x10000000,0x28000000};
unsigned long row_val2shu[]={0x00e00000,0x00df0000,0x003f0000,0x007f0000,0x00fb0000};//shu on right one
unsigned long col_val2shu[]={0x22000000,0x1c000000,0x08000000,0x14000000,0xc0000000};
unsigned long row_val2shi[]={0x00e00000,0x00df0000,0x003f0000,0x007f0000,0x00fe0000};//shi on right one
unsigned long col_val2shi[]={0x22000000,0x1c000000,0x08000000,0x14000000,0xc0000000};
unsigned long row_val2sha[]={0x00e10000,0x00df0000,0x003f0000,0x00e00000,0x007f0000};//sha on right one
unsigned long col_val2sha[]={0x02000000,0x7c000000,0x10000000,0x80000000,0x28000000};
unsigned long row_val2shee[]={0x00e00000,0x00df0000,0x003f0000,0x00fa0000,0x00fd0000,0x007f0000};//shee on right one
unsigned long col_val2shee[]={0x22000000,0x1c000000,0x08000000,0xc0000000,0x80000000,0x14000000};
unsigned long row_val2sh[]={0x00e00000,0x00df0000,0x00bf0000,0x007f0000,0x007f0000};//s on right one
unsigned long col_val2sh[]={0x22000000,0x1c000000,0x08000000,0x04000000,0x0a000000};
unsigned long row_val2sho[]={0x00e00000,0x00df0000,0x003f0000,0x00e10000,0x007f0000};//sa on right one
unsigned long col_val2sho[]={0x02000000,0x7c000000,0x10000000,0x80000000,0x6c000000};

//qe...qo right
unsigned long row_val1qe[]={0x0000,0x00b7,0x00cf};//qe on right one
unsigned long col_val1qe[]={0x1000,0x3800,0x4400};
unsigned long row_val1qu[]={0x0000,0x00b7,0x00cf,0x00fd};//
unsigned long col_val1qu[]={0x1000,0x3800,0x4400,0x6000};
unsigned long row_val1qi[]={0x0000,0x00b7,0x00cf,0x00fe};//
unsigned long col_val1qi[]={0x1000,0x3800,0x4400,0x6000};
unsigned long row_val1qa[]={0x0003,0x00b7,0x00cf,0x00fd,0x00fe};//qe on right one
unsigned long col_val1qa[]={0x1000,0x3800,0x4400,0x0800,0x0400};
unsigned long row_val1qee[]={0x0000,0x00b7,0x00cf,0x00fa,0x00fd};//
unsigned long col_val1qee[]={0x1000,0x3800,0x4400,0x6000,0x4000};

//qe...qo left
unsigned long row_val2qe[]={0x00000000,0x00b70000,0x00cf0000};//qe on left one
unsigned long col_val2qe[]={0x10000000,0x38000000,0x44000000};
unsigned long row_val2qu[]={0x00000000,0x00b70000,0x00cf0000,0x00fd0000};//
unsigned long col_val2qu[]={0x10000000,0x38000000,0x44000000,0x60000000};
unsigned long row_val2qi[]={0x00000000,0x00b70000,0x00cf0000,0x00fe0000};//
unsigned long col_val2qi[]={0x10000000,0x38000000,0x44000000,0x60000000};
unsigned long row_val2qa[]={0x00030000,0x00b70000,0x00cf0000,0x00fd0000,0x00fe0000};//
unsigned long col_val2qa[]={0x10000000,0x38000000,0x44000000,0x08000000,0x04000000};
unsigned long row_val2qee[]={0x00000000,0x00b70000,0x00cf0000,0x00fa0000,0x00fd0000};//
unsigned long col_val2qee[]={0x10000000,0x38000000,0x44000000,0x60000000,0x40000000};


//be...bo right
unsigned long row_val1be[]={0x0080,0x007f};//be on right one
unsigned long col_val1be[]={0x8200,0x7c00};
unsigned long row_val1bu[]={0x0080,0x007f,0x00f7};//bu on right one
unsigned long col_val1bu[]={0x2200,0x1c00,0xc000};
unsigned long row_val1bi[]={0x0080,0x007f,0x00fe};//bi on right one
unsigned long col_val1bi[]={0x2200,0x1c00,0xc000};
unsigned long row_val1ba[]={0x0083,0x007f,0x0080};
unsigned long col_val1ba[]={0x0200,0x7c00,0x8000};
unsigned long row_val1bee[]={0x0080,0x007f,0x00fa,0x00fd};// right one
unsigned long col_val1bee[]={0x2200,0x1c00,0xc000,0x8000};
unsigned long row_val1b[]={0x0080,0x007f,0x00df,0x00ef};// one
unsigned long col_val1b[]={0x4400,0x3800,0x0200,0x0100};
unsigned long row_val1bo[]={0x0080,0x007f,0x0083};//
unsigned long col_val1bo[]={0x0200,0x7c00,0x8000};
	
//be...bo left	
unsigned long row_val2be[]={0x00800000,0x007f0000};//be on right one
unsigned long col_val2be[]={0x82000000,0x7c000000};
unsigned long row_val2bu[]={0x00800000,0x007f0000,0x00f70000};//bu on right one
unsigned long col_val2bu[]={0x22000000,0x1c000000,0xc0000000};
unsigned long row_val2bi[]={0x00800000,0x007f0000,0x00fe0000};//bi on right one
unsigned long col_val2bi[]={0x22000000,0x1c000000,0xc0000000};
unsigned long row_val2ba[]={0x00830000,0x007f0000,0x00800000};
unsigned long col_val2ba[]={0x02000000,0x7c000000,0x80000000};
unsigned long row_val2bee[]={0x00800000,0x007f0000,0x00fa0000,0x00fd0000};// right one
unsigned long col_val2bee[]={0x22000000,0x1c000000,0xc0000000,0x80000000};
unsigned long row_val2b[]={0x00800000,0x007f0000,0x00df0000,0x00ef0000};// one
unsigned long col_val2b[]={0x44000000,0x38000000,0x02000000,0x01000000};
unsigned long row_val2bo[]={0x00800000,0x007f0000,0x00830000};//
unsigned long col_val2bo[]={0x02000000,0x7c000000,0x80000000};
	
//te...to right	
unsigned long row_val1te[]={0x0080,0x00ef};//te on right one
unsigned long col_val1te[]={0x1000,0x7c00};
unsigned long row_val1tu[]={0x0080,0x00ef,0x00fb};//tu on right one
unsigned long col_val1tu[]={0x1000,0x7c00,0x6000};
unsigned long row_val1ti[]={0x0080,0x00ef,0x00fe};//ti on right one
unsigned long col_val1ti[]={0x1000,0x7c00,0x6000};
unsigned long row_val1ta[]={0x0083,0x00ef,0x00fd,0x00fe};
unsigned long col_val1ta[]={0x1000,0x7c00,0x0800,0x0400};
unsigned long row_val1tee[]={0x0080,0x00ef,0x00fa,0x00fd};// right one
unsigned long col_val1tee[]={0x1000,0x7c00,0x6000,0x4000};
unsigned long row_val1t[]={0x0080,0x00ef,0x003f,0x00bf};// one
unsigned long col_val1t[]={0x1000,0x7c00,0x0400,0x0800};
unsigned long row_val1to[]={0x0080,0x00ef,0x003f,0x007f};//
unsigned long col_val1to[]={0x1000,0x7c00,0x2800,0x1000};

//te...to left	
unsigned long row_val2te[]={0x00800000,0x00ef0000};//te on right one
unsigned long col_val2te[]={0x10000000,0x7c000000};
unsigned long row_val2tu[]={0x00800000,0x00ef0000,0x00fb0000};//tu on right one
unsigned long col_val2tu[]={0x10000000,0x7c000000,0x60000000};
unsigned long row_val2ti[]={0x00800000,0x00ef0000,0x00fe0000};//ti on right one
unsigned long col_val2ti[]={0x10000000,0x7c000000,0x60000000};
unsigned long row_val2ta[]={0x00830000,0x00ef0000,0x00fd0000,0x00fe0000};
unsigned long col_val2ta[]={0x10000000,0x7c000000,0x08000000,0x04000000};
unsigned long row_val2tee[]={0x00800000,0x00ef0000,0x00fa0000,0x00fd0000};// right one
unsigned long col_val2tee[]={0x10000000,0x7c000000,0x60000000,0x40000000};
unsigned long row_val2t[]={0x00800000,0x00ef0000,0x003f0000,0x00bf0000};// one
unsigned long col_val2t[]={0x10000000,0x7c000000,0x04000000,0x08000000};
unsigned long row_val2to[]={0x00800000,0x00ef0000,0x003f0000,0x007f0000};//
unsigned long col_val2to[]={0x10000000,0x7c000000,0x28000000,0x10000000};


//che...cho right	
unsigned long row_val1che[]={0x0080,0x00ef,0x00bf};//che on 
unsigned long col_val1che[]={0x1000,0x3800,0x7c00};
unsigned long row_val1chu[]={0x0080,0x00ef,0x00bf,0x00fb};//chu on 
unsigned long col_val1chu[]={0x1000,0x7c00,0x7c00,0x6000};
unsigned long row_val1chi[]={0x0080,0x00ef,0x00bf,0x00fe};// on right one
unsigned long col_val1chi[]={0x1000,0x7c00,0x7c00,0x6000};
unsigned long row_val1cha[]={0x0083,0x00ef,0x00fd,0x00bf,0x00fe};
unsigned long col_val1cha[]={0x1000,0x7c00,0x0800,0x7c00,0x0400};
unsigned long row_val1chee[]={0x0080,0x00ef,0x00fa,0x00bf,0x00fd};// right one
unsigned long col_val1chee[]={0x1000,0x7c00,0x6000,0x7c00,0x4000};
unsigned long row_val1ch[]={0x00c0,0x00f7,0x001f,0x00df,0x007f};// one
unsigned long col_val1ch[]={0x1000,0x7c00,0x0400,0x0800,0x1f00};
//unsigned long row_val1cho[]={0x0080,0x00ef,0x003f,0x007f};//
//unsigned long col_val1cho[]={0x1000,0x7c00,0x2800,0x1000};
//che...cho left
unsigned long row_val2che[]={0x00800000,0x00ef0000,0x00bf0000};//che on 
unsigned long col_val2che[]={0x10000000,0x38000000,0x7c000000};
unsigned long row_val2chu[]={0x00800000,0x00ef0000,0x00bf0000,0x00fb0000};//chu on 
unsigned long col_val2chu[]={0x10000000,0x7c000000,0x7c000000,0x60000000};
unsigned long row_val2chi[]={0x00800000,0x00ef0000,0x00bf0000,0x00fe0000};// on right one
unsigned long col_val2chi[]={0x10000000,0x7c000000,0x7c000000,0x60000000};
unsigned long row_val2cha[]={0x00830000,0x00ef0000,0x00fd0000,0x00bf0000,0x00fe0000};
unsigned long col_val2cha[]={0x10000000,0x7c000000,0x08000000,0x7c000000,0x04000000};
unsigned long row_val2chee[]={0x00800000,0x00ef0000,0x00fa0000,0x00bf0000,0x00fd0000};// right one
unsigned long col_val2chee[]={0x10000000,0x7c000000,0x60000000,0x7c000000,0x40000000};
unsigned long row_val2ch[]={0x00c00000,0x00f70000,0x001f0000,0x00df0000,0x007f0000};// one
unsigned long col_val2ch[]={0x10000000,0x7c000000,0x04000000,0x08000000,0x1f000000};
//unsigned long row_val2cho[]={0x0080,0x00ef,0x003f,0x007f};//
//unsigned long col_val2cho[]={0x1000,0x7c00,0x2800,0x1000};

unsigned long row_val1ze[]={0x0000,0x00EF};//Ze on right one
unsigned long col_val1ze[]={0x2400,0x3C00};
unsigned long row_val2ze[]={0x00000000,0x00EF0000};//Ze on left one
unsigned long col_val2ze[]={0x24000000,0x3C000000};


unsigned long row_val1zu[]={0x0000,0x00EF};//Zu on right one
unsigned long col_val1zu[]={0x2400,0x7C00};
unsigned long row_val2zu[]={0x00000000,0x00EF0000};//Zu on left one
unsigned long col_val2zu[]={0x24000000,0x7C000000};

unsigned long row_val1zi[]={0x0000,0x00EF,0x00FE};//Zi on right one
unsigned long col_val1zi[]={0x2400,0x3C00,0xc000};
unsigned long row_val2zi[]={0x00000000,0x00EF0000,0x00FE0000};//Zi on left one
unsigned long col_val2zi[]={0x24000000,0x3C000000,0xc0000000};

unsigned long row_val1za[]={0x0000,0x00EF,0x0003};//Za on right one
unsigned long col_val1za[]={0x2000,0x3c00,0x0400};
unsigned long row_val2za[]={0x00000000,0x00EF0000,0x00030000};//Za on left one
unsigned long col_val2za[]={0x20000000,0x3c000000,0x04000000};

unsigned long row_val1zee[]={0x0000,0x00EF,0x00FA,0x00FD};//Zee on right one
unsigned long col_val1zee[]={0x2400,0x3C00,0x4000,0x8000};
unsigned long row_val2zee[]={0x00000000,0x00EF0000,0x00FA0000,0x00FD0000};//Zee on left one
unsigned long col_val2zee[]={0x24000000,0x3C000000,0x40000000,0x80000000};

unsigned long row_val1z[]={0x0000,0x00EF,0x007F};//Z on right one
unsigned long col_val1z[]={0x2400,0x3C00,0x0300};
unsigned long row_val2z[]={0x00000000,0x00EF0000,0x007F0000};//Z on left one
unsigned long col_val2z[]={0x24000000,0x3C000000,0x03000000};

unsigned long row_val1zo[]={0x0000,0x00EF,0x0003};//Zo on right one
unsigned long col_val1zo[]={0x0400,0x3C00,0x4000};
unsigned long row_val2zo[]={0x00000000,0x00EF0000,0x00030000};//Zo on left one
unsigned long col_val2zo[]={0x04000000,0x3C000000,0x40000000};




unsigned long row_val1ge[]={0x007F,0x0080};//Ge on right one
unsigned long col_val1ge[]={0x1E00,0x1000};
unsigned long row_val2ge[]={0x007F0000,0x00800000};//Ge on left one
unsigned long col_val2ge[]={0x1E000000,0x10000000};


unsigned long row_val1gu[]={0x007F,0x0080,0x00EF};//Gu on right one
unsigned long col_val1gu[]={0x1E00,0x1000,0xE000};
unsigned long row_val2gu[]={0x007F0000,0x00800000,0x00EF0000};//Gu on left one
unsigned long col_val2gu[]={0x1E000000,0x10000000,0xE0000000};


unsigned long row_val1gi[]={0x007F,0x0080,0x00FE};//Gi on right one
unsigned long col_val1gi[]={0x1E00,0x1000,0xE000};
unsigned long row_val2gi[]={0x007F0000,0x00800000,0x00FE0000};//Gi on left one
unsigned long col_val2gi[]={0x1E000000,0x10000000,0xE0000000};

unsigned long row_val1ga[]={0x006F,0x009F,0x00F0};//Ga on right one
unsigned long col_val1ga[]={0x3C00,0x2000,0x0400};
unsigned long row_val2ga[]={0x006F0000,0x009F0000,0x00F00000};//Ga on left one
unsigned long col_val2ga[]={0x3C000000,0x20000000,0x04000000};

unsigned long row_val1gee[]={0x007F,0x0080,0x00FA,0x00FD};//Gee on right one
unsigned long col_val1gee[]={0x1E00,0x1000,0x6000,0x8000};
unsigned long row_val2gee[]={0x007F0000,0x00800000,0x00FA0000,0x00FD0000};//Gee on left one
unsigned long col_val2gee[]={0x1E000000,0x10000000,0x60000000,0x80000000};


unsigned long row_val1g[]={0x0000,0x007F,0x00DF,0x00BF};//G on right one
unsigned long col_val1g[]={0x4000,0x3E00,0x0E00,0x0A00};
unsigned long row_val2g[]={0x00000000,0x007F0000,0x00DF0000,0x00BF0000};//G on left one
unsigned long col_val2g[]={0x40000000,0x3E000000,0x0E000000,0x0A000000};


unsigned long row_val1go[]={0x00E0,0x00DF,0x003F};//Go on right one
unsigned long col_val1go[]={0x2000,0x3E00,0x0800};
unsigned long row_val2go[]={0x00E00000,0x00DF0000,0x003F0000};//Go on left one
unsigned long col_val2go[]={0x20000000,0x3E000000,0x08000000};


unsigned long row_val1tte[]={0x00c1,0x00bf};//Te on right one
unsigned long col_val1tte[]={0x4900,0x7f00};
unsigned long row_val2tte[]={0x00c10000,0x00bf0000};//Te on left one
unsigned long col_val2tte[]={0x49000000,0x7f000000};


unsigned long row_val1ttu[]={0x00c1,0x00bf,0x00ef};//Tu on right one
unsigned long col_val1ttu[]={0x4900,0x7f00,0x8000};
unsigned long row_val2ttu[]={0x00c10000,0x00bf0000,0x00ef0000};//Tu on left one
unsigned long col_val2ttu[]={0x49000000,0x7f000000,0x80000000};


unsigned long row_val1tti[]={0x00c1,0x00bf,0x00fd};//Ti on right one
unsigned long col_val1tti[]={0x4900,0x7f00,0x8000};
unsigned long row_val2tti[]={0x00c10000,0x00bf0000,0x00fd0000};//Ti on left one
unsigned long col_val2tti[]={0x49000000,0x7f000000,0x80000000};

unsigned long row_val1tta[]={0x00cf,0x00bf,0x00c1};//Ta on right one
unsigned long col_val1tta[]={0x4900,0x7f00,0x4000};
unsigned long row_val2tta[]={0x00cf0000,0x00bf0000,0x00c10000};//Ta on left one
unsigned long col_val2tta[]={0x49000000,0x7f000000,0x40000000};


unsigned long row_val1ttee[]={0x00c1,0x00bf,0x00fd,0x00F9};//TE on right one
unsigned long col_val1ttee[]={0x4900,0x7f00,0x8000,0x8000};
unsigned long row_val2ttee[]={0x00c10000,0x00bf0000,0x00fd0000,0x00F90000};//TE on left one
unsigned long col_val2ttee[]={0x49000000,0x7f000000,0x80000000,0x80000000};


unsigned long row_val1tt[]={0x00BF,0x00CF,0x00EF,0x00F1};//T on right one
unsigned long col_val1tt[]={0xFF00,0x8900,0x3000,0x2000};
unsigned long row_val2tt[]={0x00BF0000,0x00CF0000,0x00EF0000,0x00F10000};//T on left one
unsigned long col_val2tt[]={0xFF000000,0x89000000,0x30000000,0x20000000};


unsigned long row_val1tto[]={0x00BF,0x00C7,0x00F1};//To on right one
unsigned long col_val1tto[]={0x7F00,0x4900,0x0100};
unsigned long row_val2tto[]={0x00BF0000,0x00C70000,0x00F10000};//To on left one
unsigned long col_val2tto[]={0x7F000000,0x49000000,0x01000000};

//unsigned long row_val1ye[]={0x0080,0x00B7,0x00CF};//Ye on right one
//unsigned long col_val1ye[]={0x0400,0x7800,0x4000};
//unsigned long row_val2ye[]={0x00800000,0x00B70000,0x00CF0000};//Ye on left one
//unsigned long col_val2ye[]={0x04000000,0x78000000,0x40000000};
unsigned long row_val1ye[]={0x0080,0x006f,0x009F};//Ye on right one
unsigned long col_val1ye[]={0x0200,0x1c00,0x2000};
unsigned long row_val2ye[]={0x00800000,0x006f0000,0x009F0000};//Ye on right one
unsigned long col_val2ye[]={0x02000000,0x1c000000,0x20000000};


unsigned long row_val1yu[]={0x0080,0x00B5,0x00CF};//Yu on right one
unsigned long col_val1yu[]={0x0400,0x7800,0x4000};
unsigned long row_val2yu[]={0x00800000,0x00B50000,0x00CF0000};//Yu on left one
unsigned long col_val2yu[]={0x04000000,0x78000000,0x40000000};


unsigned long row_val1yi[]={0x0080,0x00B7,0x00CF,0x00FE};//Ya on right one
unsigned long col_val1yi[]={0x0400,0x7800,0x4000,0x0300};
unsigned long row_val2yi[]={0x00800000,0x00B70000,0x00CF0000,0x00FE0000};//Ya on left one
unsigned long col_val2yi[]={0x04000000,0x78000000,0x40000000,0x03000000};

unsigned long row_val1ya[]={0x0000,0x0057,0x00FB,0x00BF};//Ye on right one
unsigned long col_val1ya[]={0x0200,0x7C00,0x7000,0x4000};
unsigned long row_val2ya[]={0x00000000,0x00570000,0x00FB0000,0x00BF0000};//Ye on left one
unsigned long col_val2ya[]={0x02000000,0x7C000000,0x70000000,0x40000000};


unsigned long row_val1yee[]={0x0000,0x006B,0x0097};//Y on right one
unsigned long col_val1yee[]={0x0400,0x7800,0x4000};
unsigned long row_val2yee[]={0x00000000,0x006B0000,0x00970000};//Y on left one
unsigned long col_val2yee[]={0x04000000,0x78000000,0x40000000};


unsigned long row_val1yo[]={0x0080,0x00B7,0x00CF,0x00DF};//Yo on right one
unsigned long col_val1yo[]={0x0400,0x7800,0x4000,0x8000};
unsigned long row_val2yo[]={0x00800000,0x00B70000,0x00CF0000,0x00DF0000};//Yo on left one
unsigned long col_val2yo[]={0x04000000,0x78000000,0x40000000,0x80000000};


unsigned long row_val1de[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC};//De on right one
unsigned long col_val1de[]={0x1400,0x0800,0x0400,0x3E00,0X2200};
unsigned long row_val2de[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000};//De on left one
unsigned long col_val2de[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000};


unsigned long row_val1du[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FD};//Du on right one
unsigned long col_val1du[]={0x1400,0x0800,0x0400,0x3E00,0X2200,0XC000};
unsigned long row_val2du[]={0x008F0000,0x00AF0000,0x00F70000,0x000000FB,0X000000FC,0X00FD0000};//Du on left one
unsigned long col_val2du[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000,0XC0000000};

unsigned long row_val1di[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FE};//DI on right one
unsigned long col_val1di[]={0x1400,0x0800,0x0400,0x3E00,0X2200,0XC000};
unsigned long row_val2di[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X00FE0000};//DI on left one
unsigned long col_val2di[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000,0XC0000000};


unsigned long row_val1da[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FD};//Da on right one
unsigned long col_val1da[]={0x1400,0x0800,0x0400,0x3E00,0X2000,0X0200};
unsigned long row_val2da[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X00FD0000};//Da on left one
unsigned long col_val2da[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X20000000,0X02000000};



unsigned long row_val1dee[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FD,0X00FE};//De on right one
unsigned long col_val1dee[]={0x1400,0x0800,0x0400,0x3E00,0X2200,0XC000,0XC000};
unsigned long row_val2dee[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X00FD0000,0X00FE0000};//De on left one
unsigned long col_val2dee[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000,0XC0000000,0XC0000000};


unsigned long row_val1d[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X005F};//D on right one
unsigned long col_val1d[]={0x1400,0x0800,0x0400,0x3E00,0X2200,0X6000};
unsigned long row_val2d[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X005F0000};//D on left one
unsigned long col_val2d[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000,0X60000000};

unsigned long row_val1do[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FD};//Do on right one
unsigned long col_val1do[]={0x1400,0x0800,0x0400,0x3E00,0X0200,0X2000};
unsigned long row_val2do[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X00FD0000};//Do on left one
unsigned long col_val2do[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X02000000,0X20000000};


unsigned long row_val1je[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X007F};//Je on right one
unsigned long col_val1je[]={0x1400,0x0800,0x0400,0x3E00,0X2200,0X3E00};
unsigned long row_val2je[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X007F0000};//Je on left one
unsigned long col_val2je[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000,0X3E000000};


unsigned long row_val1ju[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FD,0X007F};//Ju on right one
unsigned long col_val1ju[]={0x1400,0x0800,0x0400,0x3E00,0X2200,0XC000,0X3E00};
unsigned long row_val2ju[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X00FD0000,0X007F0000};//Ju on left one
unsigned long col_val2ju[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000,0XC0000000,0X3E000000};

unsigned long row_val1ji[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FE,0X007F};//JI on right one
unsigned long col_val1ji[]={0x1400,0x0800,0x0400,0x3E00,0X2200,0XC000,0X3E00};
unsigned long row_val2ji[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X00FE0000,0X007F0000};//JI on left one
unsigned long col_val2ji[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000,0XC0000000,0X3E000000};

unsigned long row_val1ja[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FD,0X007F};//Ja on right one
unsigned long col_val1ja[]={0x1400,0x0800,0x0400,0x3E00,0X2000,0X0200,0X3E00};
unsigned long row_val2ja[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X00FD0000,0X007F0000};//Ja on left one
unsigned long col_val2ja[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X20000000,0X02000000,0X3E000000};


unsigned long row_val1jee[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FD,0X00FE,0X007F};//Je on right one
unsigned long col_val1jee[]={0x1400,0x0800,0x0400,0x3E00,0X2200,0XC000,0XC000,0X3E00};
unsigned long row_val2jee[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X00FD0000,0X00FE0000,0X007F0000};//Je on left one
unsigned long col_val2jee[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000,0XC0000000,0XC0000000,0X3E000000};


unsigned long row_val1j[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X005F,0X007F};//J on right one
unsigned long col_val1j[]={0x1400,0x0800,0x0400,0x3E00,0X2200,0X6000,0X3E00};
unsigned long row_val2j[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X005F0000,0X007F0000};//J on left one
unsigned long col_val2j[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X22000000,0X60000000,0X3E000000};

unsigned long row_val1jo[]={0x008F,0x00AF,0x00F7,0x00FB,0X00FC,0X00FD,0X007F};//Jo on right one
unsigned long col_val1jo[]={0x1400,0x0800,0x0400,0x3E00,0X0200,0X2000,0X3E00};
unsigned long row_val2jo[]={0x008F0000,0x00AF0000,0x00F70000,0x00FB0000,0X00FC0000,0X00FD0000,0X007F0000};//Jo on left one
unsigned long col_val2jo[]={0x14000000,0x08000000,0x04000000,0x3E000000,0X02000000,0X20000000,0X3E000000};
//unsigned long row_val2na[]={0x001f0000,0x00ef0000,0x00c00000,0x007f0000};//na on left
//unsigned long col_val2na[]={0x04000000,0x0c000000,0x10000000,0x18000000};
unsigned long row_val2na[]={0x00e00000,0x00ef0000,0x009f0000,0x007f0000};
unsigned long col_val2na[]={0x08000000,0x04000000,0x02000000,0x0c000000};

//

unsigned long row_val1ne[]={0x001f,0x00df,0x00c0};
unsigned long col_val1ne[]={0x0400,0x0800,0x1000};
unsigned long row_val2ne[]={0x001f0000,0x00df0000,0x00c00000};
unsigned long col_val2ne[]={0x04000000,0x08000000,0x10000000};

unsigned long row_val1nu[]={0x001f,0x00df,0x00c0,0x0008};
unsigned long col_val1nu[]={0x0400,0x0800,0x1000,0x6000};

unsigned long row_val1ni[]={0x001f,0x00df,0x00c0,0x00fe};
unsigned long col_val1ni[]={0x0400,0x0800,0x1000,0x6000};

//unsigned long row_val1na[]={0x001f,0x00ef,0x00c0,0x007f};
//unsigned long col_val1na[]={0x0400,0x0c00,0x1000,0x1800};
unsigned long row_val1na[]={0x00e0,0x00ef,0x009f,0x007f};
unsigned long col_val1na[]={0x0800,0x0400,0x0200,0x0c00};

unsigned long row_val1nee[]={0x001f,0x00df,0x00c0,0x00fe,0x00fd};
unsigned long col_val1nee[]={0x0400,0x0800,0x1000,0x6000,0x6000};

unsigned long row_val1nii[]={0x0300,0x001f,0x00df,0x00c0};
unsigned long col_val1nii[]={0x007f,0x0400,0x0800,0x1000};

unsigned long row_val1no[]={0x001f,0x00ef,0x00c0,0x007f,0x0075,0x00bf};
unsigned long col_val1no[]={0x0400,0x0c00,0x1000,0x1800,0x2000,0x3000};


// nge


unsigned long row_val1gne[]={0x007f,0x001f,0x00df,0x00c0};
unsigned long col_val1gne[]={0x0e00,0x0400,0x0800,0x1000};

unsigned long row_val1gnu[]={0x007f,0x001f,0x00df,0x00c0,0x0008};
unsigned long col_val1gnu[]={0x0e00,0x0400,0x0800,0x1000,0x6000};

unsigned long row_val1gni[]={0x007f,0x001f,0x00df,0x00c0,0x00fe};
unsigned long col_val1gni[]={0x0e00,0x0400,0x0800,0x1000,0x6000};

unsigned long row_val1gna[]={0x007f,0x00bf,0x00df,0x00ef,0x00f7,0x00f8};
unsigned long col_val1gna[]={0x3c00,0x0800,0x3c00,0x0400,0x3c00,0x2000};

unsigned long row_val1gnee[]={0x007f,0x001f,0x00df,0x00c0,0x00fe,0x00fd};
unsigned long col_val1gnee[]={0x0e00,0x0400,0x0800,0x1000,0x6000,0x6000};

unsigned long row_val1gnii[]={0x007f,0x00bf,0x00df,0x00ef,0x00f7,0x00f8};
unsigned long col_val1gnii[]={0x1e00,0x0400,0x0400,0x1000,0x7000,0x4000};

unsigned long row_val1gno[]={0x007f,0x00bf,0x00df,0x00ef,0x00f7,0x00f8,0x00ef};
unsigned long col_val1gno[]={0x3c00,0x0800,0x3c00,0x0400,0x3c00,0x2000,0x6000};

// a

unsigned long row_val1a[]={0x001f,0x00df,0x00c0,0x00f7,0x00f0};
unsigned long col_val1a[]={0x0200,0x0400,0x0800,0x1000,0x2000};
unsigned long row_val2a[]={0x001f0000,0x00df0000,0x00c00000,0x00f70000,0x00f00000};
unsigned long col_val2a[]={0x02000000,0x04000000,0x08000000,0x10000000,0x20000000};

unsigned long row_val1u[]={0x001f,0x00df,0x00c0,0x00f7,0x00f0,0x00fb};
unsigned long col_val1u[]={0x0200,0x0400,0x0800,0x1000,0x2000,0xc000};

unsigned long row_val1i[]={0x001f,0x00df,0x00c0,0x00f7,0x00f0,0x00fe};
unsigned long col_val1i[]={0x0200,0x0400,0x0800,0x1000,0x2000,0xc000};

unsigned long row_val1aa[]={0x001f,0x00df,0x00c3,0x00f7,0x00f0};
unsigned long col_val1aa[]={0x0200,0x0400,0x0800,0x1000,0x2000};

unsigned long row_val1e[]={0x001f,0x00df,0x00c0,0x00f7,0x00f0,0x00fe,0x00fb,0x00fd};
unsigned long col_val1e[]={0x0200,0x0400,0x0800,0x1000,0x2000,0xc000,0x2000,0x8000};

unsigned long row_val1ee[]={0x003f,0x00bf,0x00bf,0x00c0,0x00f7,0x00f0};
unsigned long col_valee[]={0x0200,0x0400,0x0400,0x0800,0x1000,0x2000};


unsigned long row_val1o[]={0x001f,0x00df,0x00c0,0x00f7,0x00f3};
unsigned long col_val1o[]={0x0200,0x0400,0x0800,0x1000,0x2000};


//ke

unsigned long row_val1ke[]={0x001f,0x00df,0x00e0};
unsigned long col_val1ke[]={0x0200,0x3c00,0x2800};

unsigned long row_val1ku[]={0x001f,0x00df,0x00e0,0x00f7};
unsigned long col_val1ku[]={0x0200,0x3c00,0x2800,0xc000};

unsigned long row_val1ki[]={0x001f,0x00df,0x00e0,0x00fe};
unsigned long col_val1ki[]={0x0200,0x3c00,0x2800,0xc000};

unsigned long row_val1ka[]={0x001f,0x00df,0x00e0,0x00e3};
unsigned long col_val1ka[]={0x0200,0x3c00,0x2000,0x0400};

unsigned long row_val1kee[]={0x001f,0x00df,0x00e0,0x00fe,0x00f7,0x00f9};
unsigned long col_val1kee[]={0x0200,0x3c00,0x2800,0xc000,0xc000,0x8000};

unsigned long row_val1kii[]={0x001f,0x00df,0x00e0,0x00ef};
unsigned long col_val1kii[]={0x0200,0x3c00,0x2800,0x0400};

unsigned long row_val1ko[]={0x001f,0x00df,0x00c0,0x00e3};
unsigned long col_val1ko[]={0x0200,0x3c00,0x0800,0x2000};

// he


//we

unsigned long row_val1we[]={0x00c7,0x00bb};
unsigned long col_val1we[]={0x2a00,3e00};

unsigned long row_val1wu[]={0x00c7,0x00bb,0x00ef};
unsigned long col_val1wu[]={0x2a00,3e00,0xc000};

unsigned long row_val1wi[]={0x009f,0x006f,0x00f0,0x00fe};
unsigned long col_val1wi[]={0x2a00,3e00,0x0800,0x3000};

unsigned long row_val1wa[]={0x009f,0x006f,0x00f0};
unsigned long col_val1wa[]={0x2a00,3e00,0x0800};

unsigned long row_val1wee[]={0x009f,0x006f,0x00f0,0x00fe,0x00fd};
unsigned long col_val1wee[]={0x2a00,3e00,0x0800,0x3000,0x3000};

unsigned long row_val1wo[]={0x009f,0x006f,0x00f0,0x00fe};
unsigned long col_val1wo[]={0x2a00,3e00,0x0800,0x0600};


//Scroll text animation
unsigned long row_val1Scrlsi[]={0x00e0,0x00df,0x003f,0x00fe};//si on right one
unsigned long col_val1Scrlsi[]={0x2200,0x1c00,0x0800,0xc000};

//Optimization
unsigned long te1[][2]={{0x0080,0x00ef},
	                    {0x1000,0x7c00}
                      };
unsigned long be1[][2]={{0x0080,0x007f},
	                    {0x8200,0x7c00}
                      };

//unsigned long both[]={be1,te1};											
											

void timer_init (void);
void timer0_delay_time_7ms (void);
void timer0_delay_time_1ms (void);
void timer0_delay_time_05ms (void);
void yeright(void);
void yeleft(void);											

void jeright(void);
void jeleft(void);												
			
void beright(void);
void beleft(void);
void naright(void);
void naleft(void);
void buright(void);
void buleft(void);												
int main(void){
    unsigned int i,j,c;
		PINSEL0=0;//select the pins 
    PINSEL1=0;
    IO0DIR=0xffffffff;
    
    IO1DIR = 0xFFFF0000;    //PORT1 pin number 16 to 31 are Output Pin
    
		pll_init();//intialise clock
		VPBDIV=0x00;//PCLK=CCLK/4
		timer_init();//intialise timer0
	
    while(1){
						//IO0SET=0x007f;//row
						//IO0SET=0x2800;//col
			
							for(j=0;j<=100;j++){
													
										for(c=0;c<3;c++){  //display 'ye' on right one
													 IO0SET=col_val1ye[c];
													 IO0SET=row_val1ye[c];
														timer0_delay_time_1ms();
													IO0CLR=col_val1ye[c];  
													IO0CLR=row_val1ye[c];
														timer0_delay_time_1ms();   
														}
											}
								for(j=0;j<=100;j++){
													
										for(c=0;c<3;c++){  //display 'ye' on left one
													 IO1SET=col_val2ye[c];
													 IO1SET=row_val2ye[c];
														timer0_delay_time_05ms();
													IO1CLR=col_val2ye[c];  
													IO1CLR=row_val2ye[c];
														timer0_delay_time_05ms();   
														}
										if(j>=7){
											//for(j=0;j<=100;j++){
													
										for(c=0;c<6;c++){  //display 'je' on right one
													 IO0SET=col_val1je[c];
													 IO0SET=row_val1je[c];
														timer0_delay_time_05ms();
													IO0CLR=col_val1je[c];  
													IO0CLR=row_val1je[c];
														timer0_delay_time_05ms();   
														}
											//}
										 }
									}
										
							for(j=0;j<=100;j++){
													
										for(c=0;c<6;c++){  //display 'je' on left one
													 IO1SET=col_val2je[c];
													 IO1SET=row_val2je[c];
														timer0_delay_time_05ms();
													IO1CLR=col_val2je[c];  
													IO1CLR=row_val2je[c];
														timer0_delay_time_05ms();   
														}
										   if(j>=7){		
										for(c=0;c<2;c++){  //display 'be' on right one
													 IO0SET=col_val1be[c];
													 IO0SET=row_val1be[c];
														timer0_delay_time_05ms();
													IO0CLR=col_val1be[c];  
													IO0CLR=row_val1be[c];
														timer0_delay_time_05ms();   
														}
											//}
										 }  
														
									}
              for(j=0;j<=100;j++){
							    	for(c=0;c<2;c++){  //display 'be' on left one
													 IO1SET=col_val2be[c];
													 IO1SET=row_val2be[c];
														timer0_delay_time_05ms();
													IO1CLR=col_val2be[c];  
													IO1CLR=row_val2be[c];
														timer0_delay_time_05ms();   
														}
									if(j>=6){
									   for(c=0;c<3;c++){  //display 'ne' on right one
										   IO0SET=col_val1ne[c];
											 IO0SET=row_val1ne[c];
											 timer0_delay_time_05ms();
											 IO0CLR=col_val1ne[c];
											 IO0CLR=row_val1ne[c];
											 timer0_delay_time_05ms();
										 }
									}
							}								
						for(j=0;j<=100;j++){
						   for(c=0;c<3;c++){  //display 'ne' on left one
										   IO1SET=col_val2ne[c];
											 IO1SET=row_val2ne[c];
											 timer0_delay_time_05ms();
											 IO1CLR=col_val2ne[c];
											 IO1CLR=row_val2ne[c];
											 timer0_delay_time_05ms();
										 }
									}
						
							
							for(j=0;j<=100;j++){
													
										for(c=0;c<3;c++){  //display 'bu' on right one
													 IO0SET=col_val1bu[c];
													 IO0SET=row_val1bu[c];
														timer0_delay_time_1ms();
													IO0CLR=col_val1bu[c];  
													IO0CLR=row_val1bu[c];
														timer0_delay_time_1ms();   
														}
											}			
						for(j=0;j<=100;j++){
													
										for(c=0;c<3;c++){  //display 'bu' on right one
												 IO1SET=col_val2bu[c];
												 IO1SET=row_val2bu[c];
														timer0_delay_time_1ms();
													IO1CLR=col_val2bu[c];  
													IO1CLR=row_val2bu[c];
														timer0_delay_time_1ms();   
														}
										  if(j>=6){
									   for(c=0;c<4;c++){  //display 'na' on right one
										   IO0SET=col_val1na[c];
											 IO0SET=row_val1na[c];
											 timer0_delay_time_05ms();
											 IO0CLR=col_val1na[c];
											 IO0CLR=row_val1na[c];
											 timer0_delay_time_05ms();
										 }
									}
								}
            for(j=0;j<=100;j++){
						   for(c=0;c<4;c++){  //display 'na' on left one
										   IO1SET=col_val2na[c];
											 IO1SET=row_val2na[c];
											 timer0_delay_time_05ms();
											 IO1CLR=col_val2na[c];
											 IO1CLR=row_val2na[c];
											 timer0_delay_time_05ms();
										 }
									}
									
//---------------------------------scroll right--------------------------------
      for(j=0;j<=100;j++){
						   for(c=0;c<4;c++){  //display 'na' on left one
										   IO1SET=col_val2na[c];
											 IO1SET=row_val2na[c];
											 timer0_delay_time_1ms();
											 IO1CLR=col_val2na[c];
											 IO1CLR=row_val2na[c];
											 timer0_delay_time_1ms();
										 }
									}
					for(j=0;j<=100;j++){
											for(c=0;c<4;c++){  //display 'na' on right one
										   IO0SET=col_val1na[c];
											 IO0SET=row_val1na[c];
											 timer0_delay_time_05ms();
											 IO0CLR=col_val1na[c];
											 IO0CLR=row_val1na[c];
											 timer0_delay_time_05ms();
										 }		
								  if(j>=6){
									   for(c=0;c<3;c++){  //display 'bu' on left one
													 IO1SET=col_val2bu[c];
													 IO1SET=row_val2bu[c];
														timer0_delay_time_05ms();
													IO1CLR=col_val2bu[c];  
													IO1CLR=row_val2bu[c];
														timer0_delay_time_05ms();   
													}
									}
								}							
					for(j=0;j<=100;j++){
													
										for(c=0;c<3;c++){  //display 'bu' on right one
													 IO0SET=col_val1bu[c];
													 IO0SET=row_val1bu[c];
														timer0_delay_time_1ms();
													IO0CLR=col_val1bu[c];  
													IO0CLR=row_val1bu[c];
														timer0_delay_time_1ms();   
													}		
			                  }
					  for(j=0;j<=100;j++){
						   for(c=0;c<3;c++){  //display 'ne' on left one
										   IO1SET=col_val2ne[c];
											 IO1SET=row_val2ne[c];
											 timer0_delay_time_05ms();
											 IO1CLR=col_val2ne[c];
											 IO1CLR=row_val2ne[c];
											 timer0_delay_time_05ms();
										 }
									}
						for(j=0;j<=100;j++){
							    	
										for(c=0;c<3;c++){  //display 'ne' on right one
										   IO0SET=col_val1ne[c];
											 IO0SET=row_val1ne[c];
											 timer0_delay_time_05ms();
											 IO0CLR=col_val1ne[c];
											 IO0CLR=row_val1ne[c];
											 timer0_delay_time_05ms();
										 }
									if(j>=6){
									  for(c=0;c<2;c++){  //display 'be' on left one
													 IO1SET=col_val2be[c];
													 IO1SET=row_val2be[c];
														timer0_delay_time_05ms();
													IO1CLR=col_val2be[c];  
													IO1CLR=row_val2be[c];
														timer0_delay_time_05ms();   
														} 
									}
							}
						
					for(j=0;j<=100;j++){
													
										    for(c=0;c<2;c++){  //display 'be' on right one
													 IO0SET=col_val1be[c];
													 IO0SET=row_val1be[c];
														timer0_delay_time_05ms();
													IO0CLR=col_val1be[c];  
													IO0CLR=row_val1be[c];
														timer0_delay_time_05ms();   
														}
											
										  if(j>=6){		
										   for(c=0;c<6;c++){  //display 'je' on left one
													 IO1SET=col_val2je[c];
													 IO1SET=row_val2je[c];
														timer0_delay_time_05ms();
													IO1CLR=col_val2je[c];  
													IO1CLR=row_val2je[c];
														timer0_delay_time_05ms();   
														}
										 }  
														
									}
			      for(j=0;j<=100;j++){
													
										for(c=0;c<3;c++){  //display 'ye' on left one
													 IO1SET=col_val2ye[c];
													 IO1SET=row_val2ye[c];
														timer0_delay_time_05ms();
													IO1CLR=col_val2ye[c];  
													IO1CLR=row_val2ye[c];
														timer0_delay_time_05ms();   
														}
									
										if(j>=7){
										    for(c=0;c<6;c++){  //display 'je' on right one
													 IO0SET=col_val1je[c];
													 IO0SET=row_val1je[c];
														timer0_delay_time_05ms();
													IO0CLR=col_val1je[c];  
													IO0CLR=row_val1je[c];
														timer0_delay_time_05ms();   
														}
										 }
									}
			        for(j=0;j<=100;j++){
													
										for(c=0;c<3;c++){  //display 'ye' on left one
													 IO0SET=col_val1ye[c];
													 IO0SET=row_val1ye[c];
														timer0_delay_time_05ms();
													IO0CLR=col_val1ye[c];  
													IO0CLR=row_val1ye[c];
														timer0_delay_time_05ms();   
														}
												}
     
       
}
}

		
//use timre0 for delaying purpose
void timer_init(void){//timer0 intialisation
  T0CTCR=0X00;//start in timer mode
  
  T0PR=((3750)-1);//set prescallar value,
                  //  count=(prescalar frequency(15MHz) x time delay in sec)-1,
                   //here We are using 0.25msec delay, and for us PCLK= CCLK/4
  T0TCR=(1<<1);//reset PR counter
}

  void timer0_delay_time_7ms(void){
  T0TC=0;//set 0 to TC counter/TC starts from 0 to count upto 
  T0TCR=(1<<1);//reset PR counter
  T0TCR=(1<<0);//enable PR counter

    while(T0TC < 28);//wait until counter reaches our defined value
                   //now the delay can be 0.25msec*28=7msec
}  
void timer0_delay_time_1ms(void){
  T0TC=0;//set 0 to TC counter/TC starts from 0 to count upto 
  T0TCR=(1<<1);//reset PR counter
  T0TCR=(1<<0);//enable PR counter

    while(T0TC < 4);//wait until counter reaches our defined value
                   //now the delay can be x.25msec=1msec
}  
void timer0_delay_time_05ms(void){
  T0TC=0;//set 0 to TC counter/TC starts from 0 to count upto 
  T0TCR=(1<<1);//reset PR counter
  T0TCR=(1<<0);//enable PR counter

    while(T0TC < 2);//wait until counter reaches our defined value
                   //now the delay can be 100x10msec=1sec
}  