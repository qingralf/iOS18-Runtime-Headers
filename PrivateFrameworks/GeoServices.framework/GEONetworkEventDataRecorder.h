/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkEventDataRecorder : NSObject

+ (void)_recordNetworkEventForDataRequestKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 networkService:(int)arg2 usedBackgroundURL:(id)arg3 requestAppIdentifier:(id)arg4 appMajorVersion:(id)arg5 appMinorVersion:(id)arg6 error:(id)arg7 clientMetrics:(id)arg8 states:(id)arg9;
+ (void)recordNetworkEventDataForDataRequestKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 networkService:(int)arg2 usedBackgroundURL:(id)arg3 requestAppIdentifier:(id)arg4 appMajorVersion:(id)arg5 appMinorVersion:(id)arg6 error:(id)arg7 clientMetrics:(id)arg8 additionalStates:(id)arg9;
+ (void)recordNetworkEventDataForDataRequestKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 usedBackgroundURL:(id)arg2 requestAppIdentifier:(id)arg3 appMajorVersion:(id)arg4 appMinorVersion:(id)arg5 error:(id)arg6 clientMetrics:(id)arg7 additionalStates:(id)arg8;
+ (void)recordNetworkEventDataForTileKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 4; union { struct { unsigned int x_1_4_1 : 10; unsigned int x_1_4_2 : 10; unsigned int x_1_4_3 : 12; } x_5_3_1; unsigned int x_5_3_2; } x_2_2_5; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })arg1 requestAppIdentifier:(id)arg2 appMajorVersion:(id)arg3 appMinorVersion:(id)arg4 error:(id)arg5 clientMetrics:(id)arg6 additionalStates:(id)arg7;
+ (id)sharedRecorder;

@end