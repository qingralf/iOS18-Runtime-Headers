/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ShazamKit.framework/ShazamKit
 */

@interface SHHaptic : NSObject <NSSecureCoding> {
    SHMediaItem * _mediaItem;
    NSArray * _spatialOffsets;
    NSArray * _tracks;
    NSError * _tracksError;
}

@property (nonatomic, readonly) SHMediaItem *mediaItem;
@property (nonatomic, readonly) NSArray *spatialOffsets;
@property (nonatomic, readonly) NSArray *tracks;
@property (nonatomic, readonly) NSError *tracksError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHapticTracks:(id)arg1 representingMediaItem:(id)arg2 spatialOffsets:(id)arg3 error:(id)arg4;
- (id)mediaItem;
- (id)spatialOffsets;
- (id)tracks;
- (id)tracksError;
- (id)tracksWithError:(id*)arg1;

@end
