/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DockKitCore.framework/DockKitCore
 */

@interface DockKitCore.AccessorySystemEvent : NSObject <NSSecureCoding> {
    void _header;
    void _payload;
    void name;
}

@property (nonatomic, readonly) unsigned char header;
@property (nonatomic, readonly) unsigned int payload;

+ (unsigned char)kHeaderCameraFlip;
+ (unsigned char)kHeaderCameraShutter;
+ (unsigned char)kHeaderCameraZoom;
+ (unsigned char)kHeaderEventPress;
+ (unsigned char)kHeaderEventRelease;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)header;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)payload;

@end