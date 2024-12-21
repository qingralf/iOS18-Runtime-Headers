/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
 */

@interface NIAcwgM2Msg : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _minRanMultiplier;
    unsigned char  _selectedChannelBitmask;
    unsigned char  _selectedFinalData2Bitmask;
    unsigned char  _selectedPulseShapeCombo;
    unsigned short  _selectedUwbConfigId;
    unsigned char  _supportedHoppingConfigBitmask;
    unsigned char  _supportedSlotBitmask;
    unsigned int  _supportedSyncCodeIndexBitmask;
}

@property (nonatomic, readonly) unsigned char minRanMultiplier;
@property (nonatomic, readonly) unsigned char selectedChannelBitmask;
@property (nonatomic, readonly) unsigned char selectedFinalData2Bitmask;
@property (nonatomic, readonly) unsigned char selectedPulseShapeCombo;
@property (nonatomic, readonly) unsigned short selectedUwbConfigId;
@property (nonatomic, readonly) unsigned char supportedHoppingConfigBitmask;
@property (nonatomic, readonly) unsigned char supportedSlotBitmask;
@property (nonatomic, readonly) unsigned int supportedSyncCodeIndexBitmask;

+ (id)fromStruct:(struct AcwgM2MsgStruct { unsigned short x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; })arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelectedUwbConfigId:(unsigned short)arg1 selectedPulseShapeCombo:(unsigned char)arg2 selectedChannelBitmask:(unsigned char)arg3 supportedSyncCodeIndexBitmask:(unsigned int)arg4 minRanMultiplier:(unsigned char)arg5 supportedSlotBitmask:(unsigned char)arg6 supportedHoppingConfigBitmask:(unsigned char)arg7;
- (id)initWithSelectedUwbConfigId:(unsigned short)arg1 selectedPulseShapeCombo:(unsigned char)arg2 selectedChannelBitmask:(unsigned char)arg3 supportedSyncCodeIndexBitmask:(unsigned int)arg4 minRanMultiplier:(unsigned char)arg5 supportedSlotBitmask:(unsigned char)arg6 supportedHoppingConfigBitmask:(unsigned char)arg7 selectedFinalData2Bitmask:(unsigned char)arg8;
- (unsigned char)minRanMultiplier;
- (unsigned char)selectedChannelBitmask;
- (unsigned char)selectedFinalData2Bitmask;
- (unsigned char)selectedPulseShapeCombo;
- (unsigned short)selectedUwbConfigId;
- (unsigned char)supportedHoppingConfigBitmask;
- (unsigned char)supportedSlotBitmask;
- (unsigned int)supportedSyncCodeIndexBitmask;
- (struct AcwgM2MsgStruct { unsigned short x1; unsigned char x2; unsigned char x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; })toStruct;

@end