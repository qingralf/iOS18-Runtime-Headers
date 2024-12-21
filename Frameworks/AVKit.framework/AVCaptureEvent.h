/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVCaptureEvent : NSObject {
    unsigned long long  _phase;
    unsigned long long  _physicalButton;
    unsigned long long  _source;
}

@property (nonatomic, readonly) unsigned long long phase;

+ (id)eventWithSource:(unsigned long long)arg1 phase:(unsigned long long)arg2;
+ (id)eventWithSource:(unsigned long long)arg1 physicalButton:(unsigned long long)arg2 phase:(unsigned long long)arg3;

- (id)description;
- (unsigned long long)phase;
- (unsigned long long)physicalButton;
- (unsigned long long)source;

@end