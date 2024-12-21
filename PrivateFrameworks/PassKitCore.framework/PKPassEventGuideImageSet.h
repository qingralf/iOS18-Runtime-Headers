/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassEventGuideImageSet : PKPassImageSet {
    PKImage * _venueMapImage;
}

@property (nonatomic, retain) PKImage *venueMapImage;

+ (long long)imageSetType;
+ (bool)shouldCache;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)preheatImages;
- (void)setVenueMapImage:(id)arg1;
- (id)venueMapImage;

@end