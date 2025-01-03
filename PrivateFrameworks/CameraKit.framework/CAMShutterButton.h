/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMShutterButton : CMKShutterButton <CKActionMenuItemView>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit

+ (id)shutterButtonWithSpec:(struct CAMShutterButtonSpec { double x1; double x2; double x3; double x4; })arg1;

- (long long)mode;
- (void)setMode:(long long)arg1 animated:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)actionMenuShutterButton;

- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end
