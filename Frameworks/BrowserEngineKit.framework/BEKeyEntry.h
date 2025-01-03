/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/BrowserEngineKit.framework/BrowserEngineKit
 */

@interface BEKeyEntry : NSObject {
    UIKeyEvent * _backingKeyEvent;
    UIKey * _backingUIKey;
}

@property (nonatomic, readonly) UIKeyEvent *backingKeyEvent;
@property (nonatomic, readonly) UIKey *backingUIKey;
@property (nonatomic, readonly) UIKey *key;
@property (getter=isKeyRepeating, nonatomic, readonly) bool keyRepeating;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)_initWithUIKitKeyEvent:(id)arg1;
- (id)_uikitKeyEvent;
- (id)backingKeyEvent;
- (id)backingUIKey;
- (bool)isKeyRepeating;
- (id)key;
- (long long)state;
- (double)timestamp;
- (long long)type;

@end
