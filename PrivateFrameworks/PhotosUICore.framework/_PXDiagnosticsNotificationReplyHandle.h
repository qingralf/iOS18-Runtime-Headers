/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXDiagnosticsNotificationReplyHandle : NSObject <PXDiagnosticsNotificationReplyHandle> {
    long long  _idNumber;
    id /* block */  _replyBlock;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long idNumber;
@property (nonatomic, readonly, copy) id /* block */ replyBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)idNumber;
- (id)initWithIDNumber:(long long)arg1 replyBlock:(id /* block */)arg2;
- (id /* block */)replyBlock;
- (void)replyWithInfo:(id)arg1;

@end