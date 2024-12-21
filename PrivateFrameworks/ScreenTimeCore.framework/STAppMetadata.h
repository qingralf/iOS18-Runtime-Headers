/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STAppMetadata : NSObject <NSCopying> {
    NSURL * _artworkURL;
    NSString * _bundleIdentifier;
    NSString * _displayName;
    NSString * _ratingLabel;
    NSString * _software;
    NSString * _vendorName;
}

@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic, copy) NSString *software;
@property (nonatomic, copy) NSString *vendorName;

- (void).cxx_destruct;
- (id)artworkURL;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)initWithBundleIdentifier:(id)arg1 displayName:(id)arg2 artworkURL:(id)arg3 vendorName:(id)arg4 ratingLabel:(id)arg5 software:(id)arg6;
- (id)ratingLabel;
- (void)setArtworkURL:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setSoftware:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)software;
- (id)vendorName;

@end