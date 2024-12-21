/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface CMCaptureUserNotification : NSObject

+ (id)notificationWithTimeout:(double)arg1 flags:(unsigned long long)arg2 dictionary:(id)arg3 error:(id*)arg4;

- (void)asyncResponse:(id)arg1 block:(id /* block */)arg2;
- (id)cancel;
- (id)initForSubclass;
- (unsigned long long)receiveResponseWithTimeout:(double)arg1 error:(id*)arg2;
- (id)updateWithTimeout:(double)arg1 flags:(unsigned long long)arg2 dictionary:(id)arg3;

@end