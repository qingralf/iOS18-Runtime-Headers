/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit
 */

@interface NTKTrackedPhotosContent : NSObject <NSSecureCoding> {
    NSUUID * _albumUUID;
    NSUUID * _shuffleUUID;
}

@property (nonatomic, readonly) NSUUID *albumUUID;
@property (nonatomic, readonly) NSUUID *shuffleUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)albumUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAlbumUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShuffleUUID:(id)arg1;
- (id)shuffleUUID;

@end