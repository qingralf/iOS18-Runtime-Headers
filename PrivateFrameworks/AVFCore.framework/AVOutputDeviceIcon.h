/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVOutputDeviceIcon : NSObject {
    NSData * _imageData;
    NSValue * _pixelSize;
    bool  _prerendered;
}

@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSValue *pixelSize;
@property (getter=isPrerendered, nonatomic, readonly) bool prerendered;

- (void)dealloc;
- (id)imageData;
- (id)initWithDict:(id)arg1;
- (bool)isPrerendered;
- (id)pixelSize;

@end