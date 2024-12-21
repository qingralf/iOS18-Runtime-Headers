/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVCaptionRendererScene : NSObject <NSCopying> {
    AVCaptionRendererSceneInternal * _internal;
}

@property (nonatomic, readonly) bool hasActiveCaptions;
@property (nonatomic, readonly) bool needsPeriodicRefresh;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)hasActiveCaptions;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 hasActiveCaptions:(bool)arg2 needsPeriodicRefresh:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)needsPeriodicRefresh;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end