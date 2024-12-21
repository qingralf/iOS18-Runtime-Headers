/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalCancellationTokenSource : NSObject <CalCancellationToken> {
    _Atomic bool  _isCancelled;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CalCancellationToken> *token;

- (void)cancel;
- (bool)isCancelled;
- (id)token;

@end