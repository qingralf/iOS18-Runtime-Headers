/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTImageIOImageEncoder : NSObject <AVTImageEncoder>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)addImageOptions;
+ (id)typeIdentifier;

- (id)dataFromImage:(id)arg1;
- (id)fileExtension;
- (id)imageFromData:(id)arg1 error:(id*)arg2;
- (id)imageFromImageSource:(struct CGImageSource { }*)arg1 error:(id*)arg2;
- (id)imageFromURL:(id)arg1 error:(id*)arg2;

@end