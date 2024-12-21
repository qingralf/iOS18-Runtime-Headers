/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ASEProcessing.framework/ASEProcessing
 */

@interface ASEProcessingT1 : ASEProcessingT0 {
    struct hwConfigurationUnitsV3_t { struct MSRHcuHeader_t { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct MSRHcuEntryHeader_t { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; } x3; struct MSRHcuEntryHeader_t { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1[32]; } x_5_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1[32]; } x_5_1_3; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_4_2_1[32]; } x_5_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_5_1_5; int x_5_1_6[2]; int x_5_1_7[3]; int x_5_1_8[4]; int x_5_1_9[5]; int x_5_1_10[6]; int x_5_1_11[7]; } x5; struct MSRHcuEntryHeader_t { unsigned int x_6_1_1; unsigned int x_6_1_2; } x6; struct { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1[32]; } x_7_1_1[5]; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_7_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_7_1_3[13]; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_7_1_4[6]; } x7; } * _aseControlUnitV3;
    struct { struct { unsigned int x_1_1_1; struct _ASEHcuCacheNodeCommon {} *x_1_1_2; struct _ASEHcuCacheNodeCommon {} *x_1_1_3; struct { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; } x_1_1_4; } x1; struct { unsigned int x_2_1_1; struct _ASEHcuCacheNodeCommon {} *x_2_1_2; struct _ASEHcuCacheNodeCommon {} *x_2_1_3; struct { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; } x_2_1_4; } x2; struct { unsigned int x_3_1_1; struct _ASEHcuCacheNodeCommon {} *x_3_1_2; struct _ASEHcuCacheNodeCommon {} *x_3_1_3; struct { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; } x_3_1_4; } x3; } * _aseControlUnitV3Cache;
    unsigned int  _enabledHcus;
}

