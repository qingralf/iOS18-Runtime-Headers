/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRContentLauncherClusterLaunchContentParams : NSObject <NSCopying> {
    NSNumber * _autoPlay;
    NSString * _data;
    MTRContentLauncherClusterPlaybackPreferencesStruct * _playbackPreferences;
    MTRContentLauncherClusterContentSearchStruct * _search;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
    NSNumber * _useCurrentContext;
}

@property (nonatomic, copy) NSNumber *autoPlay;
@property (nonatomic, copy) NSString *data;
@property (nonatomic, copy) MTRContentLauncherClusterPlaybackPreferencesStruct *playbackPreferences;
@property (nonatomic, copy) MTRContentLauncherClusterContentSearchStruct *search;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;
@property (nonatomic, copy) NSNumber *useCurrentContext;

- (void).cxx_destruct;
- (id)_encodeAsDataValue:(id*)arg1;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_encodeToTLVReader:(struct PacketBufferTLVReader { unsigned int x1; void *x2; struct Tag { unsigned long long x_3_1_1; } x3; unsigned long long x4; struct TLVBackingStore {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; bool x12; struct PacketBufferHandle { struct PacketBuffer {} *x_13_1_1; } x13; }*)arg1;
- (id)autoPlay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)init;
- (id)playbackPreferences;
- (id)search;
- (id)serverSideProcessingTimeout;
- (void)setAutoPlay:(id)arg1;
- (void)setData:(id)arg1;
- (void)setPlaybackPreferences:(id)arg1;
- (void)setSearch:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (void)setUseCurrentContext:(id)arg1;
- (id)timedInvokeTimeoutMs;
- (id)useCurrentContext;

@end