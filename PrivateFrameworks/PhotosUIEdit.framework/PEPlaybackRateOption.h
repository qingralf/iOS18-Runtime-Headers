/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit
 */

@interface PEPlaybackRateOption : NSObject {
    unsigned long long  _type;
    unsigned long long  _videoFrameRate;
}

@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) float playbackRate;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long videoFrameRate;

+ (id)_playbackRateOptionsForFrameRate:(unsigned long long)arg1;
+ (id)playbackRateOptionsForAsset:(id)arg1;
+ (id)playbackRateOptionsForEditSource:(id)arg1;

- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (float)playbackRate;
- (unsigned long long)type;
- (unsigned long long)videoFrameRate;

@end