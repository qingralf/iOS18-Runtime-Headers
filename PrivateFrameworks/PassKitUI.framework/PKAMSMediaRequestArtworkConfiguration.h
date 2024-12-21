/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAMSMediaRequestArtworkConfiguration : NSObject {
    unsigned long long  _animatedArtworkType;
    struct CGSize { 
        double width; 
        double height; 
    }  _artworkSize;
    unsigned long long  _cropType;
}

@property (nonatomic, readonly) unsigned long long animatedArtworkType;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic, readonly) unsigned long long cropType;

- (unsigned long long)animatedArtworkType;
- (struct CGSize { double x1; double x2; })artworkSize;
- (unsigned long long)cropType;
- (id)initWithArtworkSize:(struct CGSize { double x1; double x2; })arg1 artworkCropType:(unsigned long long)arg2 animatedArtworkType:(unsigned long long)arg3;

@end