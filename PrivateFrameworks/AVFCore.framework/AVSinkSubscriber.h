/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVSinkSubscriber : NSObject <AVCancellable> {
    struct OpaqueFigSimpleMutex { } * _cancelMutex;
    AVPublisher * _publisher;
    id /* block */  _sink;
    <AVCancellable> * _token;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)initWithPublisher:(id)arg1 requestingInitialValue:(bool)arg2 sink:(id /* block */)arg3;

@end
