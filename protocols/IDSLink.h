/* Generated by RuntimeBrowser.
 */

@protocol IDSLink <NSObject>

@required

- (<IDSLinkDelegate> *)alternateDelegate;
- (NSString *)cbuuid;
- (NSDictionary *)copyLinkStatsDict;
- (<IDSLinkDelegate> *)delegate;
- (NSString *)deviceUniqueID;
- (NSString *)generateLinkReport:(double)arg1 isCurrentLink:(bool)arg2;
- (unsigned long long)headerOverhead;
- (NSString *)linkTypeString;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; unsigned char x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; bool x16; bool x17; unsigned int x18; struct sockaddr_storage { unsigned char x_19_1_1; unsigned char x_19_1_2; BOOL x_19_1_3[6]; long long x_19_1_4; BOOL x_19_1_5[112]; } x19; struct sockaddr_storage { unsigned char x_20_1_1; unsigned char x_20_1_2; BOOL x_20_1_3[6]; long long x_20_1_4; BOOL x_20_1_5[112]; } x20; struct sockaddr_storage { unsigned char x_21_1_1; unsigned char x_21_1_2; BOOL x_21_1_3[6]; long long x_21_1_4; BOOL x_21_1_5[112]; } x21; unsigned short x22; unsigned char x23; int x24; struct { char *x_25_1_1; unsigned short x_25_1_2; int x_25_1_3; unsigned short x_25_1_4[12]; unsigned long long x_25_1_5; unsigned char x_25_1_6; unsigned short x_25_1_7; unsigned char x_25_1_8; bool x_25_1_9; bool x_25_1_10; unsigned short x_25_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_25_1_12; bool x_25_1_13; bool x_25_1_14; int x_25_1_15; unsigned short x_25_1_16[4]; unsigned char x_25_1_17; bool x_25_1_18; bool x_25_1_19; bool x_25_1_20; unsigned int x_25_1_21; } x25[8]; }*)arg1 toDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (unsigned long long)sendPacketBufferArray:(struct { /* ? */ }**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)setAlternateDelegate:(id <IDSLinkDelegate>)arg1;
- (void)setCbuuid:(NSString *)arg1;
- (void)setDelegate:(id <IDSLinkDelegate>)arg1;
- (void)setDeviceUniqueID:(NSString *)arg1;
- (unsigned long long)state;

@optional

- (void)start;

@end