- (void)DumpArray:(const char *)arg1 array:(unsigned int*)arg2 count:(unsigned int)arg3;
- (void)DumpOutputHcus:(id)arg1;
- (void)DumpPiecewiseLinearCurveV3:(const char *)arg1 curve:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1[32]; }*)arg2;
- (void)configControlHeader_V3:(struct hwConfigurationUnitsV3_t { struct MSRHcuHeader_t { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct MSRHcuEntryHeader_t { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; } x3; struct MSRHcuEntryHeader_t { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1[32]; } x_5_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1[32]; } x_5_1_3; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_4_2_1[32]; } x_5_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_5_1_5; int x_5_1_6[2]; int x_5_1_7[3]; int x_5_1_8[4]; int x_5_1_9[5]; int x_5_1_10[6]; int x_5_1_11[7]; } x5; struct MSRHcuEntryHeader_t { unsigned int x_6_1_1; unsigned int x_6_1_2; } x6; struct { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1[32]; } x_7_1_1[5]; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_7_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_7_1_3[13]; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_7_1_4[6]; } x7; }*)arg1;
- (void)dealloc;
- (id)initWithConfig:(const struct { int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 aseProcessing:(id)arg2 productType:(unsigned int)arg3;
- (id)populateOutputHcus:(struct hwConfigurationUnitsV3_t { struct MSRHcuHeader_t { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct MSRHcuEntryHeader_t { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; } x3; struct MSRHcuEntryHeader_t { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1[32]; } x_5_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1[32]; } x_5_1_3; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_4_2_1[32]; } x_5_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_5_1_5; int x_5_1_6[2]; int x_5_1_7[3]; int x_5_1_8[4]; int x_5_1_9[5]; int x_5_1_10[6]; int x_5_1_11[7]; } x5; struct MSRHcuEntryHeader_t { unsigned int x_6_1_1; unsigned int x_6_1_2; } x6; struct { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1[32]; } x_7_1_1[5]; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_7_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_7_1_3[13]; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_7_1_4[6]; } x7; }*)arg1;
- (long long)processFrameWithInput:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16[8]; unsigned int x17[8]; unsigned int x18[8]; unsigned int x19[8]; unsigned int x20[16]; unsigned int x21[16]; unsigned int x22[16]; }*)arg1 callback:(id /* block */)arg2;
- (long long)processFrameWithInput:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16[8]; unsigned int x17[8]; unsigned int x18[8]; unsigned int x19[8]; unsigned int x20[16]; unsigned int x21[16]; unsigned int x22[16]; }*)arg1 outputData:(id*)arg2;
- (void)processPixelWithInput:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16[8]; unsigned int x17[8]; unsigned int x18[8]; unsigned int x19[8]; unsigned int x20[16]; unsigned int x21[16]; unsigned int x22[16]; }*)arg1 controlUnitV3:(struct hwConfigurationUnitsV3_t { struct MSRHcuHeader_t { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct MSRHcuEntryHeader_t { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; } x3; struct MSRHcuEntryHeader_t { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1[32]; } x_5_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1[32]; } x_5_1_3; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_4_2_1[32]; } x_5_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_5_1_5; int x_5_1_6[2]; int x_5_1_7[3]; int x_5_1_8[4]; int x_5_1_9[5]; int x_5_1_10[6]; int x_5_1_11[7]; } x5; struct MSRHcuEntryHeader_t { unsigned int x_6_1_1; unsigned int x_6_1_2; } x6; struct { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1[32]; } x_7_1_1[5]; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_7_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_7_1_3[13]; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_7_1_4[6]; } x7; }*)arg2;
- (void)processPixelWithInput_V3:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16[8]; unsigned int x17[8]; unsigned int x18[8]; unsigned int x19[8]; unsigned int x20[16]; unsigned int x21[16]; unsigned int x22[16]; }*)arg1 Output:(struct hwConfigurationUnitsV3_t { struct MSRHcuHeader_t { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct MSRHcuEntryHeader_t { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; } x3; struct MSRHcuEntryHeader_t { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1[32]; } x_5_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1[32]; } x_5_1_3; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_4_2_1[32]; } x_5_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_5_1_5; int x_5_1_6[2]; int x_5_1_7[3]; int x_5_1_8[4]; int x_5_1_9[5]; int x_5_1_10[6]; int x_5_1_11[7]; } x5; struct MSRHcuEntryHeader_t { unsigned int x_6_1_1; unsigned int x_6_1_2; } x6; struct { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1[32]; } x_7_1_1[5]; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_7_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_7_1_3[13]; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_7_1_4[6]; } x7; }*)arg2;
- (void)processPixelWithMeasurement_V3:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16[8]; unsigned int x17[8]; unsigned int x18[8]; unsigned int x19[8]; unsigned int x20[16]; unsigned int x21[16]; unsigned int x22[16]; }*)arg1 Output:(struct hwConfigurationUnitsV3_t { struct MSRHcuHeader_t { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct MSRHcuEntryHeader_t { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; } x3; struct MSRHcuEntryHeader_t { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1[32]; } x_5_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1[32]; } x_5_1_3; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_4_2_1[32]; } x_5_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_5_1_5; int x_5_1_6[2]; int x_5_1_7[3]; int x_5_1_8[4]; int x_5_1_9[5]; int x_5_1_10[6]; int x_5_1_11[7]; } x5; struct MSRHcuEntryHeader_t { unsigned int x_6_1_1; unsigned int x_6_1_2; } x6; struct { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1[32]; } x_7_1_1[5]; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_7_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_7_1_3[13]; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_7_1_4[6]; } x7; }*)arg2;
- (void)processPixelWithPixelControl_V3:(struct hwConfigurationUnitsV3_t { struct MSRHcuHeader_t { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; struct MSRHcuEntryHeader_t { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; struct { unsigned int x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; unsigned int x_3_1_6; } x3; struct MSRHcuEntryHeader_t { unsigned int x_4_1_1; unsigned int x_4_1_2; } x4; struct { unsigned int x_5_1_1; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1[32]; } x_5_1_2; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1[32]; } x_5_1_3; struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_4_2_1[32]; } x_5_1_4; struct { unsigned int x_5_2_1; unsigned int x_5_2_2; unsigned int x_5_2_3; unsigned int x_5_2_4; unsigned int x_5_2_5; } x_5_1_5; int x_5_1_6[2]; int x_5_1_7[3]; int x_5_1_8[4]; int x_5_1_9[5]; int x_5_1_10[6]; int x_5_1_11[7]; } x5; struct MSRHcuEntryHeader_t { unsigned int x_6_1_1; unsigned int x_6_1_2; } x6; struct { struct { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; } x_1_2_1[32]; } x_7_1_1[5]; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_7_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_7_1_3[13]; struct { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_7_1_4[6]; } x7; }*)arg1;

@end